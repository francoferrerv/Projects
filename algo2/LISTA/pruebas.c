#include "pa2mm.h"
#include "lista.h"

#define SUBRAYADO "\x1b[4m"

static const int ERROR = -1;
const int ELEMENTO_0 = 0;
const int ELEMENTO_1 = 1;
const int ELEMENTO_2 = 2;
const int ELEMENTO_3 = 3;
const size_t UN_NODO = 1;
const size_t DOS_NODOS = 2;
const size_t TRES_NODOS = 3;
const size_t CUATRO_NODOS = 4;
const size_t CINCO_NODOS = 5;
const size_t POSICION_0 = 0;
const size_t POSICION_1 = 1;
const size_t POSICION_2 = 2;
const size_t POSICION_3 = 3;
const size_t POSICION_4 = 4;

void probar_creacion_lista(){

	lista_t* lista = NULL;
	pa2m_afirmar((lista = lista_crear()) != NULL, "Puedo crear una lista");
	pa2m_afirmar(lista->nodo_inicio == NULL, "Nodo inicial no apunta a nada");
	pa2m_afirmar(lista->nodo_fin == NULL, "Nodo final no apunta a nada");
	pa2m_afirmar(lista->cantidad == 0, "Cantidad de nodos es 0");

	lista_destruir(lista);
}

void probar_insertar_final_lista(){

	int elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2;

	lista_t* lista = NULL;
	pa2m_afirmar(lista_insertar(lista, &elem_1) == ERROR, "Devuelve error si no existe lista");
	lista = lista_crear();

	printf(SUBRAYADO "\nPruebas con lista vacia:\n\n" NORMAL);
	pa2m_afirmar((lista_insertar(lista, &elem_1) == 0) && (lista->cantidad == UN_NODO), "Puedo insertar un nodo");
	pa2m_afirmar(lista->nodo_fin == lista->nodo_inicio, "Nodo inicio y fin son iguales");
	pa2m_afirmar(lista->nodo_fin->siguiente == NULL, "Nodo fin no tiene siguiente");
	pa2m_afirmar(lista->nodo_fin->elemento == &elem_1, "Elemento insertado correctamente");

	printf(SUBRAYADO "\nPruebas con lista no vacia:\n\n" NORMAL);
	pa2m_afirmar((lista_insertar(lista, &elem_2) == 0) && (lista->cantidad == DOS_NODOS), "Puedo insertar un nodo");
	pa2m_afirmar(lista->nodo_fin != lista->nodo_inicio, "Nodo inicio y fin no son iguales");
	pa2m_afirmar(lista->nodo_fin->siguiente == NULL, "Nodo fin no tiene siguiente");
	pa2m_afirmar(lista->nodo_inicio->siguiente == lista->nodo_fin, "El siguiente al nodo inicio es correcto");
	pa2m_afirmar(lista->nodo_fin->elemento == &elem_2 && lista->nodo_inicio->siguiente->elemento == &elem_2, "Elemento insertado correctamente");

	lista_destruir(lista);
}

void probar_insertar_posicion_lista(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3;

	lista_t* lista = NULL;
	pa2m_afirmar(lista_insertar_en_posicion(lista, &elem_1, POSICION_0) == ERROR, "Devuelve error si no existe lista");
	lista = lista_crear();
	pa2m_afirmar(lista_insertar_en_posicion(lista, &elem_2, POSICION_2) == 0 && lista->cantidad == UN_NODO && lista->nodo_fin->elemento == &elem_2 && lista->nodo_inicio->elemento == &elem_2, "Puedo insertar un nodo con posicion invalida");
	pa2m_afirmar(lista_insertar_en_posicion(lista, &elem_0, POSICION_0) == 0 && lista->cantidad == DOS_NODOS && lista->nodo_inicio->elemento == &elem_0 && lista->nodo_fin->elemento == &elem_2, "Puedo insertar un nodo en primer lugar");
	pa2m_afirmar(lista_insertar_en_posicion(lista, &elem_1, POSICION_1) == 0 && lista->cantidad == TRES_NODOS && lista->nodo_inicio->siguiente->elemento == &elem_1 && lista->nodo_fin->elemento == &elem_2, "Puedo insertar un nodo entre dos nodos");
	pa2m_afirmar(lista_insertar_en_posicion(lista, &elem_3, POSICION_3) == 0 && lista->cantidad == CUATRO_NODOS && lista->nodo_fin->elemento == &elem_3 && lista->nodo_inicio->elemento == &elem_0 , "Puedo insertar un nodo alfinal");
	pa2m_afirmar(lista_insertar_en_posicion(lista, NULL, POSICION_0) == 0 && lista->cantidad == CINCO_NODOS && lista->nodo_inicio->elemento == NULL, "Puedo insertar NULL");

	lista_destruir(lista);
}

void probar_borrar_lista(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2;

	lista_t* lista = NULL;

	printf(SUBRAYADO "\nPruebas con borrar ultimo nodo:\n\n"NORMAL);
	pa2m_afirmar(lista_borrar(lista) == ERROR, "Devuelve error si no existe lista");
	lista = lista_crear();
	pa2m_afirmar(lista_borrar(lista) == ERROR, "Devuelve error si lista esta vacia");
	lista_insertar(lista, &elem_0);
	pa2m_afirmar(lista_borrar(lista) == 0 && lista->nodo_inicio == NULL && lista->nodo_fin == NULL && lista->cantidad == 0, "Puedo borrar de una lista conteniendo un nodo");
	lista_insertar(lista, &elem_0);
	lista_insertar(lista, &elem_1);
	pa2m_afirmar(lista_borrar(lista) == 0 && lista->cantidad == 1 && lista->nodo_inicio->elemento == &elem_0 && lista->nodo_fin->elemento == &elem_0 && lista->nodo_fin->siguiente == NULL, "Puedo borrar de una lista conteniendo multiples nodos");
	
	printf(SUBRAYADO "\nPruebas con borrar de posicion:\n\n"NORMAL);
	lista_t* lista_2 = NULL;
	pa2m_afirmar(lista_borrar_de_posicion(lista_2, POSICION_0) == ERROR, "Devuelve error si no existe lista");
	lista_2 = lista_crear();
	pa2m_afirmar(lista_borrar_de_posicion(lista_2, POSICION_0) == ERROR, "Devuelve error si lista esta vacia");
	lista_insertar(lista_2, &elem_0);
	pa2m_afirmar(lista_borrar_de_posicion(lista_2, POSICION_0) == 0 && lista_2->nodo_inicio == NULL && lista_2->nodo_fin == NULL && lista_2->cantidad == 0, "Puedo borrar de una lista conteniendo un nodo");
	lista_insertar(lista_2, &elem_2);
	lista_insertar(lista_2, &elem_0);
	lista_insertar(lista_2, &elem_1);
	pa2m_afirmar(lista_borrar_de_posicion(lista_2, POSICION_0) == 0 && lista_2->cantidad == 2 && lista_2->nodo_inicio->elemento == &elem_0 && lista_2->nodo_fin->elemento == &elem_1 && lista_2->nodo_inicio->siguiente != NULL, "Puedo borrar primero de muchos nodos");
	lista_insertar(lista_2, &elem_2);
	pa2m_afirmar(lista_borrar_de_posicion(lista_2, POSICION_1) == 0 && lista_2->cantidad == 2 && lista_2->nodo_inicio->elemento == &elem_0 && lista_2->nodo_fin->elemento == &elem_2 && lista_2->nodo_inicio->siguiente == lista_2->nodo_fin, "Puedo borrar entre dos nodos");
	pa2m_afirmar(lista_borrar_de_posicion(lista_2, POSICION_1) == 0 && lista_2->cantidad == 1 && lista_2->nodo_inicio->elemento == &elem_0 && lista_2->nodo_fin->elemento == &elem_0 && lista_2->nodo_fin != NULL, "Puedo borrar ultimo nodo");
	pa2m_afirmar(lista_borrar_de_posicion(lista_2, POSICION_3) == 0 && lista_2->cantidad == 0 && lista_2->nodo_inicio == NULL && lista_2->nodo_fin == NULL, "Puedo borrar con posicion invalida");

	lista_destruir(lista_2);
	lista_destruir(lista);

}

void probar_listar_elementos(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2;

	lista_t* lista = NULL;
	lista_t* lista_2 = NULL;

	printf(SUBRAYADO "\nPruebas con listar elementos de posicion:\n\n"NORMAL);
	pa2m_afirmar(lista_elemento_en_posicion(lista, POSICION_0) == NULL, "Devuelve NULL si no existe lista");
	lista = lista_crear();
	pa2m_afirmar(lista_elemento_en_posicion(lista, POSICION_0) == NULL, "Devuelve NULL si lista esta vacia");
	lista_insertar(lista, &elem_0);
	lista_insertar(lista, &elem_1);
	lista_insertar(lista, &elem_2);
	lista_insertar(lista, NULL);
	pa2m_afirmar(lista_elemento_en_posicion(lista, POSICION_4) == NULL, "Devuelve NULL si posicion no existe");
	pa2m_afirmar(lista_elemento_en_posicion(lista, POSICION_0) == &elem_0, "Puedo listar primer elemento");
	pa2m_afirmar(lista_elemento_en_posicion(lista, POSICION_2) == &elem_2, "Puedo listar ultimo elemento");
	pa2m_afirmar(lista_elemento_en_posicion(lista, POSICION_1) == &elem_1, "Puedo listar el elemento entre dos nodos");
	pa2m_afirmar(lista_elemento_en_posicion(lista, POSICION_3) == NULL, "Puedo listar NULL");

	printf(SUBRAYADO "\nPruebas con listar ultimo elemento:\n\n"NORMAL);
	pa2m_afirmar(lista_ultimo(lista_2) == NULL, "Devuelve NULL si no existe lista");
	lista_2 = lista_crear();
	pa2m_afirmar(lista_ultimo(lista_2) == NULL, "Devuelve NULL si lista esta vacia");
	lista_insertar(lista_2, &elem_0);
	pa2m_afirmar(lista_ultimo(lista_2) == &elem_0, "Puedo listar de una lista con un nodo");
	lista_insertar(lista_2, &elem_1);
	lista_insertar(lista_2, &elem_2);
	pa2m_afirmar(lista_ultimo(lista_2) == &elem_2, "Puedo listar de una lista con multiples nodos");
	lista_insertar(lista_2, NULL);
	pa2m_afirmar(lista_ultimo(lista_2) == NULL, "Puedo listar NULL");
	
	lista_destruir(lista);
	lista_destruir(lista_2);
}

void probar_cantidad_elementos(){

	int elem_0 = ELEMENTO_0;

	lista_t* lista = NULL;
	lista_t* lista_2 = NULL;	

	printf(SUBRAYADO "\nPruebas con ver si la lista esta vacia:\n\n"NORMAL);
	pa2m_afirmar(lista_vacia(lista) == true, "Devuelve true si no existe lista");
	lista = lista_crear();
	pa2m_afirmar(lista_vacia(lista) == true, "Devuelve true si lista esta vacia");
	lista_insertar(lista, &elem_0);
	pa2m_afirmar(lista_vacia(lista) == false, "Devuelve false si lista no esta vacia");

	printf(SUBRAYADO "\nPruebas con devolver cantidad elementos:\n\n"NORMAL);
	pa2m_afirmar(lista_elementos(lista_2) == 0, "Devuelve 0 si no existe lista");
	lista_2 = lista_crear();
	pa2m_afirmar(lista_elementos(lista_2) == 0, "Devuelve 0 si lista esta vacia");
	lista_insertar(lista_2, &elem_0);
	pa2m_afirmar(lista_elementos(lista_2) == 1, "Devuelve correctamente si lista no esta vacia");

	lista_destruir(lista);
	lista_destruir(lista_2);
}

void probar_pila(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1;

	lista_t* lista = NULL;
	printf(SUBRAYADO "\nPruebas con apilar:\n\n"NORMAL);
	pa2m_afirmar(lista_apilar(lista, &elem_0) == ERROR, "Devuelve error si no existe lista");
	lista = lista_crear();
	pa2m_afirmar(lista_apilar(lista, &elem_0) == 0 && lista->nodo_fin->elemento == &elem_0 && lista->cantidad == 1, "Puedo apilar en lista vacia");
	pa2m_afirmar(lista_apilar(lista, NULL) == 0 && lista->nodo_fin->elemento == NULL && lista->cantidad == 2, "Puedo apilar elemento NULL");
	pa2m_afirmar(lista_apilar(lista, &elem_1) == 0 && lista->nodo_fin->elemento == &elem_1 && lista->cantidad == 3, "Puedo apilar en lista no vacia");

	printf(SUBRAYADO "\nPruebas con listar tope:\n\n"NORMAL);
	lista_t* lista_2 = NULL;
	pa2m_afirmar(lista_tope(lista_2) == NULL, "Devuelve NULL si no existe lista");
	lista_2 = lista_crear();
	pa2m_afirmar(lista_tope(lista_2) == NULL, "Devuelve NULL si lista esta vacia");
	pa2m_afirmar(lista_tope(lista) == &elem_1 && lista->nodo_fin->elemento == &elem_1, "Puedo listar tope");

	printf(SUBRAYADO "\nPruebas con desapilar:\n\n"NORMAL);
	lista_t* lista_3 = NULL;
	pa2m_afirmar(lista_desapilar(lista_3) == ERROR, "Devuelve error si no existe lista");
	lista_3 = lista_crear();
	pa2m_afirmar(lista_desapilar(lista_3) == ERROR, "Devuelve error si lista esta vacia");
	pa2m_afirmar(lista_desapilar(lista) == 0 && lista->cantidad == 2 && lista->nodo_fin->elemento == NULL, "Puedo desapilar lista no vacia");
	pa2m_afirmar(lista_desapilar(lista) == 0 && lista->cantidad == 1 && lista->nodo_fin->elemento == &elem_0, "Puedo desapilar elemento NULL");

	lista_destruir(lista);
	lista_destruir(lista_2);
	lista_destruir(lista_3);
}

void probar_cola(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1;

	lista_t* lista = NULL;
	printf(SUBRAYADO "\nPruebas con encolar:\n\n"NORMAL);
	pa2m_afirmar(lista_encolar(lista, &elem_0) == ERROR, "Devuelve error si no existe lista");
	lista = lista_crear();
	pa2m_afirmar(lista_encolar(lista, &elem_0) == 0 && lista->nodo_fin->elemento == &elem_0 && lista->cantidad == 1, "Puedo encolar en lista vacia");
	pa2m_afirmar(lista_encolar(lista, NULL) == 0 && lista->nodo_fin->elemento == NULL && lista->cantidad == 2, "Puedo encolar elemento NULL");
	pa2m_afirmar(lista_encolar(lista, &elem_1) == 0 && lista->nodo_fin->elemento == &elem_1 && lista->cantidad == 3, "Puedo encolar en lista no vacia");

	printf(SUBRAYADO "\nPruebas con listar primero:\n\n"NORMAL);
	lista_t* lista_2 = NULL;
	pa2m_afirmar(lista_primero(lista_2) == NULL, "Devuelve NULL si no existe lista");
	lista_2 = lista_crear();
	pa2m_afirmar(lista_primero(lista_2) == NULL, "Devuelve NULL si lista esta vacia");
	pa2m_afirmar(lista_primero(lista) == &elem_0 && lista->nodo_inicio->elemento == &elem_0, "Puedo listar el primer elemento");

	printf(SUBRAYADO "\nPruebas con desencolar:\n\n"NORMAL);
	lista_t* lista_3 = NULL;
	pa2m_afirmar(lista_desencolar(lista_3) == ERROR, "Devuelve error si no existe lista");
	lista_3 = lista_crear();
	pa2m_afirmar(lista_desencolar(lista_3) == ERROR, "Devuelve error si lista esta vacia");
	pa2m_afirmar(lista_desencolar(lista) == 0 && lista->cantidad == 2 && lista->nodo_inicio->elemento == NULL, "Puedo desencolar lista no vacia");
	pa2m_afirmar(lista_desencolar(lista) == 0 && lista->cantidad == 1 && lista->nodo_inicio->elemento == &elem_1, "Puedo desencolar elemento NULL");

	lista_destruir(lista);
	lista_destruir(lista_2);
	lista_destruir(lista_3);
}

void probar_iterador_externo(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3;

	lista_t* lista = lista_crear();
	lista_t* lista_2 = lista_crear();
	lista_insertar(lista_2, &elem_0);
	lista_insertar(lista, &elem_0);
	lista_insertar(lista, &elem_1);
	lista_insertar(lista, &elem_2);
	lista_insertar(lista, &elem_3);

	lista_iterador_t* iterador = NULL;
	lista_iterador_t* iterador_2 = NULL;
	lista_iterador_t* iterador_3 = NULL;
	lista_iterador_t* iterador_4 = NULL;

	printf(SUBRAYADO "\nPruebas con crear iterador:\n\n"NORMAL);
	pa2m_afirmar((iterador = lista_iterador_crear(NULL)) == NULL, "Devuelve NULL si lista no existe");
	pa2m_afirmar((iterador = lista_iterador_crear(lista)) != NULL && iterador->corriente == lista->nodo_inicio && iterador->lista == lista, "Puedo crear un iterador");

	printf(SUBRAYADO "\nPruebas con ver si iterador tiene siguiente:\n\n"NORMAL);
	pa2m_afirmar(lista_iterador_tiene_siguiente(NULL) == false, "Devuelve false si no existe iterador");
	iterador_2 = lista_iterador_crear(NULL);
	pa2m_afirmar(lista_iterador_tiene_siguiente(iterador_2) == false, "Devuelve false si no existe lista");
	pa2m_afirmar(lista_iterador_tiene_siguiente(iterador) == true, "Devuelve true si tiene siguiente");
	iterador_3 = lista_iterador_crear(lista_2);
	lista_iterador_avanzar(iterador_3);
	pa2m_afirmar(lista_iterador_tiene_siguiente(iterador_3) == false, "Devuelve false si no tiene siguiente");

	printf(SUBRAYADO "\nPruebas con avanzar iterador:\n\n"NORMAL);
	pa2m_afirmar(lista_iterador_avanzar(NULL) == false, "Devuelve false si no existe iterador");
	iterador_4 =lista_iterador_crear(lista_2);
	pa2m_afirmar(lista_iterador_avanzar(iterador_4) == false && iterador_4->corriente == NULL, "Avanza pero devuelve false por que no quedan elementos");
	pa2m_afirmar(lista_iterador_avanzar(iterador) == true && iterador->corriente->elemento == &elem_1, "Devuelve true y avanza");

	printf(SUBRAYADO "\nPruebas con listar elemento con iterador:\n\n"NORMAL);
	pa2m_afirmar(lista_iterador_elemento_actual(NULL) == NULL, "Devuelve NULL si no existe iterador");
	pa2m_afirmar(lista_iterador_elemento_actual(iterador_2) == NULL, "Devuelve NULL si no existe lista");
	pa2m_afirmar(lista_iterador_elemento_actual(iterador) == &elem_1, "Puedo listar el elemento actual");
	lista_iterador_avanzar(iterador);
	lista_iterador_avanzar(iterador);
	pa2m_afirmar(lista_iterador_elemento_actual(iterador) == &elem_3, "Puedo listar ultimo elemento");

	lista_iterador_destruir(iterador);
	lista_iterador_destruir(iterador_2);
	lista_iterador_destruir(iterador_3);
	lista_iterador_destruir(iterador_4);
	lista_destruir(lista);
	lista_destruir(lista_2);
}

bool funcion_1(void* elemento, void* contexto){
    
    return(elemento && contexto);
    
}

bool funcion_2(void* elemento, void* contexto){
    
    return (*(int*)elemento != 2 && elemento && contexto);
}

void probar_iterador_interno(){

	int elem_0 = ELEMENTO_0, elem_1 = ELEMENTO_1, elem_2 = ELEMENTO_2, elem_3 = ELEMENTO_3;

	lista_t* lista = lista_crear();
	lista_t* lista_2 = lista_crear();
	lista_insertar(lista, &elem_0);
	lista_insertar(lista, &elem_1);
	lista_insertar(lista, &elem_2);
	lista_insertar(lista, &elem_3);
	int* contexto = &elem_1;

	pa2m_afirmar(lista_con_cada_elemento(NULL, funcion_1, (void*)contexto) == 0, "Devuelve 0 si lista no existe");
	pa2m_afirmar(lista_con_cada_elemento(lista, NULL, (void*)contexto) == 0, "Devuelve 0 si funcion no existe");
	pa2m_afirmar(lista_con_cada_elemento(lista_2, funcion_1, (void*)contexto) == 0, "Devuelve 0 si lista esta vacia");
	pa2m_afirmar(lista_con_cada_elemento(lista, funcion_1, (void*)contexto) == 4, "Devuelve numero correcto de elementos listados");
	pa2m_afirmar(lista_con_cada_elemento(lista, funcion_2, (void*)contexto) == 3, "Devuelve numero correcto sin recorrer toda la lista");
	lista_insertar(lista, NULL);
	pa2m_afirmar(lista_con_cada_elemento(lista, funcion_1, (void*)contexto) == 5, "NULL como elemento es valido");

	lista_destruir(lista);
	lista_destruir(lista_2);

}


int main(){

	pa2m_nuevo_grupo("PRUEBAS DE CREACION DE LISTA");
	probar_creacion_lista();
	pa2m_nuevo_grupo("PRUEBAS DE INSERTAR EN FINAL DE LISTA");
	probar_insertar_final_lista();
	pa2m_nuevo_grupo("PRUEBAS DE INSERTAR EN POSICION DE LISTA");
	probar_insertar_posicion_lista();
	pa2m_nuevo_grupo("PRUEBAS DE BORRAR EN LISTA");
	probar_borrar_lista();
	pa2m_nuevo_grupo("PRUEBAS DE LISTAR ELEMENTOS");
	probar_listar_elementos();
	pa2m_nuevo_grupo("PRUEBAS DE CANTIDAD DE ELEMENTOS");
	probar_cantidad_elementos();
	pa2m_nuevo_grupo("PRUEBAS DE PILA");
	probar_pila();
	pa2m_nuevo_grupo("PRUEBAS DE COLA");
	probar_cola();
	pa2m_nuevo_grupo("PRUEBAS DE ITERADOR EXTERNO");
	probar_iterador_externo();
	pa2m_nuevo_grupo("PRUEBAS DE ITERADOR INTERNO");
	probar_iterador_interno();

	pa2m_mostrar_reporte();

	return 0;
}