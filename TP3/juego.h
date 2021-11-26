#ifndef __JUEGO_H__
#define __JUEGO_H__

#include "defendiendo_torres.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct configuracion {

	char nombre_usuario[MAX_NOMBRE];
	int resistencia_torre_1;
	int resistencia_torre_2;
	int enanos_inicio_N1;
	int enanos_inicio_N2;
	int enanos_inicio_N3;
	int enanos_inicio_N4;
	int elfos_inicio_N1;
	int elfos_inicio_N2;
	int elfos_inicio_N3;
	int elfos_inicio_N4;
	int enanos_extra;
	int costo_enano_torre_1;
	int costo_enano_torre_2;
	int elfos_extra;
	int costo_elfo_torre_1;
	int costo_elfo_torre_2;
	int critico_legolas;
	int critico_gimli;
	int fallo_legolas;
	int fallo_gimli;
	float velocidad;

	coordenada_t camino_1_N1[MAX_LONGITUD_CAMINO];
	int tope_camino_1_N1;
	
	coordenada_t camino_2_N2[MAX_LONGITUD_CAMINO];
	int tope_camino_2_N2;

	coordenada_t camino_1_N3[MAX_LONGITUD_CAMINO];
	int tope_camino_1_N3;
	
	coordenada_t camino_2_N3[MAX_LONGITUD_CAMINO];
	int tope_camino_2_N3;

	coordenada_t camino_1_N4[MAX_LONGITUD_CAMINO];
	int tope_camino_1_N4;
	
	coordenada_t camino_2_N4[MAX_LONGITUD_CAMINO];
	int tope_camino_2_N4;

	int orcos_muertos;

} configuracion_t;

typedef struct jugador {
	char nombre_ranking[MAX_NOMBRE];
	int puntos_ranking;
	
} jugador_t;

/*
	Precondiciones: configuracion, con_configuracion, arch_grabacion y quiere grabar sean validos
	Postcondiciones: juega la partida configurada y la graba si el usuario lo pide

*/
void jugar(configuracion_t* configuracion, bool con_config, char arch_grabacion[MAX_NOMBRE], bool quiere_grabar);
/*
	Precondiciones: caminos y topes del juego sean validos
	Postcondiciones: Muestra solo el terreno con los caminos que va creando el usuario

*/
void mostrar_mapa_crear_camino(juego_t juego);
/*
	Precondiciones: las filas y columnas de la entrada y torre sean validas
	Postcondiciones: asigna la posicion a la entrada y torres

*/
void inicializar_entradas_y_torres(coordenada_t* entrada, coordenada_t* torre, int fil_entrada, int col_entrada, int fil_torre, int col_torre);

#endif