#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

static const int ERROR = -1;

lista_t* lista_crear(){

	lista_t* lista = calloc(1, sizeof(lista_t));
	if(!lista){
		return NULL;
	}
	return lista;
}

int lista_insertar(lista_t* lista, void* elemento){

	if(!lista){
		return ERROR;
	}
	nodo_t* nuevo_nodo = calloc(1, sizeof(nodo_t));
	if(!nuevo_nodo){
		return ERROR;
	}
	if(lista->cantidad == 0){
		lista->nodo_inicio = nuevo_nodo;
		lista->nodo_fin = nuevo_nodo;
	}
	else{
		lista->nodo_fin->siguiente = nuevo_nodo;
		lista->nodo_fin = nuevo_nodo;
	}
	lista->nodo_fin->elemento = elemento;
	lista->cantidad++;

	return 0;
}
/*
	Precondiciones: posicion, nodo, elemento y nuevo_nodo sean validos
	Postcondiciones: inserta un nuevo nodo en la posicion deseada
*/
void insertar_en_posicion(size_t posicion, nodo_t** nodo, void* elemento, nodo_t* nuevo_nodo){

	if(posicion > 0){
		posicion--;
		insertar_en_posicion(posicion, &((*nodo)->siguiente), elemento, nuevo_nodo);
	}
	else{
		nuevo_nodo->siguiente = *nodo;
		*nodo = nuevo_nodo;
		(*nodo)->elemento = elemento;
	}
}

int lista_insertar_en_posicion(lista_t* lista, void* elemento, size_t posicion){

	if(!lista){
		return ERROR;
	}
	if(posicion >= lista->cantidad){
		return lista_insertar(lista, elemento);
	}
	nodo_t* nuevo_nodo = calloc(1, sizeof(nodo_t));
	if(!nuevo_nodo){
		return ERROR;
	}
	insertar_en_posicion(posicion, &(lista->nodo_inicio), elemento, nuevo_nodo);
	lista->cantidad++;

	return 0;
}
/*
	Precondiciones: posicion, nodo y nodo_fin sean validos
	Postcondiciones: borra el ultimo nodo y reasigna los punteros de la lista
*/
void borrar_el_ultimo(size_t posicion, nodo_t** nodo, nodo_t** nodo_fin){

	if(posicion > 1){
		posicion--;
		borrar_el_ultimo(posicion, &((*nodo)->siguiente), &(*nodo_fin));
	}
	else{
		nodo_t* nodo_aux = (*nodo)->siguiente;
		(*nodo)->siguiente = NULL;
		(*nodo_fin) = (*nodo);
		free(nodo_aux);
	}
}

int lista_borrar(lista_t* lista){

	if(!lista || lista->cantidad == 0){
		return ERROR;
	}
	if(lista->cantidad == 1){
		nodo_t* nodo_aux = lista->nodo_inicio;
		lista->nodo_inicio = NULL;
		lista->nodo_fin = NULL;
		free(nodo_aux);
	}
	else{
		borrar_el_ultimo(lista->cantidad - 1, &(lista->nodo_inicio), &(lista->nodo_fin));
	}
	lista->cantidad--;

	return 0;
}
/*
	Precondiciones: posicion y nodo sean validos
	Postcondiciones: borra un nodo de la posicion y reasigna los punteros de la lista
*/
void borrar_de_posicion(size_t posicion, nodo_t** nodo){

	if(posicion > 0){
		posicion--;
		borrar_de_posicion(posicion, &((*nodo)->siguiente));
	}
	else{
		nodo_t* nodo_aux = (*nodo);
		(*nodo) = (*nodo)->siguiente;
		nodo_aux->siguiente = NULL;
		free(nodo_aux);
	}
}

int lista_borrar_de_posicion(lista_t* lista, size_t posicion){

	if(!lista || lista->cantidad == 0){
		return ERROR;
	}
	if(posicion >= lista->cantidad - 1){
		return lista_borrar(lista);
	}
	borrar_de_posicion(posicion, &(lista->nodo_inicio));
	lista->cantidad--;

	return 0;
}
/*
	Precondiciones: posicion y nodo sean validos
	Postcondiciones: busca el elemento en la posicion deseada
*/
void* buscar_elemento(nodo_t* nodo, size_t posicion){

	if(posicion > 0){
		posicion--;
		return buscar_elemento(nodo->siguiente, posicion);
	}
	return nodo->elemento;
}

void* lista_elemento_en_posicion(lista_t* lista, size_t posicion){

	if(!lista || lista->cantidad == 0 || posicion > lista->cantidad - 1){
		return NULL;
	}
	return buscar_elemento(lista->nodo_inicio, posicion);
}

void* lista_ultimo(lista_t* lista){

	if(!lista || lista->cantidad == 0){
		return NULL;
	}
	return buscar_elemento(lista->nodo_inicio, lista->cantidad - 1);
}

bool lista_vacia(lista_t* lista){

	return (lista == NULL || lista->cantidad == 0);
}

size_t lista_elementos(lista_t* lista){

	if(!lista){
		return 0;
	}
	return lista->cantidad;
}

int lista_apilar(lista_t* lista, void* elemento){

	return lista_insertar(lista, elemento);	
}

int lista_desapilar(lista_t* lista){

	return lista_borrar(lista);
}

void* lista_tope(lista_t* lista){

	return lista_ultimo(lista);
}

int lista_encolar(lista_t* lista, void* elemento){

	return lista_insertar(lista, elemento);
}

int lista_desencolar(lista_t* lista){

	return lista_borrar_de_posicion(lista, 0);
}

void* lista_primero(lista_t* lista){

	return lista_elemento_en_posicion(lista, 0);
}
/*
	Precondiciones:	nodo sea valido
	Postcondiciones: libera a todos los nodos recursivamente
*/
void destruir_nodos(nodo_t* nodo, void (*funcion)(void*)){

	if(nodo->siguiente != NULL){
		destruir_nodos(nodo->siguiente, funcion);
	}
	if(funcion){
		funcion(nodo->elemento);
	}
	free(nodo);
}

void lista_destruir(lista_t* lista, void (*funcion)(void*)){

	if(lista != NULL){
		if(lista->nodo_inicio != NULL){
			destruir_nodos(lista->nodo_inicio, funcion);
		}
	free(lista);
	}
}

lista_iterador_t* lista_iterador_crear(lista_t* lista){

	if(!lista){
		return NULL;
	}
	lista_iterador_t* iterador = calloc(1, sizeof(lista_iterador_t));
	if(!iterador){
		return NULL;
	}
	iterador->lista = lista;
	iterador->corriente = lista->nodo_inicio;

	return iterador;
}

bool lista_iterador_tiene_siguiente(lista_iterador_t* iterador){

	return(iterador && iterador->lista && iterador->corriente);
}

bool lista_iterador_avanzar(lista_iterador_t* iterador){

	if(!iterador || !iterador->corriente){
		return false;
	}
	iterador->corriente = iterador->corriente->siguiente;
	return (iterador->corriente);
}

void* lista_iterador_elemento_actual(lista_iterador_t* iterador){

	if(!iterador || !iterador->lista || !iterador->corriente){
		return NULL;
	}
	return iterador->corriente->elemento;
}

void lista_iterador_destruir(lista_iterador_t* iterador){

	if(iterador != NULL){
		free(iterador);
	}
}

size_t lista_con_cada_elemento(lista_t* lista, bool (*funcion)(void*, void*), void *contexto){

	size_t contador = 0;
	bool seguir_iterando = true;

	if(!lista || !funcion){
		return 0;
	}
	nodo_t* nodo = lista->nodo_inicio;
	while(seguir_iterando == true && nodo != NULL){
		contador++;
		seguir_iterando = funcion(nodo->elemento, contexto);
		nodo = nodo->siguiente;
	}
	return(contador);
}