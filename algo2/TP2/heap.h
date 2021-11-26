#ifndef __HEAP_H__
#define __HEAP_H__

#include <stdbool.h>
#include <stddef.h>

typedef struct heap{
    void** vector;
    int tope;
}heap_t;

/*
	Precondiciones:
	Postcondiciones:
*/
heap_t* heap_crear();

/*
	Precondiciones:
	Postcondiciones:
*/
int heap_insertar(heap_t* heap, void* elemento, int (*comparador)(void*, void*));

void* heap_primero(heap_t* heap);

void* heap_extraer_raiz(heap_t* heap, int (*comparador)(void*, void*));

bool heap_vacio(heap_t* heap);

int heap_destruir(heap_t* heap, void (*funcion)(void*));

#endif /* __HEAP_H__ */