#include "abb.h"

const int ERROR = -1;

abb_t* arbol_crear(abb_comparador comparador, abb_liberar_elemento destructor){
	
	if(!comparador){
		return NULL;
	}
	abb_t* arbol = calloc(1, sizeof(abb_t));
	if(!arbol){
		return NULL;
	}
	arbol->comparador = comparador;
	arbol->destructor = destructor;

	return arbol;
}
/*
	Precondiciones: comparador y nodo nuevo sean validos
	Postcondiciones: busca recursivamente la posicion deonde insertar un elemento nuevo y lo inserta
*/
void insertar_nodo(nodo_abb_t** raiz, abb_comparador comparador, nodo_abb_t* nuevo_nodo){

	if(!*raiz){
		*raiz = nuevo_nodo;
	}
	else if(comparador(nuevo_nodo->elemento, (*raiz)->elemento) > 0){
		insertar_nodo(&((*raiz)->derecha), comparador, nuevo_nodo);
	}
	else{
		insertar_nodo(&((*raiz)->izquierda), comparador, nuevo_nodo);
	}
}

int arbol_insertar(abb_t* arbol, void* elemento){

	if(!arbol || !arbol->comparador){
		return ERROR;
	}
	nodo_abb_t* nuevo_nodo = calloc(1, sizeof(nodo_abb_t));
	if(!nuevo_nodo){
		return ERROR;
	}
	nuevo_nodo->elemento = elemento;
	insertar_nodo(&(arbol->nodo_raiz), arbol->comparador, nuevo_nodo);

	return 0;
}
/*
	Precondiciones: comparador sea valido
	Postcondiciones: busca el elemento deseado y devuelve el puntero a ese nodo
*/
static nodo_abb_t** buscar_elemento(nodo_abb_t** raiz, void* elemento, abb_comparador comparador){

	if(!*raiz){
		return NULL;
	}
	if(comparador(elemento, (*raiz)->elemento) == 0){
		return raiz;
	}
	if(comparador(elemento, (*raiz)->elemento) > 0){
		return buscar_elemento(&((*raiz)->derecha), elemento, comparador);
	}
	return buscar_elemento(&((*raiz)->izquierda), elemento, comparador);
}
void* arbol_buscar(abb_t* arbol, void* elemento){

	if(!arbol || !arbol->comparador || !arbol->nodo_raiz){
		return NULL;
	}
	nodo_abb_t** nodo_buscado = buscar_elemento(&(arbol->nodo_raiz), elemento, arbol->comparador);
	if(!nodo_buscado){
		return NULL;
	}
	return (*nodo_buscado)->elemento;
}
/*
	Precondiciones: nodo sea valido
	Postcondiciones: busca el presucesor inorden
*/
nodo_abb_t** buscar_reemplazo(nodo_abb_t** nodo){

	if((*nodo)->derecha){
		return buscar_reemplazo(&((*nodo)->derecha));
	}
	return nodo;
}

int arbol_borrar(abb_t* arbol, void* elemento){

	if(!arbol || !arbol->comparador || !arbol->nodo_raiz){
		return ERROR;
	}
	nodo_abb_t** nodo_a_borrar = buscar_elemento(&(arbol->nodo_raiz), elemento, arbol->comparador);
	if(!nodo_a_borrar){
		return ERROR;
	}

	nodo_abb_t* nodo_aux_borrar = *nodo_a_borrar;
	if((*nodo_a_borrar)->derecha && (*nodo_a_borrar)->izquierda){
		nodo_abb_t** nodo_reemplazo = buscar_reemplazo(&((*nodo_a_borrar)->izquierda));
		nodo_abb_t* nodo_aux_reemplazo = *nodo_reemplazo;
		if((*nodo_reemplazo)->izquierda){
			*nodo_reemplazo = (*nodo_reemplazo)->izquierda;
		}
		else{
			*nodo_reemplazo = NULL;
		}
		*nodo_a_borrar = nodo_aux_reemplazo;
		(*nodo_a_borrar)->derecha = nodo_aux_borrar->derecha;
		if(nodo_aux_borrar->izquierda != nodo_aux_reemplazo){
			(*nodo_a_borrar)->izquierda = nodo_aux_borrar->izquierda;
		}
	}

	else if((*nodo_a_borrar)->derecha){
		*nodo_a_borrar = (*nodo_a_borrar)->derecha;
	}

	else if((*nodo_a_borrar)->izquierda){
		*nodo_a_borrar = (*nodo_a_borrar)->izquierda;
	}
	
	else{
		(*nodo_a_borrar) = NULL;
	}
	if(arbol->destructor){
		arbol->destructor((nodo_aux_borrar)->elemento);
	}
	free(nodo_aux_borrar);
	return 0;
}

void* arbol_raiz(abb_t* arbol){

	if(!arbol || !arbol->nodo_raiz){
		return NULL;
	}
	return arbol->nodo_raiz->elemento;
}

bool arbol_vacio(abb_t* arbol){

	return(!arbol || !arbol->nodo_raiz);
}
/*
	Precondiciones: raiz, array, tamanio array y contador sean validos
	Postcondiciones: hace un recorrido inorden y agrega los elementos a un array
*/
void recorrer_inorden(nodo_abb_t* raiz, void** array, size_t tamanio_array, size_t* contador){

	if(raiz->izquierda){
		recorrer_inorden(raiz->izquierda, array, tamanio_array, contador);
	}
	if(*contador < tamanio_array){
		array[*contador] = raiz->elemento;
		*contador += 1;
	}
	if(raiz->derecha){
		recorrer_inorden(raiz->derecha, array, tamanio_array, contador);
	}
}

size_t arbol_recorrido_inorden(abb_t* arbol, void** array, size_t tamanio_array){

	if (!arbol || !array || !arbol->nodo_raiz){
		return 0;
	}
	size_t contador = 0;
	recorrer_inorden(arbol->nodo_raiz, array, tamanio_array, &contador);
	return contador;
}
/*
	Precondiciones: raiz, array, tamanio array y contador sean validos
	Postcondiciones: hace un recorrido preorden y agrega los elementos a un array
*/
void recorrer_preorden(nodo_abb_t* raiz, void** array, size_t tamanio_array, size_t* contador){

	if(*contador < tamanio_array){
		array[*contador] = raiz->elemento;
		*contador += 1;
	}
	if(raiz->izquierda){
		recorrer_preorden(raiz->izquierda, array, tamanio_array, contador);
	}
	if(raiz->derecha){
		recorrer_preorden(raiz->derecha, array, tamanio_array, contador);
	}
}

size_t arbol_recorrido_preorden(abb_t* arbol, void** array, size_t tamanio_array){

	if (!arbol || !array || !arbol->nodo_raiz){
		return 0;
	}
	size_t contador = 0;
	recorrer_preorden(arbol->nodo_raiz, array, tamanio_array, &contador);
	return contador;
}
/*
	Precondiciones: raiz, array, tamanio array y contador sean validos
	Postcondiciones: hace un recorrido postorden y agrega los elementos a un array
*/
void recorrer_postorden(nodo_abb_t* raiz, void** array, size_t tamanio_array, size_t* contador){

	if(raiz->izquierda){
		recorrer_postorden(raiz->izquierda, array, tamanio_array, contador);
	}
	if(raiz->derecha){
		recorrer_postorden(raiz->derecha, array, tamanio_array, contador);
	}
	if(*contador < tamanio_array){
		array[*contador] = raiz->elemento;
		*contador += 1;
	}
}

size_t arbol_recorrido_postorden(abb_t* arbol, void** array, size_t tamanio_array){

	if (!arbol || !array || !arbol->nodo_raiz){
		return 0;
	}
	size_t contador = 0;
	recorrer_postorden(arbol->nodo_raiz, array, tamanio_array, &contador);
	return contador;
}
/*
	Precondiciones: raiz y destructor sean validos
	Postcondiciones: recorre el arbol y va liberando los nodos y elementos
*/
static void destruir_nodos(nodo_abb_t* raiz, abb_liberar_elemento destructor){

	if(raiz->izquierda){
		destruir_nodos(raiz->izquierda, destructor);
	}
	if(raiz->derecha){
		destruir_nodos(raiz->derecha, destructor);
	}
	if(destructor){
		destructor(raiz->elemento);
	}
	free(raiz);
}

void arbol_destruir(abb_t* arbol){

	if(arbol){
		if(arbol->nodo_raiz){
			destruir_nodos(arbol->nodo_raiz, arbol->destructor);
		}
		free(arbol);
	}
}
/*
	Precondiciones:  raiz, funcion, contador y cortar_iteracion sean validos
	Postcondiciones: recorre recursivamente de manera inorden mientras invoca la funcion con cada elemento y devuelve la cantidad de elementos recorridos
*/
void recorrer_iterador_inorden(nodo_abb_t* raiz, bool (*funcion)(void*, void*), void* extra, size_t* contador, bool* cortar_iteracion){

	if(raiz->izquierda){
		recorrer_iterador_inorden(raiz->izquierda, funcion, extra, contador, cortar_iteracion);
	}
	if(!*cortar_iteracion){
		*contador += 1;
		*cortar_iteracion = funcion(raiz->elemento, extra);
	}
	if(raiz->derecha){
		recorrer_iterador_inorden(raiz->derecha, funcion, extra, contador, cortar_iteracion);
	}
}
/*
	Precondiciones:  raiz, funcion, contador y cortar_iteracion sean validos
	Postcondiciones: recorre recursivamente de manera preorden mientras invoca la funcion con cada elemento y devuelve la cantidad de elementos recorridos
*/
void recorrer_iterador_preorden(nodo_abb_t* raiz, bool (*funcion)(void*, void*), void* extra, size_t* contador, bool* cortar_iteracion){

	if(!*cortar_iteracion){
		*contador += 1;
		*cortar_iteracion = funcion(raiz->elemento, extra);
	}
	if(raiz->izquierda){
		recorrer_iterador_preorden(raiz->izquierda, funcion, extra, contador, cortar_iteracion);
	}
	if(raiz->derecha){
		recorrer_iterador_preorden(raiz->derecha, funcion, extra, contador, cortar_iteracion);
	}
}
/*
	Precondiciones:  raiz, funcion, contador y cortar_iteracion sean validos
	Postcondiciones: recorre recursivamente de manera postorden mientras invoca la funcion con cada elemento y devuelve la cantidad de elementos recorridos
*/
void recorrer_iterador_postorden(nodo_abb_t* raiz, bool (*funcion)(void*, void*), void* extra, size_t* contador, bool* cortar_iteracion){

	if(raiz->izquierda){
		recorrer_iterador_postorden(raiz->izquierda, funcion, extra, contador, cortar_iteracion);
	}
	if(raiz->derecha){
		recorrer_iterador_postorden(raiz->derecha, funcion, extra, contador, cortar_iteracion);
	}
	if(!*cortar_iteracion){
		*contador += 1;
		*cortar_iteracion = funcion(raiz->elemento, extra);
	}
}

size_t abb_con_cada_elemento(abb_t* arbol, int recorrido, bool (*funcion)(void*, void*), void* extra){

	size_t contador = 0;
	bool cortar_iteracion = false;

	if(!arbol || !funcion || !arbol->nodo_raiz){
		return 0;
	}
	if(recorrido == ABB_RECORRER_INORDEN){
		recorrer_iterador_inorden(arbol->nodo_raiz, funcion, extra, &contador, &cortar_iteracion);
	}
	if(recorrido == ABB_RECORRER_PREORDEN){
		recorrer_iterador_preorden(arbol->nodo_raiz, funcion, extra, &contador, &cortar_iteracion);
	}
	if(recorrido == ABB_RECORRER_POSTORDEN){
		recorrer_iterador_postorden(arbol->nodo_raiz, funcion, extra, &contador, &cortar_iteracion);
	}
	
	return(contador);
}