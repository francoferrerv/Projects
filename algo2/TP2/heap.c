#include "heap.h"
#include <stdio.h>
#include <stdlib.h>

static const int ERROR = -1;

heap_t* heap_crear(){

	return calloc(1, sizeof(heap_t));
}

void swap(void** vector, int i, int j){

	void* aux = vector[i];
	vector[i] = vector[j];
	vector[j] = aux;
}

void sift_up(heap_t* heap, int n, int (*comparador)(void*, void*)){

	if(n == 0){
		return;
	}
	if(comparador(heap->vector[n], heap->vector[((n-1)/2)]) < 0){
		swap(heap->vector, n, ((n-1)/2));
		sift_up(heap, ((n-1)/2), comparador);
	}
}

int heap_insertar(heap_t* heap, void* elemento, int (*comparador)(void*, void*)){

	if(!heap || !elemento || !comparador){
		return ERROR;
	}
	void* aux = realloc(heap->vector, sizeof(void*) * ((size_t)(heap->tope) + 1));
	if(!aux){
		return ERROR;
	}
	heap->vector = aux;
	heap->tope++;
	heap->vector[heap->tope-1] = elemento;
	sift_up(heap, heap->tope-1, comparador);

	return 0;
}

void* heap_primero(heap_t* heap){

	if(!heap || heap->tope == 0){
		return NULL;
	}
	return heap->vector[0];
}

int posicion_hijo_derecho(int n){
	return (2*n)+2;
}
int posicion_hijo_izquierdo(int n){
	return (2*n)+1;
}

void sift_down(heap_t* heap, int n, int (*comparador)(void*, void*)){

	int pos_der = posicion_hijo_derecho(n);
	int pos_izq = posicion_hijo_izquierdo(n);
	int pos_menor = pos_izq;

	if(pos_izq >= heap->tope){
		return;
	}
	if(pos_der < heap->tope){
		if(comparador(heap->vector[pos_der], heap->vector[pos_menor]) < 0){
			pos_menor = pos_der;
		}
	}
	if(comparador(heap->vector[n], heap->vector[pos_menor]) > 0){
		swap(heap->vector, n, pos_menor);
		sift_down(heap, pos_menor, comparador);
	}
}

void* heap_extraer_raiz(heap_t* heap, int (*comparador)(void*, void*)){

	if(heap->tope == 0 || !heap || !comparador){
		return NULL;
	}
	void* raiz = heap->vector[0];
	heap->vector[0] = heap->vector[heap->tope-1];
	heap->vector[heap->tope-1] = NULL;
	heap->tope--;
	if(heap->tope != 0){
		sift_down(heap, 0, comparador);
	}
	return raiz;
}

bool heap_vacio(heap_t* heap){
	return(heap->tope == 0);
}


int heap_destruir(heap_t* heap, void (*funcion)(void*)){

	if(!heap){
		return ERROR;
	}
	if(funcion){
		for(int i = 0; i < heap->tope; i++){
			funcion(heap->vector[i]);
		}
	}
	free(heap->vector);
	free(heap);
	return 0;
}