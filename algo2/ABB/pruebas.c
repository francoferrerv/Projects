#include "pa2mm.h"
#include "abb.h"

#define SUBRAYADO "\x1b[4m"

static const int ERROR = -1;
const int ELEMENTO_0 = 0;
const int ELEMENTO_1 = 1;
const int ELEMENTO_2 = 2;
const int ELEMENTO_3 = 3;
const int ELEMENTO_4 = 4;
const int ELEMENTO_5 = 5;

int intcmp(void* primer_numero, void* segundo_numero){

	return(*(int*)primer_numero - *(int*)segundo_numero);
}

void intdest(void* numero_a_destruir){

	free(numero_a_destruir);
}

void probar_creacion_arbol(){

	abb_t* arbol = NULL;
	abb_t* arbol_2 = NULL;
	abb_t* arbol_3 = NULL;

	pa2m_afirmar((arbol = arbol_crear(intcmp, intdest)) != NULL, "Puedo crear un arbol");
	pa2m_afirmar((arbol_2 = arbol_crear(intcmp, NULL)) != NULL, "Puedo crear un arbol sin destructor");
	pa2m_afirmar((arbol_3 = arbol_crear(NULL, intdest)) == NULL, "Devuelve NULL si no recibe comparador");
	pa2m_afirmar(arbol->nodo_raiz == NULL, "Arbol se crea vacio");
	pa2m_afirmar(arbol->comparador == intcmp && arbol->destructor == intdest && arbol_2->destructor == NULL, "Comparador y destructor inicializados correctamente");

	arbol_destruir(arbol);
	arbol_destruir(arbol_2);
}

void probar_insertar_arbol(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3, elem_4 = ELEMENTO_4;
	int* num_0 = calloc(1, sizeof(int));

	abb_t* arbol = arbol_crear(intcmp, NULL);
	abb_t* arbol_2 = arbol_crear(intcmp, intdest);
	abb_t* arbol_3 = arbol_crear(intcmp, intdest);
	abb_t* arbol_4 = arbol_crear(intcmp, NULL);
	int pudo_insertar = 0;
	int elemento;

	pa2m_afirmar(arbol_insertar(NULL, &elem_0) == ERROR, "Devuelve error si no existe arbol");
	pa2m_afirmar(arbol_insertar(arbol, &elem_1) == 0 && arbol->nodo_raiz->elemento == &elem_1 && arbol->nodo_raiz->izquierda == NULL && arbol->nodo_raiz->derecha == NULL, "Puedo insertar en arbol vacio y elemento queda como nodo raiz sin hijos");
	pa2m_afirmar(arbol_insertar(arbol, &elem_0) == 0 && arbol->nodo_raiz->elemento == &elem_1 && arbol->nodo_raiz->izquierda->elemento == &elem_0 && arbol->nodo_raiz->derecha == NULL, "Puedo insertar correctamente a la izquierda de la raiz");
	pa2m_afirmar(arbol_insertar(arbol, &elem_3) == 0 && arbol->nodo_raiz->elemento == &elem_1 && arbol->nodo_raiz->izquierda != NULL && arbol->nodo_raiz->derecha->elemento == &elem_3, "Puedo insertar correctamente a la derecha de la raiz");
	pa2m_afirmar(arbol_insertar(arbol, &elem_0) == 0 && arbol->nodo_raiz->elemento == &elem_1 && arbol->nodo_raiz->izquierda != NULL && arbol->nodo_raiz->izquierda->izquierda->elemento == &elem_0, "Puedo insertar elemento repetido");
	pa2m_afirmar(arbol_insertar(arbol, &elem_2) == 0 && arbol->nodo_raiz->elemento == &elem_1 && arbol->nodo_raiz->izquierda != NULL && arbol->nodo_raiz->derecha->elemento == &elem_3 && arbol->nodo_raiz->derecha->izquierda->elemento == &elem_2, "Elemento se inserta al final y no en el medio");
	pa2m_afirmar(arbol_insertar(arbol, &elem_4) == 0 && arbol->nodo_raiz->elemento == &elem_1 && arbol->nodo_raiz->izquierda != NULL && arbol->nodo_raiz->derecha->elemento == &elem_3 && arbol->nodo_raiz->derecha->derecha->elemento == &elem_4, "El 4 se inserta a la derecha del 3");
	pa2m_afirmar(arbol_insertar(arbol_2, num_0) == 0 && arbol_2->nodo_raiz->elemento == num_0 && arbol_2->nodo_raiz->izquierda == NULL && arbol_2->nodo_raiz->derecha == NULL, "Puedo insertar elemento del heap en arbol");
	pa2m_afirmar(arbol_insertar(arbol_3, NULL) == 0 && arbol_3->nodo_raiz != NULL && arbol_3->nodo_raiz->elemento == NULL && arbol_3->nodo_raiz->izquierda == NULL && arbol_3->nodo_raiz->derecha == NULL, "Puedo insertar NULL");
	for(int i = 0; i < 1000; i++){
		if(pudo_insertar == 0){	
			elemento = i;
			pudo_insertar = arbol_insertar(arbol_4, &elemento);
		}
	}
	pa2m_afirmar(pudo_insertar == 0, "Puedo insertar 1000 elementos");


	arbol_destruir(arbol);
	arbol_destruir(arbol_2);
	arbol_destruir(arbol_3);
	arbol_destruir(arbol_4);
}

void probar_buscar_arbol(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3;

	abb_t* arbol = arbol_crear(intcmp, NULL);

	pa2m_afirmar(arbol_buscar(NULL, &elem_0) == NULL, "Devuelve NULL si no existe arbol");
	pa2m_afirmar(arbol_buscar(arbol, &elem_0) == NULL, "Devuelve NULL si arbol esta vacio");
	arbol_insertar(arbol, &elem_1);
	arbol_insertar(arbol, &elem_0);
	arbol_insertar(arbol, &elem_2);
	pa2m_afirmar(arbol_buscar(arbol, &elem_3) == NULL, "Devuelve NULL si elemento no existe");
	pa2m_afirmar(arbol_buscar(arbol, &elem_1) == &elem_1, "Puedo buscar elemento en nodo raiz");
	pa2m_afirmar(arbol_buscar(arbol, &elem_0) == &elem_0, "Puedo buscar elemento en nodo hoja");
	arbol_insertar(arbol, &elem_3);
	pa2m_afirmar(arbol_buscar(arbol, &elem_2) == &elem_2, "Puedo buscar elemento con hijos y padre");
	pa2m_afirmar(arbol_buscar(arbol, &elem_3) == &elem_3, "Puedo buscar el numero 3");

	arbol_destruir(arbol);
}

void probar_borrar_arbol(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3, elem_4 = ELEMENTO_4;
	int* num_0 = calloc(1, sizeof(int)), *num_1 = calloc(1, sizeof(int)), *num_2 = calloc(1, sizeof(int)), *num_3 = calloc(1, sizeof(int));;
	*num_0 = 0;
	*num_1 = 1;
	*num_2 = 2;
	*num_3 = 3;
	abb_t* arbol = arbol_crear(intcmp, NULL);
	abb_t* arbol_2 = arbol_crear(intcmp, intdest);

	pa2m_afirmar(arbol_borrar(NULL, &elem_0) == ERROR, "Devuelve error si no existe arbol");
	pa2m_afirmar(arbol_borrar(arbol, &elem_0) == ERROR, "Devuelve error si arbol esta vacio");
	arbol_insertar(arbol, &elem_3);
	arbol_insertar(arbol, &elem_2);
	arbol_insertar(arbol, &elem_4);
	pa2m_afirmar(arbol_borrar(arbol, &elem_0) == ERROR, "Devuelve error si elemento no existe");
	pa2m_afirmar(arbol_borrar(arbol, &elem_3) == 0 && arbol->nodo_raiz->elemento == &elem_2 && arbol->nodo_raiz->izquierda == NULL && arbol->nodo_raiz->derecha->elemento == &elem_4, "Puedo borrar un nodo con dos hijos y reemplazar bien");
	arbol_insertar(arbol, &elem_1);
	arbol_insertar(arbol, &elem_0);
	pa2m_afirmar(arbol_borrar(arbol, &elem_2) == 0 && arbol->nodo_raiz->elemento == &elem_1 && arbol->nodo_raiz->izquierda->elemento == &elem_0 && arbol->nodo_raiz->derecha->elemento == &elem_4, "Puedo borrar un nodo con dos hijos y reemplazar con un nodo que tenia hijo");
	arbol_insertar(arbol, &elem_2);
	pa2m_afirmar(arbol_borrar(arbol, &elem_4) == 0 && arbol->nodo_raiz->elemento == &elem_1 && arbol->nodo_raiz->izquierda->elemento == &elem_0 && arbol->nodo_raiz->derecha->elemento == &elem_2, "Puedo borrar un nodo con un solo hijo");
	pa2m_afirmar(arbol_borrar(arbol, &elem_2) == 0 && arbol->nodo_raiz->elemento == &elem_1 && arbol->nodo_raiz->izquierda->elemento == &elem_0 && arbol->nodo_raiz->derecha == NULL, "Puedo borrar un nodo hoja");
	arbol_insertar(arbol, &elem_2);
	pa2m_afirmar(arbol_borrar(arbol, &elem_1) == 0 && arbol->nodo_raiz->elemento == &elem_0 && arbol->nodo_raiz->izquierda == NULL && arbol->nodo_raiz->derecha->elemento == &elem_2, "Puedo borrar el nodo raiz");
	arbol_insertar(arbol_2, num_2);
	arbol_insertar(arbol_2, num_0);
	arbol_insertar(arbol_2, num_3);
	arbol_insertar(arbol_2, num_1);
	pa2m_afirmar(arbol_borrar(arbol_2, num_2) == 0 && arbol_2->nodo_raiz->elemento == num_1 && arbol_2->nodo_raiz->izquierda->elemento == num_0 && arbol_2->nodo_raiz->derecha->elemento == num_3, "Puedo borrar bien con funcion destructor y reemplazar con un nodo no hijo del nodo borrado");
	pa2m_afirmar(arbol_borrar(arbol_2, num_3) == 0 && arbol_2->nodo_raiz->elemento == num_1 && arbol_2->nodo_raiz->izquierda->elemento == num_0 && arbol_2->nodo_raiz->derecha == NULL, "Puedo borrar el 3 que esta a la derecha del nodo raiz");

	arbol_destruir(arbol);
	arbol_destruir(arbol_2);
}

void probar_arbol_vacio_raiz(){

	int elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3;

	abb_t* arbol = arbol_crear(intcmp, NULL);
	abb_t* arbol_2 = arbol_crear(intcmp, NULL);

	printf(SUBRAYADO "\nPruebas con listar raiz arbol:\n\n" NORMAL);
	pa2m_afirmar(arbol_raiz(NULL) == NULL, "Devuelve NULL si no existe arbol");
	pa2m_afirmar(arbol_raiz(arbol) == NULL, "Devuelve NULL si arbol esta vacio");
	arbol_insertar(arbol, &elem_2);
	pa2m_afirmar(arbol_raiz(arbol) == &elem_2, "Puedo listar raiz con arbol de un nodo");
	arbol_insertar(arbol, &elem_1);
	arbol_insertar(arbol, &elem_3);
	pa2m_afirmar(arbol_raiz(arbol) == &elem_2, "Puedo listar raiz con arbol de muchos nodos");

	printf(SUBRAYADO "\nPruebas con ver si arbol esta vacio:\n\n" NORMAL);
	pa2m_afirmar(arbol_vacio(NULL) == true, "Devuelve true si no existe arbol");
	pa2m_afirmar(arbol_vacio(arbol_2) == true, "Devuelve true si arbol esta vacio");
	pa2m_afirmar(arbol_vacio(arbol) == false, "Devuelve false si no esta vacio");

	arbol_destruir(arbol);
	arbol_destruir(arbol_2);
}

void probar_recorrido_inorden(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3, elem_4 = ELEMENTO_4, elem_5 = ELEMENTO_5;

	abb_t* arbol = arbol_crear(intcmp, NULL);
	size_t tamanio_array = 7;
	void* array[tamanio_array];

	pa2m_afirmar(arbol_recorrido_inorden(NULL, array, tamanio_array) == 0, "Devuelve 0 si no existe arbol");
	pa2m_afirmar(arbol_recorrido_inorden(arbol, NULL, tamanio_array) == 0, "Devuelve 0 si no existe array");
	pa2m_afirmar(arbol_recorrido_inorden(arbol, array, 0) == 0, "Devuelve 0 si el tamaño del array es 0");
	pa2m_afirmar(arbol_recorrido_inorden(arbol, array, tamanio_array) == 0, "Devuelve 0 si arbol esta vacio");
	arbol_insertar(arbol, &elem_4);
	arbol_insertar(arbol, &elem_5);
	arbol_insertar(arbol, &elem_3);
	arbol_insertar(arbol, &elem_0);
	arbol_insertar(arbol, &elem_2);
	arbol_insertar(arbol, &elem_1);
	pa2m_afirmar(arbol_recorrido_inorden(arbol, array, tamanio_array) == 6 && *(int*)array[0] == 0 && *(int*)array[1] == 1 && *(int*)array[2] == 2 && *(int*)array[3] == 3 && *(int*)array[4] == 4 && *(int*)array[5] == 5, "Puedo recorrer correctamente sin llenar array y devuelvo numero correcto");
	tamanio_array = 3;
	void* array_2[tamanio_array];
	pa2m_afirmar(arbol_recorrido_inorden(arbol, array_2, tamanio_array) == 3 && *(int*)array_2[0] == 0 && *(int*)array_2[1] == 1 && *(int*)array_2[2] == 2, "Puedo recorrer correctamente aunque no alcance el tamaño y devuelvo numero correcto");

	arbol_destruir(arbol);
}

void probar_recorrido_preorden(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3, elem_4 = ELEMENTO_4, elem_5 = ELEMENTO_5;

	abb_t* arbol = arbol_crear(intcmp, NULL);
	size_t tamanio_array = 7;
	void* array[tamanio_array];

	pa2m_afirmar(arbol_recorrido_preorden(NULL, array, tamanio_array) == 0, "Devuelve 0 si no existe arbol");
	pa2m_afirmar(arbol_recorrido_preorden(arbol, NULL, tamanio_array) == 0, "Devuelve 0 si no existe array");
	pa2m_afirmar(arbol_recorrido_preorden(arbol, array, 0) == 0, "Devuelve 0 si el tamaño del array es 0");
	pa2m_afirmar(arbol_recorrido_preorden(arbol, array, tamanio_array) == 0, "Devuelve 0 si arbol esta vacio");
	arbol_insertar(arbol, &elem_4);
	arbol_insertar(arbol, &elem_5);
	arbol_insertar(arbol, &elem_3);
	arbol_insertar(arbol, &elem_0);
	arbol_insertar(arbol, &elem_2);
	arbol_insertar(arbol, &elem_1);
	pa2m_afirmar(arbol_recorrido_preorden(arbol, array, tamanio_array) == 6 && *(int*)array[0] == 4 && *(int*)array[1] == 3 && *(int*)array[2] == 0 && *(int*)array[3] == 2 && *(int*)array[4] == 1 && *(int*)array[5] == 5, "Puedo recorrer correctamente sin llenar array");
	tamanio_array = 3;
	void* array_2[tamanio_array];
	pa2m_afirmar(arbol_recorrido_preorden(arbol, array_2, tamanio_array) == 3 && *(int*)array_2[0] == 4 && *(int*)array_2[1] == 3 && *(int*)array_2[2] == 0, "Puedo recorrer correctamente aunque no alcance el tamaño");

	arbol_destruir(arbol);
}

void probar_recorrido_postorden(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3, elem_4 = ELEMENTO_4, elem_5 = ELEMENTO_5;

	abb_t* arbol = arbol_crear(intcmp, NULL);
	size_t tamanio_array = 7;
	void* array[tamanio_array];

	pa2m_afirmar(arbol_recorrido_postorden(NULL, array, tamanio_array) == 0, "Devuelve 0 si no existe arbol");
	pa2m_afirmar(arbol_recorrido_postorden(arbol, NULL, tamanio_array) == 0, "Devuelve 0 si no existe array");
	pa2m_afirmar(arbol_recorrido_postorden(arbol, array, 0) == 0, "Devuelve 0 si el tamaño del array es 0");
	pa2m_afirmar(arbol_recorrido_postorden(arbol, array, tamanio_array) == 0, "Devuelve 0 si arbol esta vacio");
	arbol_insertar(arbol, &elem_4);
	arbol_insertar(arbol, &elem_5);
	arbol_insertar(arbol, &elem_3);
	arbol_insertar(arbol, &elem_0);
	arbol_insertar(arbol, &elem_2);
	arbol_insertar(arbol, &elem_1);
	pa2m_afirmar(arbol_recorrido_postorden(arbol, array, tamanio_array) == 6 && *(int*)array[0] == 1 && *(int*)array[1] == 2 && *(int*)array[2] == 0 && *(int*)array[3] == 3 && *(int*)array[4] == 5 && *(int*)array[5] == 4, "Puedo recorrer correctamente sin llenar array");
	tamanio_array = 3;
	void* array_2[tamanio_array];
	pa2m_afirmar(arbol_recorrido_postorden(arbol, array_2, tamanio_array) == 3 && *(int*)array_2[0] == 1 && *(int*)array_2[1] == 2 && *(int*)array_2[2] == 0, "Puedo recorrer correctamente aunque no alcance el tamaño");

	arbol_destruir(arbol);
}

bool contar_numeros_impares(void* elemento, void* contador){

	if(elemento && contador){
		if(*(int*)elemento % 2 != 0){
			*(int*)contador += 1;
		}
	}
	return false;
}
bool contar_hasta_3(void* elemento, void* extra){

	if(elemento){
		if(*(int*)elemento == 3){
			return true;
		}
	}
	return false;
}

void probar_iterador_interno(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3, elem_4 = ELEMENTO_4, elem_5 = ELEMENTO_5;

	abb_t* arbol = arbol_crear(intcmp, NULL);
	int contador = 0;

	pa2m_afirmar(abb_con_cada_elemento(NULL, 1, contar_numeros_impares, (void*)contador) == 0, "Devuelve 0 si no existe arbol");
	pa2m_afirmar(abb_con_cada_elemento(arbol, 1, contar_numeros_impares, (void*)contador) == 0, "Devuelve 0 si arbol esta vacio");
	pa2m_afirmar(abb_con_cada_elemento(arbol, 4, contar_numeros_impares, (void*)contador) == 0, "Devuelve 0 si recorrido invalido");
	arbol_insertar(arbol, &elem_4);
	arbol_insertar(arbol, &elem_5);
	arbol_insertar(arbol, &elem_3);
	arbol_insertar(arbol, &elem_0);
	arbol_insertar(arbol, &elem_2);
	arbol_insertar(arbol, &elem_1);
	pa2m_afirmar(abb_con_cada_elemento(arbol, 1, NULL, (void*)contador) == 0, "Devuelve 0 si funcion no existe");
	pa2m_afirmar(abb_con_cada_elemento(arbol, 0, contar_numeros_impares, (void*)&contador) == 6 && contador == 3, "Iterador puede hacer recorrido inorden e invoca funcion con cada elemento");
	pa2m_afirmar(abb_con_cada_elemento(arbol, 0, contar_hasta_3, NULL) == 4, "Puedo cortar recorrido inorden antes");
	contador = 0;
	pa2m_afirmar(abb_con_cada_elemento(arbol, 1, contar_numeros_impares, (void*)&contador) == 6 && contador == 3, "Iterador puede hacer recorrido preorden e invoca funcion con cada elemento");
	pa2m_afirmar(abb_con_cada_elemento(arbol, 1, contar_hasta_3, NULL) == 2, "Puedo cortar recorrido preorden antes");
	contador = 0;
	pa2m_afirmar(abb_con_cada_elemento(arbol, 2, contar_numeros_impares, (void*)&contador) == 6 && contador == 3, "Iterador puede hacer recorrido postorden e invoca funcion con cada elemento");
	pa2m_afirmar(abb_con_cada_elemento(arbol, 2, contar_hasta_3, NULL) == 4, "Puedo cortar recorrido postorden antes");
	pa2m_afirmar(abb_con_cada_elemento(arbol, 2, contar_numeros_impares, NULL) == 6, "Puedo recorrer con puntero extra nulo");
	contador = 0;
	pa2m_afirmar(abb_con_cada_elemento(arbol, 1, contar_numeros_impares, (void*)&contador) == 6 && contador == 3, "Puedo usar bien puntero extra");

	arbol_destruir(arbol);
}

int main(){

	pa2m_nuevo_grupo("PRUEBAS DE CREACION DE ARBOL");
	probar_creacion_arbol();
	pa2m_nuevo_grupo("PRUEBAS DE INSERTAR EN ARBOL");
	probar_insertar_arbol();
	pa2m_nuevo_grupo("PRUEBAS DE BUSCAR EN ARBOL");
	probar_buscar_arbol();
	pa2m_nuevo_grupo("PRUEBAS DE BORRAR EN ARBOL");
	probar_borrar_arbol();
	pa2m_nuevo_grupo("PRUEBAS DE ARBOL VACIO Y RAIZ");
	probar_arbol_vacio_raiz();
	pa2m_nuevo_grupo("PRUEBAS DE RECORRIDO INORDEN");
	probar_recorrido_inorden();
	pa2m_nuevo_grupo("PRUEBAS DE RECORRIDO PREORDEN");
	probar_recorrido_preorden();
	pa2m_nuevo_grupo("PRUEBAS DE RECORRIDO POSTORDEN");
	probar_recorrido_postorden();
	pa2m_nuevo_grupo("PRUEBAS DE ITERADOR INTERNO");
	probar_iterador_interno();

	pa2m_mostrar_reporte();
}