#include "juego.h"
#include "defendiendo_torres.h"
#include "animos.h"
#include "utiles.h"
#include <time.h>

static const int JUGANDO = 0;
static const int INVALIDO = -1;
static const int GANADO = 1;
static const int PERDISTE = -1;

static const int NIVEL_1 = 1;
static const int NIVEL_2 = 2;
static const int NIVEL_3 = 3;
static const int NIVEL_4 = 4;

static const int ULTIMA_COLUMNA_TERRENO_1 = 14;
static const int ULTIMA_COLUMNA_TERRENO_2 = 19;

static const char ENANOS = 'G';
static const char ELFOS = 'L';
static const char ORCO = 'O';

static const int MAX_ENEMIGOS_N1 = 100;
static const int MAX_ENEMIGOS_N2 = 200;
static const int MAX_ENEMIGOS_N3 = 300; 

static const char SI = 'S';
static const char NO = 'N';
static const int AGREGAR_DEF_N1 = 25;
static const int AGREGAR_DEF_N2_N3_N4 = 50;

static const float TIEMPO_FIN_NIVEL = 2;

static const char CHAR_CAMINO = '.';

static const int MAX_TERRENO_1 = 15;
static const int MAX_TERRENO_2 = 20;
/*
	Precondiciones: -
	Postcondiciones: Inicializa los defensores, caminos y enemigos

*/
void inicializar_personajes(nivel_t* nivel){
	
	(*nivel).tope_enemigos = 0;
	(*nivel).tope_defensores = 0;
	(*nivel).tope_camino_1 = 0;
	(*nivel).tope_camino_2 = 0;
	for(int i = 0; i < MAX_ENEMIGOS; i++){
		(*nivel).enemigos[i].vida = INVALIDO;
		(*nivel).enemigos[i].pos_en_camino = INVALIDO;
	}
	for(int i = 0; i < MAX_DEFENSORES; i++){
		(*nivel).defensores[i].posicion.fil = INVALIDO;
		(*nivel).defensores[i].posicion.col = INVALIDO;
	}
}

void inicializar_camino(coordenada_t camino[MAX_LONGITUD_CAMINO], int* tope_camino, coordenada_t camino_config[MAX_LONGITUD_CAMINO], int tope_config){

	for(int i = 0; i < tope_config; i++){	
			camino[i].fil = camino_config[i].fil;
			camino[i].col = camino_config[i].col;
		}
		*tope_camino = tope_config;
}

/*
	Precondiciones: Nivel actual sea valido
	Postcondiciones: Obtiene los caminos segun el nivel

*/
void inicializar_nivel(juego_t* juego, int nivel_actual, configuracion_t config ){

	(*juego).nivel_actual = nivel_actual;
	inicializar_personajes(&((*juego).nivel));

	if(nivel_actual == NIVEL_1){
		inicializar_camino((*juego).nivel.camino_1, &((*juego).nivel.tope_camino_1), config.camino_1_N1, config.tope_camino_1_N1);
	}
	if(nivel_actual == NIVEL_2){
		inicializar_camino((*juego).nivel.camino_2, &((*juego).nivel.tope_camino_2), config.camino_2_N2, config.tope_camino_2_N2);
	} 
	if(nivel_actual == NIVEL_3){
		inicializar_camino((*juego).nivel.camino_1, &((*juego).nivel.tope_camino_1), config.camino_1_N3, config.tope_camino_1_N3);
		inicializar_camino((*juego).nivel.camino_2, &((*juego).nivel.tope_camino_2), config.camino_2_N3, config.tope_camino_2_N3);
	}
	if(nivel_actual == NIVEL_4){
		inicializar_camino((*juego).nivel.camino_1, &((*juego).nivel.tope_camino_1), config.camino_1_N4, config.tope_camino_1_N4);
		inicializar_camino((*juego).nivel.camino_2, &((*juego).nivel.tope_camino_2), config.camino_2_N4, config.tope_camino_2_N4);
	}
}
/*
	Precondiciones: Nivel actual y defensores extras sean validos
	Postcondiciones: Asignar el tipo de defensor segun el nivel o lo pedido por el usuario

*/
void preguntar_tipo(char *tipo, int nivel_actual, int enanos_extra, int elfos_extra){
	
	printf("Que tipo de defensor queres? (elfos es L y enanos es G)\n");
	scanf(" %c", tipo);
	while(*tipo != ENANOS && *tipo != ELFOS){
		printf("Ingrese G o L porfavor.\n");
		scanf(" %c", tipo);
	}
	while((*tipo == ENANOS && enanos_extra < 0) || (*tipo == ELFOS && elfos_extra < 0)){
		printf("No tenes mas defensores de ese tipo. Ingrese otro tipo\n");
		scanf(" %c", tipo);
	}
	
}
/*
	Precondiciones: Nivel actual sea valido
	Postcondiciones: Pregunta posicion al usuario y verifica que este en rango

*/
void preguntar_posicion(coordenada_t *posicion, int nivel_actual){
	
	int max_terreno;
	if(nivel_actual == NIVEL_1 || nivel_actual == NIVEL_2){
		max_terreno = ULTIMA_COLUMNA_TERRENO_1;
	}
	if(nivel_actual == NIVEL_3 || nivel_actual == NIVEL_4){
		max_terreno = ULTIMA_COLUMNA_TERRENO_2;
	}
	printf("En que fila queres agregar un defensor?\n");
	scanf("%i", &(posicion->fil));
	posicion->fil -= 1;
	while(posicion->fil < 0 || posicion->fil > max_terreno ){
		printf("Ingrese un numero entre 1 y %i.\n", max_terreno + 1);
		scanf("%i", &(posicion->fil));
		posicion->fil -= 1;
	}
	printf("En que columna queres agregar ese defensor?\n");
	scanf("%i", &(posicion->col));
	posicion->col -= 1;
	while(posicion->col < 0 || posicion->col > max_terreno){
		printf("Ingrese un numero entre 1 y %i.\n", max_terreno + 1);
		scanf("%i", &(posicion->col));
		posicion->col -= 1;
	}
}
/*
	Precondiciones: Tipo, nivel actual y nivel sean validos
	Postcondiciones: Verifica si la posicion es valida. Si lo es, agrega un defensor ahi. Si no lo es, pregunta de nuevo

*/
void validar_posicion_defensor(coordenada_t *posicion, int nivel_actual, nivel_t* nivel, char tipo){

	while(agregar_defensor(nivel, *posicion, tipo) == (INVALIDO)){
		printf("Ingrese una posicion que no este ocupada por un defensor o sobre el camino\n");
		preguntar_posicion(posicion, nivel_actual);						
	}
}
/*
	Precondiciones: tope y juego sean validos
	Postcondiciones: posiciona los primeros defensores

*/
void posicionar_defensores(int enanos_inicio, int elfos_inicio, juego_t* juego){

	coordenada_t posicion;
	char tipo;
	int tope = enanos_inicio + elfos_inicio;

	for(int i = 0; i < tope; i++){
		system("clear");
		mostrar_juego(*juego);
		if(i < enanos_inicio){
			tipo = ENANOS;
		}
		else{
			tipo = ELFOS;
		}
		printf("Los primeros %i defensores son enanos y los ultimos %i elfos\n", enanos_inicio, elfos_inicio);
		preguntar_posicion(&posicion, (*juego).nivel_actual);		
		validar_posicion_defensor(&posicion, (*juego).nivel_actual, &((*juego).nivel), tipo);
	}
}
/*
	Precondiciones: Nivel actual sea valido
	Postcondiciones: Posiciona los primeros defensores segun el nivel

*/	
void posicionar_defensores_segun_nivel(juego_t* juego, configuracion_t config){
	
	mostrar_juego(*juego);

	if((*juego).nivel_actual == NIVEL_3){
		posicionar_defensores(config.enanos_inicio_N3, config.elfos_inicio_N3, juego);
	}
	else if((*juego).nivel_actual == NIVEL_4){
		posicionar_defensores(config.enanos_inicio_N4, config.elfos_inicio_N4, juego);
	}
	else if((*juego).nivel_actual == NIVEL_1){
		posicionar_defensores(config.enanos_inicio_N1, config.elfos_inicio_N1, juego);
	}
	else if((*juego).nivel_actual == NIVEL_2){
		posicionar_defensores(config.enanos_inicio_N2, config.elfos_inicio_N2, juego);
	}
}
/*
	Precondiciones: resistencias y defensores extras esten inicializados
	Postcondiciones: actualiza los valores de la resistencia de las torres y de la cantidad de defensores extra

*/
void restar_resistencia_y_cant_defensor_extra(char tipo, torres_t* torres, configuracion_t config){
	
	if(tipo == ENANOS){
		(*torres).enanos_extra -= 1;
		(*torres).resistencia_torre_1 -= config.costo_enano_torre_1;
		(*torres).resistencia_torre_2 -= config.costo_enano_torre_2;
	}
	else if(tipo == ELFOS){
		(*torres).elfos_extra -= 1;
		(*torres).resistencia_torre_1 -= config.costo_elfo_torre_1;
		(*torres).resistencia_torre_2 -= config.costo_elfo_torre_2;
	}
}

/*
	Precondiciones: Nivel actual, los defensores extra y las resistencias sean validos
	Postcondiciones: Pregunta al usuario si quiere agregar un defensor y lo agrega si lo desea

*/
void posicionar_defensor_extra(nivel_t* nivel, int nivel_actual, torres_t *torres, configuracion_t config){
	
	char querer_defensor_extra;
	coordenada_t posicion_aux;
	char tipo_aux;

	printf("Queres agregar un defensor extra? Un enano le restará %i puntos a la torre 1 y %i a la torre 2, y un elfo %i a la torre 1 y %i a la torre 2 (S = Si, N = No)\n", config.costo_enano_torre_1, config.costo_enano_torre_2, config.costo_elfo_torre_1, config.costo_elfo_torre_2);
	scanf(" %c", &querer_defensor_extra);
	while(querer_defensor_extra != SI && querer_defensor_extra != NO){
		printf("Ingrese S o N\n");
		scanf(" %c", &querer_defensor_extra);
	}
	if(querer_defensor_extra == SI){
		preguntar_posicion(&posicion_aux, nivel_actual);
		preguntar_tipo(&tipo_aux, nivel_actual, (*torres).enanos_extra, (*torres).elfos_extra);
		validar_posicion_defensor(&posicion_aux, nivel_actual, nivel, tipo_aux);
		restar_resistencia_y_cant_defensor_extra((*nivel).defensores[(*nivel).tope_defensores - 1].tipo, torres, config);
	}	
}
/*
	Precondiciones: Nivel actual sea valido
	Postcondiciones: Inicializa el maximo de enemigos por nivel segun el nivel actual

*/
void inicializar_max_enemigos_nivel(int *max_enemigos_nivel, int nivel_actual){
	
	if(nivel_actual == NIVEL_1){
		*max_enemigos_nivel = MAX_ENEMIGOS_N1;
	}
	else if(nivel_actual == NIVEL_2){
		*max_enemigos_nivel = MAX_ENEMIGOS_N2;
	}
	else if(nivel_actual == NIVEL_3){
		*max_enemigos_nivel = MAX_ENEMIGOS_N3;
	}
	else{
		*max_enemigos_nivel = MAX_ENEMIGOS;
	}
}
/*
	Precondiciones: juego sea valido
	Postcondiciones: juega un turno y lo muestra por pantalla

*/
void avanzar_un_turno(juego_t* juego, configuracion_t config, FILE** grabacion, bool quiere_grabar){
	
	if(quiere_grabar == true){
		fwrite(juego, sizeof(juego_t), 1, *grabacion);
	}
	jugar_turno(juego);
	system("clear");
	mostrar_juego(*juego);
	detener_el_tiempo(config.velocidad);
}
/*
	Precondiciones: Nivel actual, contador, nivel y torres sean validos
	Postcondiciones: Si ya se generaron los orcos suficientes, pregunta al usuario si quiere agregar un defensor extra y lo hace si quiere

*/
void agregar_defensor_extra(int nivel_actual, int *contador, nivel_t* nivel, torres_t* torres, configuracion_t config){

	if(nivel_actual == NIVEL_1 && (*torres).enanos_extra > 0){    
		if(*contador == AGREGAR_DEF_N1){
			posicionar_defensor_extra(nivel, nivel_actual, torres, config);
			*contador = 0;
		}
	}
	else if((*torres).enanos_extra > 0 || (*torres).elfos_extra > 0){    
	    if(*contador == AGREGAR_DEF_N2_N3_N4){
			posicionar_defensor_extra(nivel, nivel_actual, torres, config);
	   		*contador = 0;
	    }
	}
}
/*
	Precondiciones: juego sea valido
	Postcondiciones: imprime un texto dependiendo de si se gano o perdio el juego y calcula la cantidad de orcos muertos

*/
void terminar_nivel(juego_t* juego, configuracion_t* config){
	
	mostrar_juego(*juego);
	if(estado_nivel((*juego).nivel) == GANADO){
		printf("GANASTE EL NIVEL!\n");
	}
	else if(estado_juego(*juego) == PERDISTE){
		printf("Perdiste el juego :(\n");
	}
	if(estado_juego(*juego) == GANADO){
		printf("GANASTE EL JUEGO!!!\n");
	}	
	detener_el_tiempo(TIEMPO_FIN_NIVEL);
	for(int i; i < (*juego).nivel.max_enemigos_nivel; i++){
		if((*juego).nivel.enemigos[i].vida == 0){
			(*config).orcos_muertos += 1;
		}
	}			
}

/*
	Precondiciones: Los defensores ya esten posicionados y los orcos inicializados
	Postcondiciones: Juega todos los turnos del nivel hasta que termine

*/
void jugar_nivel(juego_t* juego, configuracion_t* config, FILE** grabacion, bool quiere_grabar){

int contador = 0;

	mostrar_juego(*juego);
	inicializar_max_enemigos_nivel(&((*juego).nivel.max_enemigos_nivel), (*juego).nivel_actual);

	while(estado_nivel((*juego).nivel) == JUGANDO && estado_juego(*juego) == JUGANDO){
		avanzar_un_turno(juego, *config, grabacion, quiere_grabar);
		contador++;
		if((*juego).nivel.tope_enemigos <= (*juego).nivel.max_enemigos_nivel){
			agregar_defensor_extra((*juego).nivel_actual, &contador,&((*juego).nivel), &((*juego).torres), *config);		    
		}
	}
	terminar_nivel(juego, config);	
}
/*
	Precondiciones: criticos, fallos y resistencias torres sean validos
	Postcondiciones: inicializa el nivel y lo juega si el usuario no perdio

*/
void preparar_y_jugar_nivel(juego_t* juego, int nivel_actual, configuracion_t* config, FILE** grabacion, bool quiere_grabar){

	if(estado_juego((*juego)) == 0){
		inicializar_nivel((juego), nivel_actual, *config);
		posicionar_defensores_segun_nivel(juego, *config);
		jugar_nivel(juego, config, grabacion, quiere_grabar);
	}
}
/*
	Precondiciones: configuracion sea valida
	Postcondiciones: inicializa algunas caracteristicas del juego segun la configuracion

*/
void inicializar_juego_config(juego_t* juego, configuracion_t config){

	(*juego).torres.resistencia_torre_1 = config.resistencia_torre_1;
	(*juego).torres.resistencia_torre_2 = config.resistencia_torre_2;
	(*juego).torres.enanos_extra = config.enanos_extra;
	(*juego).torres.elfos_extra = config.elfos_extra;
	(*juego).fallo_gimli = config.fallo_gimli;
	(*juego).fallo_legolas = config.fallo_legolas;
	(*juego).critico_gimli = config.critico_gimli;
	(*juego).critico_legolas = config.critico_legolas;
}

void jugar(configuracion_t* config, bool con_config, char arch_grabacion[MAX_NOMBRE], bool quiere_grabar){

	juego_t juego;
	int viento;
	int humedad;
	char animo_legolas;
	char animo_gimli;

		srand (( unsigned)time(NULL));

		FILE* grabacion = fopen(arch_grabacion, "w");
		if (!grabacion){				
			printf("No se pudo abrir el archivo");
			return;
		}
		if(con_config == false){
			animos(&viento, &humedad, &animo_legolas, &animo_gimli);
			system("clear");
			inicializar_juego(&juego, viento, humedad, animo_legolas, animo_gimli);
		}
		else{
			inicializar_juego_config(&juego, *config);
		}

		preparar_y_jugar_nivel(&juego, NIVEL_1, config, &grabacion, quiere_grabar);

		preparar_y_jugar_nivel(&juego, NIVEL_2, config, &grabacion, quiere_grabar);
		
		preparar_y_jugar_nivel(&juego, NIVEL_3, config, &grabacion, quiere_grabar);

		preparar_y_jugar_nivel(&juego, NIVEL_4, config, &grabacion, quiere_grabar);	

		fclose(grabacion);
}






/*
	Precondiciones: -
	Postcondiciones: inicializa el terreno para crear caminos

*/
void inicializar_terreno_caminos(char terreno[MAX_FILAS][MAX_COLUMNAS]){

	for(int i = 0; i < MAX_TERRENO_2; i++){
		for(int j = 0; j < MAX_TERRENO_2; j++){
			terreno[i][j] = ' ';
		}
	}
}
/*
	Precondiciones: tope, terreno y camino sean validos
	Postcondiciones: inicializa cada posicion del camino creado

*/
void inicializar_posiciones_camino_creado(int tope, char terreno[MAX_FILAS][MAX_COLUMNAS], coordenada_t camino[MAX_LONGITUD_CAMINO]){
	
	for(int i = 0; i < tope; i++){		
			terreno[camino[i].fil][camino[i].col] = CHAR_CAMINO;
	}
}

/*
	Precondiciones: max terreno y terreno sean validos
	Postcondiciones: imprime por pantalla el mapa de los caminos creados

*/
void imprimir_mapa_caminos(int max_terreno, char terreno[MAX_FILAS][MAX_COLUMNAS]){
	
	for(int i = 0; i < max_terreno; i++){
		if((i + 1) < 10){
			printf("\n%i |", (i + 1));	
		}
		else{
		   	printf("\n%i|", (i + 1));
		}   
		for(int j = 0; j < max_terreno; j++){	
			if(terreno[i][j] != CHAR_CAMINO && terreno[i][j] != ORCO){
				printf(" %c ", terreno[i][j]);
			}
			else{
				printf("[%c]", terreno[i][j]);
			}
		}	
	}
}

void mostrar_mapa_crear_camino(juego_t juego){
	
	char terreno[MAX_FILAS][MAX_COLUMNAS];
	
	inicializar_terreno_caminos(terreno);
	
	inicializar_posiciones_camino_creado(juego.nivel.tope_camino_1, terreno, juego.nivel.camino_1);
	
	system ("clear");
	printf("NIVEL %i\n", juego.nivel_actual);
	printf("    1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20");
	if(juego.nivel_actual == NIVEL_1 || juego.nivel_actual == NIVEL_2){
		imprimir_mapa_caminos(MAX_TERRENO_1, terreno);
	}
	if(juego.nivel_actual == NIVEL_3 || juego.nivel_actual == NIVEL_4){
		imprimir_mapa_caminos(MAX_TERRENO_2, terreno);
	}
}

void inicializar_entradas_y_torres(coordenada_t* entrada, coordenada_t* torre, int fil_entrada, int col_entrada, int fil_torre, int col_torre){
	(*entrada).fil = fil_entrada;
	(*entrada).col = col_entrada;
	(*torre).fil = fil_torre;
	(*torre).col = col_torre;
} 