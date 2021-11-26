#include "juego.h"
#include "defendiendo_torres.h"
#include "animos.h"
#include "utiles.h"
#include <time.h>
#include <string.h>

#define FORMATO_RANKING "%[^;];%i\n"
#define FORMATO_CAMINOS "%i;%i\n"
#define FORMATO_NIVEL_O_CAMINO "%[^\n]\n"
#define FORMATO_FLOAT "%g "
#define FORMATO_INT "%i "
#define FORMATO_STRINGS "%s "
#define FORMATO_CARACTERISTICA_1 "%[^=]="
#define FORMATO_CARACTERISTICA_2 "\n%[^=]="

const char DELIMITADOR_1[2] = "=";
const char DELIMITADOR_2[2] = ".";
const char DELIMITADOR_3[2] = " ";
const char DELIMITADOR_4[2] = "_";

static const int NIVEL_1 = 1;
static const int NIVEL_2 = 2;
static const int NIVEL_3 = 3;
static const int NIVEL_4 = 4;

static const char SI = 'S';
static const char NO = 'N';
static const int SIN_MODIFICAR = -1;
static const float SIN_MODIFICAR_FLOAT = -1;

static const int MAX_TERRENO_1 = 15;
static const int MAX_TERRENO_2 = 20;

const int MAX_ARGUMENTO = 50;

const char ARRIBA = 'W';
const char IZQUIERDA = 'A';
const char ABAJO = 'S';
const char DERECHA = 'D';
const char TORRE = 'T';

static const int FIL_ENTRADA_1 = 7;
static const int ULTIMA_COLUMNA_TERRENO_1 = 14;
static const int FIL_TORRE_1 = 8;
static const int PRIMERA_COLUMNA = 0;
static const int FIL_ENTRADA_2 = 5;
static const int FIL_TORRE_2 = 10;
static const int PRIMERA_FILA = 0;
static const int ULTIMA_FILA_TERRENO_2 = 19;
static const int COL_TORRE_1 = 5;
static const int COL_TORRE_2 = 15;
static const int COL_ENTRADA_1 = 4;
static const int COL_ENTRADA_2 = 16;

const int CANT_CARACT = 9;

static const int RESISTENCIA_MAX_TORRES = 600;
static const int MAX_DEFENSORES_N1_N2 = 5;
static const int MAX_DEFENSORES_N3 = 6;
static const int MAX_DEFENSORES_N4 = 8;
static const int MAX_DEFENSOR_EXTRA = 10;
static const int COSTO_VIDA_DEF_EXTRA = 50;
static const int CRITICO_DEFECTO = 10;
static const int FALLO_DEFECTO = 25;
static const float TIEMPO_ENTRE_TURNO = 1;

const int VALOR_MULTIPLICAR = 1000;
const int DOS_LEIDOS = 2;
static const int PRIMERA_POSICION = 1;

const int UN_ARGUMENTO = 1;
const int DOS_ARGUMENTOS = 2;
const int TRES_ARGUMENTOS = 3;
const int CUATRO_ARGUMENTOS = 4;
const int PRIMER_PARAMETRO = 1;
const int SEGUNDO_PARAMETRO = 2;
const int TERCER_PARAMETRO = 3;
/*
	Precondiciones: los archivos, nombre del usuario y puntos_actual sean validos
	Postcondiciones: escribe en un archivo nuevo el ranking ordenado, agregando el ranking de la partida recien jugada

*/
void actualizar_ranking(FILE* ranking, FILE* ranking_cambio, FILE** ranking_nuevo, char nombre_usuario[MAX_NOMBRE], int* puntos_actual){

	int puntos_ranking;
	char nombre_ranking[MAX_NOMBRE];

	int leidos1 = fscanf(ranking, FORMATO_RANKING, nombre_ranking, &puntos_ranking);
	int leidos2 = fscanf(ranking_cambio, FORMATO_RANKING, nombre_usuario, puntos_actual);
	while(leidos1 == DOS_LEIDOS && leidos2 == DOS_LEIDOS){
		if(puntos_ranking == *puntos_actual){
			if(strcmp(nombre_ranking, nombre_usuario) < 0){
				fprintf(*ranking_nuevo, "%s;%i\n", nombre_ranking, puntos_ranking);
				leidos1 = fscanf(ranking, FORMATO_RANKING, nombre_ranking, &puntos_ranking);
			}
			else{
				fprintf(*ranking_nuevo, "%s;%i\n", nombre_usuario, *puntos_actual);
				leidos2 = fscanf(ranking_cambio, FORMATO_RANKING, nombre_usuario, puntos_actual);
			}
		}
		else if(puntos_ranking > *puntos_actual){
			fprintf(*ranking_nuevo, "%s;%i\n", nombre_ranking, puntos_ranking);
			leidos1 = fscanf(ranking, FORMATO_RANKING, nombre_ranking, &puntos_ranking);
		}
		else if(puntos_ranking < *puntos_actual){
			fprintf(*ranking_nuevo, "%s;%i\n", nombre_usuario, *puntos_actual);
			leidos2 = fscanf(ranking_cambio, FORMATO_RANKING, nombre_usuario, puntos_actual);
		}
	}
	while(leidos1 == DOS_LEIDOS){
		fprintf(*ranking_nuevo, "%s;%i\n", nombre_ranking, puntos_ranking);
		leidos1 = fscanf(ranking, FORMATO_RANKING, nombre_ranking, &puntos_ranking);
	}
	while(leidos2 == DOS_LEIDOS){
		fprintf(*ranking_nuevo, "%s;%i\n", nombre_usuario, *puntos_actual);
		leidos2 = fscanf(ranking_cambio, FORMATO_RANKING, nombre_usuario, puntos_actual);
	}
}
/*
	Precondiciones: nombre_usuario y puntos sean validos
	Postcondiciones: crea un archivo donde va el jugador y sus puntos para despues agregar al archivo con todos los rankings

*/
void escribir_ranking_cambio(char nombre_usuario[MAX_NOMBRE], int puntos){
	
	FILE* ranking_cambio = fopen("ranking_cambio", "w");
	if (!ranking_cambio){
		printf("No se pudo abrir el archivo");
		return;
	}
	fprintf(ranking_cambio, "%s;%i\n", nombre_usuario, puntos);
	fclose(ranking_cambio);
}
/*
	Precondiciones: configuracion sea valido
	Postcondiciones: calcula los puntos obtenidos en la partida

*/
void calcular_puntos_actuales(configuracion_t configuracion, int* puntos_actual){

	int divisor;
	divisor = configuracion.resistencia_torre_1 + configuracion.resistencia_torre_1 + configuracion.enanos_inicio_N1 + configuracion.enanos_inicio_N2 + configuracion.enanos_inicio_N3 + configuracion.enanos_inicio_N4 + 
	configuracion.elfos_inicio_N1 + configuracion.elfos_inicio_N2 + configuracion.elfos_inicio_N3 + configuracion.elfos_inicio_N4 + configuracion.elfos_extra + configuracion.enanos_extra;

	*puntos_actual = (configuracion.orcos_muertos * VALOR_MULTIPLICAR) / divisor;
}

/*
	Precondiciones: arch_config y configuracion sean validos
	Postcondiciones: calcula los puntos de la partida y lo mete en el ranking correspondiente ordenado

*/
void calcular_ranking(char arch_config[MAX_NOMBRE], configuracion_t configuracion){

	int puntos_actual; 
	char arch_ranking[MAX_NOMBRE];

	strcpy(arch_ranking, "ranking_");
	strtok(arch_config, DELIMITADOR_2);
	strcat(arch_ranking, arch_config);
	strcat(arch_ranking, ".csv");

	calcular_puntos_actuales(configuracion, &puntos_actual);
	escribir_ranking_cambio(configuracion.nombre_usuario, puntos_actual);

	FILE* ranking = fopen(arch_ranking, "r");
	if (!ranking){
		printf("creando archivo de ranking");
		rename("ranking_cambio", arch_ranking);
		return;
	}
	else{
		FILE* ranking_cambio = fopen("ranking_cambio", "r");
		if (!ranking_cambio){
			fclose(ranking);
			printf("No se pudo abrir el archivo");
			return;
		}
		FILE* ranking_nuevo = fopen("ranking_nuevo.txt", "w");
		if (!ranking_nuevo){
			fclose(ranking);
			fclose(ranking_cambio);
			printf("No se pudo abrir el archivo");
			return;
		}
		actualizar_ranking(ranking, ranking_cambio, &ranking_nuevo, configuracion.nombre_usuario, &puntos_actual);
		
		fclose(ranking);
		fclose(ranking_cambio);
		fclose(ranking_nuevo);

		remove(arch_ranking);
		rename("ranking_nuevo.txt", arch_ranking);
		remove("ranking_cambio");
	}
}
/*
	Precondiciones: -
	Postcondiciones: pregunta el nombre al usuario

*/
void preguntar_nombre(char nombre_usuario[MAX_NOMBRE]){

	printf("¿Como te llamas?\n");
	scanf("%s", nombre_usuario);
}
/*
	Precondiciones: archivo caminos sea valido
	Postcondiciones: lee el archivo y le asigna las posiciones al camino

*/
void leer_y_asignar_posiciones(FILE** caminos, coordenada_t camino[MAX_LONGITUD_CAMINO], int* tope_camino){

	int i = 0;
	*tope_camino = 0;
	int leido = DOS_LEIDOS;

	while(leido == DOS_LEIDOS && !feof(*caminos)){
		leido = fscanf(*caminos, FORMATO_CAMINOS, &(camino[i].fil), &(camino[i].col));
		camino[i].fil -= 1;
		camino[i].col -= 1;
		if(leido == DOS_LEIDOS){
			*tope_camino += 1;
		}
		i++;
	}
}
/*
	Precondiciones: numero y archivo sean validos
	Postcondiciones: segun el nivel y camino crea el camino solicitado
*/
void leer_posicion_camino(FILE** caminos, char numero_nivel[MAX_NOMBRE], char numero_camino[MAX_NOMBRE], configuracion_t* configuracion){

	if(strcmp(numero_nivel, "NIVEL 1") == 0){
		if(strcmp(numero_camino, "CAMINO 1") == 0){
			leer_y_asignar_posiciones(caminos, (*configuracion).camino_1_N1, &((*configuracion).tope_camino_1_N1));
		}
	}
	if(strcmp(numero_nivel, "NIVEL 2") == 0){
		if(strcmp(numero_camino, "CAMINO 2") == 0){
			leer_y_asignar_posiciones(caminos, (*configuracion).camino_2_N2, &((*configuracion).tope_camino_2_N2));
		}
	}
	if(strcmp(numero_nivel, "NIVEL 3") == 0){
		if(strcmp(numero_camino, "CAMINO 1") == 0){
			leer_y_asignar_posiciones(caminos, (*configuracion).camino_1_N3, &((*configuracion).tope_camino_1_N3));
		}
		if(strcmp(numero_camino, "CAMINO 2") == 0){
			leer_y_asignar_posiciones(caminos, (*configuracion).camino_2_N3, &((*configuracion).tope_camino_2_N3));
		}
	}
	if(strcmp(numero_nivel, "NIVEL 4") == 0){
		if(strcmp(numero_camino, "CAMINO 1") == 0){
			leer_y_asignar_posiciones(caminos, (*configuracion).camino_1_N4, &((*configuracion).tope_camino_1_N4));
		}
		if(strcmp(numero_camino, "CAMINO 2") == 0){
			leer_y_asignar_posiciones(caminos, (*configuracion).camino_2_N4, &((*configuracion).tope_camino_2_N4));
		}
	}
}
/*
	Precondiciones: archivo camino sea valido
	Postcondiciones: lee el archivo y asigna las posiciones a los caminos

*/
void leer_y_asignar_camino(char arch_caminos[MAX_NOMBRE], configuracion_t* configuracion){

	char nivel_o_camino[MAX_NOMBRE];
	char numero_camino[MAX_NOMBRE];
	char numero_nivel[MAX_NOMBRE];
	int i = 0;

	FILE* caminos = fopen(arch_caminos, "r");
		if (!caminos){
			printf(" No hay archivo de caminos\n");
			return;
		}
		while(!feof(caminos) && i <= 6){
			fscanf(caminos, FORMATO_NIVEL_O_CAMINO, nivel_o_camino);
			if((strcmp(nivel_o_camino, "NIVEL 1") == 0) || (strcmp(nivel_o_camino, "NIVEL 2") == 0) || (strcmp(nivel_o_camino, "NIVEL 3") == 0) || (strcmp(nivel_o_camino, "NIVEL 4") == 0)){
				strcpy(numero_nivel, nivel_o_camino);
				fscanf(caminos, FORMATO_NIVEL_O_CAMINO, numero_camino);
			}
			else if(strcmp(nivel_o_camino, "CAMINO 2") == 0){
				strcpy(numero_camino, nivel_o_camino);
			}
			leer_posicion_camino(&caminos, numero_nivel, numero_camino, configuracion);
			i++;
		}
		fclose(caminos);
}

/*
	Precondiciones: archivo config sea valido
	Postcondiciones: lee el float y lo asigna si no es -1

*/
void leer_y_asignar_float(FILE** config, float* caract){
	
	float valor;

	fscanf(*config, FORMATO_FLOAT, &valor);
	if(valor != SIN_MODIFICAR_FLOAT){
		*caract = valor;
	}	
}
/*
	Precondiciones: archivo config sea valido
	Postcondiciones: lee el numero int y lo asigna si no es -1

*/
void leer_y_asignar_valor(FILE** config, int* caract){
	
	int valor;

	fscanf(*config, FORMATO_INT, &valor);
	if(valor != SIN_MODIFICAR){
		*caract = valor;
	}	
}
/*
	Precondiciones: archivo config y nombre_caract sean validos
	Postcondiciones: asigna valores segun el tipo de caracteristica recibido

*/
void asignar_caracteristicas(FILE** config, char nombre_caract[MAX_NOMBRE], configuracion_t* configuracion){

	char arch_caminos[MAX_NOMBRE];

	if(strcmp(nombre_caract, "RESISTENCIA_TORRES") == 0){
		leer_y_asignar_valor(config, &((*configuracion).resistencia_torre_1));
		leer_y_asignar_valor(config, &((*configuracion).resistencia_torre_2));
	}
	else if(strcmp(nombre_caract, "ENANOS_INICIO") == 0){
		leer_y_asignar_valor(config, &((*configuracion).enanos_inicio_N1));
		leer_y_asignar_valor(config, &((*configuracion).enanos_inicio_N2));
		leer_y_asignar_valor(config, &((*configuracion).enanos_inicio_N3));
		leer_y_asignar_valor(config, &((*configuracion).enanos_inicio_N4));
	}
	else if(strcmp(nombre_caract, "ELFOS_INICIO") == 0){
		leer_y_asignar_valor(config, &((*configuracion).elfos_inicio_N1));
		leer_y_asignar_valor(config, &((*configuracion).elfos_inicio_N2));
		leer_y_asignar_valor(config, &((*configuracion).elfos_inicio_N3));
		leer_y_asignar_valor(config, &((*configuracion).elfos_inicio_N4));
	}
	else if(strcmp(nombre_caract, "ENANOS_EXTRA") == 0){
		leer_y_asignar_valor(config, &((*configuracion).enanos_extra));
		leer_y_asignar_valor(config, &((*configuracion).costo_enano_torre_1));
		leer_y_asignar_valor(config, &((*configuracion).costo_enano_torre_2));
	}
	else if(strcmp(nombre_caract, "ELFOS_EXTRA") == 0){
		leer_y_asignar_valor(config, &((*configuracion).elfos_extra));
		leer_y_asignar_valor(config, &((*configuracion).costo_elfo_torre_1));
		leer_y_asignar_valor(config, &((*configuracion).costo_elfo_torre_2));
	}
	else if(strcmp(nombre_caract, "ENANOS_ANIMO") == 0){
		leer_y_asignar_valor(config, &((*configuracion).fallo_gimli));
		leer_y_asignar_valor(config, &((*configuracion).critico_gimli));
	}
	else if(strcmp(nombre_caract, "ELFOS_ANIMO") == 0){
		leer_y_asignar_valor(config, &((*configuracion).fallo_legolas));
		leer_y_asignar_valor(config, &((*configuracion).critico_legolas));
	}
	else if(strcmp(nombre_caract, "VELOCIDAD") == 0){
		leer_y_asignar_float(config, &((*configuracion).velocidad));
	}
	else if(strcmp(nombre_caract, "CAMINOS") == 0){
		fscanf(*config, FORMATO_STRINGS, arch_caminos);
		leer_y_asignar_camino(arch_caminos, configuracion);
	}
}
/*
	Precondiciones: archivo config sea valido
	Postcondiciones: lee el tipo de caracteristica asigna los valores correspondientes 

*/
void leer_caracteristicas(FILE** config, configuracion_t* configuracion){

	char nombre_caract[MAX_NOMBRE];
	fscanf(*config, FORMATO_CARACTERISTICA_1, nombre_caract);
	asignar_caracteristicas(config, nombre_caract, &(*configuracion));
	for(int i = 0; i < (CANT_CARACT - 1); i++){
		fscanf(*config, FORMATO_CARACTERISTICA_2, nombre_caract);
		asignar_caracteristicas(config, nombre_caract, &(*configuracion));
	}
}
/*
	Precondiciones: arch_config, arch_grabacion, configuracion, con_config y quiere_grabar sean validos
	Postcondiciones: juega la`partida, crea un ranking y graba la partida si deseado

*/
void jugar_y_crear_ranking(char arch_config[MAX_NOMBRE], configuracion_t *configuracion, bool con_config, char arch_grabacion[MAX_NOMBRE], bool quiere_grabar){

	FILE* config = fopen(arch_config, "r");
	if (!config){				
		printf("No se pudo abrir el archivo");
		return;
	}
	leer_caracteristicas(&config, configuracion);
	jugar(configuracion, con_config, arch_grabacion, quiere_grabar);
	fclose(config);
	calcular_ranking(arch_config, *configuracion);
}
/*
	Precondiciones: arg_2, arg_3 y argc sean validos
	Postcondiciones: corta los argumentos para encontrar el archivo de grabacion y el de configuracion

*/
void cortar_strings_jugar(char arg_2[MAX_ARGUMENTO], char arg_3[MAX_ARGUMENTO], char arch_grabacion[MAX_NOMBRE], char arch_config[MAX_NOMBRE], bool *con_config, bool *quiere_grabar, int argc){

	char *parametro_1;
	char *parametro_2;

	if(argc == DOS_ARGUMENTOS){
		strcpy(arch_grabacion, "no_grabar");
		*con_config = false;
		strcpy(arch_config, "config_defecto.txt");
	}
	else if(argc > TRES_ARGUMENTOS){
		parametro_1 = strtok(arg_2, DELIMITADOR_1);
		if(strcmp(parametro_1, "config") == 0){
			strcpy(arch_config, strtok(NULL,DELIMITADOR_1));
			parametro_2 = strtok(arg_3, DELIMITADOR_1);
			if(strcmp(parametro_2, "grabacion") == 0){
				strcpy(arch_grabacion, strtok(NULL, DELIMITADOR_1));
				*quiere_grabar = true;
			}
		}
	}
	else if(argc == TRES_ARGUMENTOS){
		parametro_1 = strtok(arg_2, DELIMITADOR_1);
		if(strcmp(parametro_1, "config") == 0){
			strcpy(arch_config, strtok(NULL,DELIMITADOR_1));
			strcpy(arch_grabacion, "no_grabar");
		}
		if(strcmp(parametro_1, "grabacion") == 0){
			strcpy(arch_grabacion, strtok(NULL, DELIMITADOR_1));
			*quiere_grabar = true;
			strcpy(arch_config, "config_defecto.txt");
		}
	}
}

/*
	Precondiciones: -
	Postcondiciones: inicializa la configuracion con los valores defectos

*/
void inicializar_config_defecto(configuracion_t* config){

	coordenada_t entrada;
	coordenada_t torre;

	preguntar_nombre((*config).nombre_usuario);
	(*config).resistencia_torre_1 = RESISTENCIA_MAX_TORRES;
	(*config).resistencia_torre_2 = RESISTENCIA_MAX_TORRES;
	(*config).enanos_inicio_N1 = MAX_DEFENSORES_N1_N2;
	(*config).enanos_inicio_N2 = 0;
	(*config).enanos_inicio_N3 = (MAX_DEFENSORES_N3 / 2);
	(*config).enanos_inicio_N4 = (MAX_DEFENSORES_N4 / 2);
	(*config).elfos_inicio_N1 = 0;
	(*config).elfos_inicio_N2 = MAX_DEFENSORES_N1_N2;
	(*config).elfos_inicio_N3 = (MAX_DEFENSORES_N3 / 2);
	(*config).elfos_inicio_N4 = (MAX_DEFENSORES_N4 / 2);
	(*config).enanos_extra = MAX_DEFENSOR_EXTRA;
	(*config).costo_enano_torre_1 = COSTO_VIDA_DEF_EXTRA;
	(*config).costo_enano_torre_2 = 0;
	(*config).elfos_extra = MAX_DEFENSOR_EXTRA;
	(*config).costo_elfo_torre_1 = 0;
	(*config).costo_elfo_torre_2 = COSTO_VIDA_DEF_EXTRA;
	(*config).critico_legolas = CRITICO_DEFECTO;
	(*config).critico_gimli = CRITICO_DEFECTO;
	(*config).fallo_legolas = FALLO_DEFECTO;
	(*config).fallo_gimli = FALLO_DEFECTO;
	(*config).velocidad = TIEMPO_ENTRE_TURNO;

	inicializar_entradas_y_torres(&entrada, &torre, FIL_ENTRADA_1, ULTIMA_COLUMNA_TERRENO_1, FIL_TORRE_1, PRIMERA_COLUMNA);
	obtener_camino((*config).camino_1_N1, &((*config).tope_camino_1_N1), entrada, torre);
	inicializar_entradas_y_torres(&entrada, &torre, FIL_ENTRADA_2, PRIMERA_COLUMNA, FIL_TORRE_2, ULTIMA_COLUMNA_TERRENO_1);
	obtener_camino((*config).camino_2_N2, &((*config).tope_camino_2_N2), entrada, torre);
	inicializar_entradas_y_torres(&entrada, &torre, PRIMERA_FILA, COL_ENTRADA_1, ULTIMA_FILA_TERRENO_2, COL_TORRE_1);
	obtener_camino((*config).camino_1_N3, &((*config).tope_camino_1_N3), entrada, torre);
	inicializar_entradas_y_torres(&entrada, &torre, PRIMERA_FILA, COL_ENTRADA_2, ULTIMA_FILA_TERRENO_2, COL_TORRE_2);
	obtener_camino((*config).camino_2_N3, &((*config).tope_camino_2_N3), entrada, torre);
	inicializar_entradas_y_torres(&entrada, &torre, ULTIMA_FILA_TERRENO_2, COL_ENTRADA_1, PRIMERA_FILA, COL_TORRE_1);
	obtener_camino((*config).camino_1_N4, &((*config).tope_camino_1_N4), entrada, torre);
	inicializar_entradas_y_torres(&entrada, &torre, ULTIMA_FILA_TERRENO_2, COL_ENTRADA_2, PRIMERA_FILA, COL_TORRE_2);
	obtener_camino((*config).camino_2_N4, &((*config).tope_camino_2_N4), entrada, torre);

	(*config).orcos_muertos = 0;
}
/*
	Precondiciones: arch_grabacion y tiempo_velocidad sean validos
	Postcondiciones: lee el archivo de grabacion e imprime la partida

*/
void leer_e_imprimir_grabacion(char arch_grabacion[MAX_NOMBRE], float tiempo_velocidad){

	juego_t juego;

	FILE* grabacion = fopen(arch_grabacion, "r");
		if (!arch_grabacion){
			printf("No se pudo abrir el archivo");
			return;
		}
		while(!feof(grabacion)){
			fread(&juego, sizeof(juego_t), 1, grabacion);
			mostrar_juego(juego);
			detener_el_tiempo(tiempo_velocidad);
		}
}
/*
	Precondiciones: arg_2, arg_3 y argc sean validos
	Postcondiciones: corta los argumentos para encontrar el tiempo de velocidad y el archivo de grabacion

*/
void cortar_strings_grabacion(char arg_2[MAX_ARGUMENTO], char arg_3[MAX_ARGUMENTO], char arch_grabacion[MAX_NOMBRE], float *tiempo_velocidad, int argc){

	char *parametro_1;
	char *parametro_2;

	parametro_1 = strtok(arg_2, DELIMITADOR_1);
	if(strcmp(parametro_1, "grabacion") == 0){
		strcpy(arch_grabacion, strtok(NULL,DELIMITADOR_1));
		if(argc > TRES_ARGUMENTOS){
			parametro_2 = strtok(arg_3, DELIMITADOR_1);
			if(strcmp(parametro_2, "velocidad") == 0){
				*tiempo_velocidad = (float) atof(strtok(NULL, DELIMITADOR_1));
			}
		}
		else{
			*tiempo_velocidad = TIEMPO_ENTRE_TURNO;
		}
	}
}
/*
	Precondiciones: archivo config sea valido
	Postcondiciones: escribe la ruta de los caminos en el archivo si quiere el usuario

*/
void preguntar_y_modificar_caminos(FILE** arch_config){
	char respuesta;
	char ruta_archivo[MAX_NOMBRE];

	printf("¿Queres modificar los caminos? (S = Si N = No)\n");
	scanf(" %c", &respuesta);
	while(respuesta != SI && respuesta != NO){
		printf("Ingrese S o N\n");
		scanf(" %c", &respuesta);
	}
	if(respuesta == SI){
		printf("Ingrese la ruta del archivo que contiene los caminos modificados\n");
		scanf("%s", ruta_archivo);
		fprintf(*arch_config, "%s", ruta_archivo);
	}
	else{
		fprintf(*arch_config, "%i ", SIN_MODIFICAR);
	}
}
/*
	Precondiciones: archivo config sea valido
	Postcondiciones: modifica el valor de la velocidad si el usuario quiere

*/
void preguntar_y_modificar_velocidad(FILE** arch_config, float* caract_a_modificar, char nombre_caract[MAX_NOMBRE]){
	char respuesta;

	printf("¿Queres modificar %s? (S = Si N = No)\n", nombre_caract);
	scanf(" %c", &respuesta);
	while(respuesta != SI && respuesta != NO){
		printf("Ingrese S o N\n");
		scanf(" %c", &respuesta);
	}
	if(respuesta == SI){
		printf("¿Que valor le queres asignar?\n");
		scanf("%g", caract_a_modificar);
	}
	if(respuesta == NO){
		*caract_a_modificar = SIN_MODIFICAR_FLOAT;
	}
	fprintf(*arch_config, "%g ", *caract_a_modificar);
}
/*
	Precondiciones: archivo config sea valido
	Postcondiciones: modifica el valor de la caracteristica si el usuario lo quiere

*/
void preguntar_y_modificar_caracteristica(FILE** arch_config, int* caract_a_modificar, char nombre_caract[MAX_NOMBRE]){
	char respuesta;

	printf("¿Queres modificar %s? (S = Si N = No)\n", nombre_caract);
	scanf(" %c", &respuesta);
	while(respuesta != SI && respuesta != NO){
		printf("Ingrese S o N\n");
		scanf(" %c", &respuesta);
	}
	if(respuesta == SI){
		printf("¿Que valor le queres asignar?\n");
		scanf("%i", caract_a_modificar);
	}
	if(respuesta == NO){
		*caract_a_modificar = SIN_MODIFICAR;
	}
	fprintf(*arch_config, "%i ", *caract_a_modificar);
}
/*
	Precondiciones: archivo config sea valido
	Postcondiciones: escribe todas las caracteristicas y sus valores

*/
void escribir_caracteristicas(FILE** arch_config, configuracion_t* configuracion){
	fprintf(*arch_config, "%s", "RESISTENCIA_TORRES=");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).resistencia_torre_1), "la Resistencia Torre 1");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).resistencia_torre_2), "la Resistencia Torre 2");
	
	fprintf(*arch_config, "%s", "\nENANOS_INICIO=");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).enanos_inicio_N1), "la cantidad de enanos iniciales del nivel 1");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).enanos_inicio_N2), "la cantidad de enanos iniciales del nivel 2");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).enanos_inicio_N3), "la cantidad de enanos iniciales del nivel 3");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).enanos_inicio_N4), "la cantidad de enanos iniciales del nivel 4");

	fprintf(*arch_config, "%s", "\nELFOS_INICIO=");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).elfos_inicio_N1), "la cantidad de elfos iniciales del nivel 1");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).elfos_inicio_N2), "la cantidad de elfos iniciales del nivel 2");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).elfos_inicio_N3), "la cantidad de elfos iniciales del nivel 3");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).elfos_inicio_N4), "la cantidad de elfos iniciales del nivel 4");

	fprintf(*arch_config, "%s", "\nENANOS_EXTRA=");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).enanos_extra), "la cantidad de enanos extra");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).costo_enano_torre_1), "el costo de vida a la torre 1 de los enanos");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).costo_enano_torre_2), "el costo de vida a la torre 2 de los enanos");

	fprintf(*arch_config, "%s", "\nELFOS_EXTRA=");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).elfos_extra), "la cantidad de elfos extra");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).costo_elfo_torre_1), "el costo de vida a la torre 1 de los elfos");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).costo_elfo_torre_2), "el costo de vida a la torre 2 de los elfos");
	
	fprintf(*arch_config, "%s", "\nENANOS_ANIMO=");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).fallo_gimli), "el fallo de los enanos");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).critico_gimli), "el critico de los enanos");

	fprintf(*arch_config, "%s", "\nELFOS_ANIMO=");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).fallo_legolas), "el fallo de los elfos");
	preguntar_y_modificar_caracteristica(arch_config, &((*configuracion).critico_legolas), "el critico de los elfos");

	fprintf(*arch_config, "%s", "\nVELOCIDAD=");
	preguntar_y_modificar_velocidad(arch_config, &((*configuracion).velocidad), "la velocidad del juego");

	fprintf(*arch_config, "%s", "\nCAMINOS=");
	preguntar_y_modificar_caminos(arch_config);
}
/*
	Precondiciones: argumento sea valido
	Postcondiciones: crea el archivo de configuracion

*/
void crear_configuracion(char argumento[MAX_ARGUMENTO], configuracion_t* configuracion){
	
	FILE* arch_config = fopen(argumento, "w");
		if (!arch_config){
			printf("No se pudo abrir el archivo");
			return;
		}
		escribir_caracteristicas(&arch_config, configuracion);
		fclose(arch_config);
}
/*
	Precondiciones: archivo caminos y posicion sean validos
	Postcondiciones: asigna la posicion creada al camino y lo escribe en el archivo

*/
void asignar_posicion_camino(FILE** caminos, coordenada_t posicion, coordenada_t* posicion_camino, int* tope_camino){
	(*posicion_camino).fil = posicion.fil - 1;
	(*posicion_camino).col = posicion.col - 1;
	*tope_camino += 1;
	fprintf(*caminos, FORMATO_CAMINOS, posicion.fil, posicion.col);

}
/*
	Precondiciones: max_terreno sea valido
	Postcondiciones: asigna la posicion deseada por el usuario y verifica si es valida

*/
bool elegir_proxima_posicion(coordenada_t* posicion, int max_terreno, bool* camino_terminado){

	char direccion;
	bool creo_camino = false;


	printf("\nIngrese con W,A,S o D para elegir la proxima posicion del camino o T para terminar el camino (en un borde)\n");
	scanf(" %c", &direccion);
	while(direccion != ARRIBA && direccion != IZQUIERDA && direccion != ABAJO && direccion != DERECHA && direccion != TORRE){
		printf("Ingrese W,A,S,D o T si estas en un borde\n");
		scanf(" %c", &direccion);
	}
	if(direccion == ARRIBA){
		if((*posicion).fil != PRIMERA_POSICION){
			(*posicion).fil -= 1;
			creo_camino = true;
		}
	}
	else if(direccion == IZQUIERDA){
		if((*posicion).col != PRIMERA_POSICION){
			(*posicion).col -= 1;
			creo_camino = true;
		}
	}
	if(direccion == ABAJO){
		if((*posicion).fil != max_terreno){
			(*posicion).fil += 1;
			creo_camino = true;
		}
	}
	else if(direccion == DERECHA){
		if((*posicion).col != max_terreno){
			(*posicion).col += 1;
			creo_camino = true;
		}
	}
	else if(direccion == TORRE){
		if((*posicion).col == max_terreno || (*posicion).col == PRIMERA_POSICION || (*posicion).fil == max_terreno || (*posicion).fil == PRIMERA_POSICION){
			*camino_terminado = true;
			creo_camino = true;
		}
		else{
			printf("No estas en un borde");
		}
	}
	return(creo_camino);
}
/*
	Precondiciones: nivel sea valido
	Postcondiciones: inicializa el max_terreno segun el nivel

*/
void inicializar_max_terreno(int nivel, int* max_terreno){
	if(nivel == NIVEL_1 || nivel == NIVEL_2){
		*max_terreno = MAX_TERRENO_1;
	}
	if(nivel == NIVEL_3 || nivel == NIVEL_4){
		*max_terreno = MAX_TERRENO_2;
	}
}

void dibujar_camino(FILE** caminos, coordenada_t *posicion, juego_t* juego, int max_terreno){
	
	int i = 0;
	bool camino_terminado = false;
	bool posicion_valida;
	(*juego).nivel.tope_camino_1 = 0;
	while(i < MAX_LONGITUD_CAMINO && camino_terminado == false){
		asignar_posicion_camino(caminos, *posicion, &((*juego).nivel.camino_1[i]), &(*juego).nivel.tope_camino_1);
		mostrar_mapa_crear_camino(*juego);
		posicion_valida = elegir_proxima_posicion(posicion, max_terreno, &camino_terminado);
		while(posicion_valida == false){
			posicion_valida = elegir_proxima_posicion(posicion, max_terreno, &camino_terminado);
		}
		i++;
	}
}

/*
	Precondiciones: max_terreno sea valido
	Postcondiciones: pregunta la posicion de la entrada y la valida

*/
void preguntar_entrada(coordenada_t* posicion, int max_terreno){
	printf("\nIngrese la fila donde quieras poner la entrada (tiene que ser en el borde)\n");
	scanf("%i", &((*posicion).fil));
	while((*posicion).fil < PRIMERA_POSICION || (*posicion).fil > max_terreno){
		printf("Ingrese una fila del borde\n");
		scanf("%i", &((*posicion).fil));
	}
	printf("Ingrese la columna donde quieras poner la entrada (tiene que ser en el borde)\n");
	scanf("%i", &((*posicion).col));
	while((*posicion).col < PRIMERA_POSICION || (*posicion).col > max_terreno){
		printf("Ingrese una columna del borde\n");
		scanf("%i", &((*posicion).col));
	}
}
/*
	Precondiciones: archivo caminos y max_terreno sean validos
	Postcondiciones: el usuario dibuja los caminos que desea crear

*/
void preguntar_entrada_y_dibujar_camino(FILE** caminos, juego_t* juego, int max_terreno){
	coordenada_t posicion;

	mostrar_mapa_crear_camino(*juego);
	preguntar_entrada(&posicion, max_terreno);
	while(posicion.col != max_terreno && posicion.col != PRIMERA_POSICION && posicion.fil != max_terreno && posicion.fil != PRIMERA_POSICION){
		printf("Esa posicion no esta en el borde\n");
		preguntar_entrada(&posicion, max_terreno);
	}
	if((*juego).nivel_actual == NIVEL_1){
		fprintf(*caminos, "%s\n", "NIVEL 1");
		fprintf(*caminos, "%s\n", "CAMINO 1");
		dibujar_camino(caminos, &posicion, juego, max_terreno);
	}
	if((*juego).nivel_actual == NIVEL_2){
		fprintf(*caminos, "%s\n", "NIVEL 2");
		fprintf(*caminos, "%s\n", "CAMINO 2");
		dibujar_camino(caminos, &posicion, juego, max_terreno);
	}
	if((*juego).nivel_actual == NIVEL_3){
		fprintf(*caminos, "%s\n", "NIVEL 3");
		fprintf(*caminos, "%s\n", "CAMINO 1");
		dibujar_camino(caminos, &posicion, juego, max_terreno);

		preguntar_entrada(&posicion, max_terreno);
		while(posicion.col != max_terreno && posicion.col != PRIMERA_POSICION && posicion.fil != max_terreno && posicion.fil != PRIMERA_POSICION){
			printf("Esa posicion no esta en el borde\n");
			preguntar_entrada(&posicion, max_terreno);
		}

		fprintf(*caminos, "%s\n", "CAMINO 2");
		dibujar_camino(caminos, &posicion, juego, max_terreno);
	}
	if((*juego).nivel_actual == NIVEL_4){
		fprintf(*caminos, "%s\n", "NIVEL 4");
		fprintf(*caminos, "%s\n", "CAMINO 1");
		dibujar_camino(caminos, &posicion, juego, max_terreno);

		preguntar_entrada(&posicion, max_terreno);
		while(posicion.col != max_terreno && posicion.col != PRIMERA_POSICION && posicion.fil != max_terreno && posicion.fil != PRIMERA_POSICION){
			printf("Esa posicion no esta en el borde\n");
			preguntar_entrada(&posicion, max_terreno);
		}

		fprintf(*caminos, "%s\n", "CAMINO 2");
		dibujar_camino(caminos, &posicion, juego, max_terreno);
	}
}
/*
	Precondiciones: archivo caminos y nivel sean validos
	Postcondiciones: pregunta al usuario si quiere crear un camino

*/
void preguntar_y_crear_camino(FILE** caminos, int nivel){
	char respuesta;
	int max_terreno;
	juego_t juego;

	juego.nivel_actual = nivel;
	juego.nivel.tope_camino_1 = 0;
	juego.nivel.tope_camino_2 = 0;
	printf("¿Queres crear caminos para el nivel %i? (S = Si N = No)\n", nivel);
	scanf(" %c", &respuesta);
	while(respuesta != SI && respuesta != NO){
		printf("Ingrese S o N\n");
		scanf(" %c", &respuesta);
	}
	if(respuesta == SI){
		inicializar_max_terreno(nivel, &max_terreno);
		preguntar_entrada_y_dibujar_camino(caminos, &juego, max_terreno);
	}
}
/*
	Precondiciones: argumento sea valido
	Postcondiciones: crea los caminos para todos los niveles si deseado

*/
void crear_caminos(char argumento[MAX_ARGUMENTO]){

	FILE* caminos = fopen(argumento, "w");
	if (!caminos){
		printf("No se pudo abrir el archivo");
		return;
	}
	preguntar_y_crear_camino(&caminos, NIVEL_1);
	preguntar_y_crear_camino(&caminos, NIVEL_2);
	preguntar_y_crear_camino(&caminos, NIVEL_3);
	preguntar_y_crear_camino(&caminos, NIVEL_4);
	fclose(caminos);
}

/*
	Precondiciones: archivo ranking sea valido
	Postcondiciones: lee los valores del archivo

*/
int leer_ranking(FILE* ranking, jugador_t* jugador){
	fscanf(ranking, FORMATO_RANKING, (*jugador).nombre_ranking, &((*jugador).puntos_ranking));
	return(1);
}
/*
	Precondiciones: archivo ranking y listar_todos sean validos
	Postcondiciones: lee el archivo de ranking e imprime una cierta cantidad o todos los jugadores y puntajes

*/
void leer_e_imprimir_ranking(char arch_ranking[MAX_NOMBRE], bool listar_todos, int cant_ranking){

	int leidos = 0;
	jugador_t jugador;

	FILE* ranking = fopen(arch_ranking, "r");
		if (!ranking){
			printf("No existe el archivo");
			return;
		}
		if(listar_todos == false){
			while((leidos < (cant_ranking)) && !feof(ranking)){
				leidos += leer_ranking(ranking, &jugador);
				printf("%s: %i\n", jugador.nombre_ranking, jugador.puntos_ranking);
			}
		}
		else{
			while(!feof(ranking)){
				leidos += leer_ranking(ranking, &jugador);
				printf("%s: %i\n", jugador.nombre_ranking, jugador.puntos_ranking);
			}
		}
		fclose(ranking);
}
/*
	Precondiciones: argc, arg_2 y arg_3 sean validos
	Postcondiciones: corta los strings de los argumentos para encontrar la cantidad que hay que listar y el archivo de donde leer

*/
void cortar_strings_ranking(char arg_2[MAX_ARGUMENTO], char arg_3[MAX_ARGUMENTO], int* cant_ranking, char ruta_archivo[MAX_NOMBRE], int argc, bool* listar_todos){

	char* parametro_1;
	char* parametro_2;

	if(argc > DOS_ARGUMENTOS){
		parametro_1 = strtok(arg_2, DELIMITADOR_1);
		if(argc > TRES_ARGUMENTOS){
			if(strcmp(parametro_1, "listar") == 0){
				*cant_ranking = atoi(strtok(NULL, DELIMITADOR_1));
				*listar_todos = false;
				parametro_2 = strtok(arg_3, DELIMITADOR_1);
				if(strcmp(parametro_2, "config") == 0){
					strcpy(ruta_archivo, strcat(strtok(NULL, DELIMITADOR_2), ".csv"));
				}
			}
		}
		else if(argc == TRES_ARGUMENTOS){
			if(strcmp(parametro_1, "listar") == 0){
				*cant_ranking = atoi(strtok(NULL,DELIMITADOR_1));
				*listar_todos = false;
				strcpy(ruta_archivo, "config_defecto.csv");
			}
			if(strcmp(parametro_1, "config") == 0){
				strcpy(ruta_archivo, strcat(strtok(NULL, DELIMITADOR_2), ".csv"));
			}
		}
	}
	else{
		strcpy(ruta_archivo, "config_defecto.csv");
	}
}

bool verificar_cant_argumentos(int argc, int cant_arg_max, int cant_arg_min){

	if(argc <= cant_arg_max && argc > cant_arg_min){
		return(true);
	}
	else{
		printf("No escribiste una cantidad valida de argumentos\n");
		return(false);
	}
}

int main(int argc, char *argv[]){

	configuracion_t configuracion;
	int cant_ranking;
	char arch_ranking[MAX_NOMBRE];
	char ruta_archivo[MAX_NOMBRE];
	bool listar_todos = true;
	char arch_config[MAX_NOMBRE];
	char arch_grabacion[MAX_NOMBRE];
	float tiempo_velocidad = 1;
	bool quiere_grabar = false;
	bool con_config = true;

	if(argc > UN_ARGUMENTO){
		/*            RANKING            */
		if(strcmp(argv [PRIMER_PARAMETRO], "ranking") == 0){
			if(verificar_cant_argumentos(argc, CUATRO_ARGUMENTOS, UN_ARGUMENTO)){
				cortar_strings_ranking(argv[SEGUNDO_PARAMETRO], argv[TERCER_PARAMETRO], &cant_ranking, ruta_archivo, argc, &listar_todos);
				strcpy(arch_ranking, "ranking_");
				strcat(arch_ranking, ruta_archivo);
				leer_e_imprimir_ranking(arch_ranking, listar_todos, cant_ranking);
			}
		}

		/*          CREAR CAMINO         */
		if(strcmp(argv [PRIMER_PARAMETRO], "crear_camino") == 0){
			if(verificar_cant_argumentos(argc, TRES_ARGUMENTOS, DOS_ARGUMENTOS)){
				crear_caminos(argv[SEGUNDO_PARAMETRO]);
			}
		}

		/*       CREAR CONFIGURACION     */
		if(strcmp(argv [PRIMER_PARAMETRO], "crear_configuracion") == 0){
			if(verificar_cant_argumentos(argc, TRES_ARGUMENTOS, DOS_ARGUMENTOS)){
				crear_configuracion(argv[SEGUNDO_PARAMETRO], &configuracion);
			}
		}

		/*         PONEME LA REPE        */
		if(strcmp(argv [PRIMER_PARAMETRO], "poneme_la_repe") == 0){
			if(verificar_cant_argumentos(argc, CUATRO_ARGUMENTOS, DOS_ARGUMENTOS)){
				cortar_strings_grabacion(argv[SEGUNDO_PARAMETRO], argv[TERCER_PARAMETRO], arch_grabacion, &tiempo_velocidad, argc);
				leer_e_imprimir_grabacion(arch_grabacion, tiempo_velocidad);
			}
		}

		/*             JUGAR             */
		if(strcmp(argv [PRIMER_PARAMETRO], "jugar") == 0){
			if(verificar_cant_argumentos(argc, CUATRO_ARGUMENTOS, UN_ARGUMENTO)){
				inicializar_config_defecto(&configuracion);
				cortar_strings_jugar(argv[SEGUNDO_PARAMETRO], argv[TERCER_PARAMETRO], arch_grabacion, arch_config, &con_config, &quiere_grabar, argc);
				jugar_y_crear_ranking(arch_config, &configuracion, con_config, arch_grabacion, quiere_grabar);
			}
		}
	}
	else{
		printf("No escribiste parametros");
	}
	return 0;
} 