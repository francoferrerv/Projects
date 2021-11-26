#include "defendiendo_torres.h"
#include <stdbool.h>
#include "animos.h"
#include "utiles.h"
#include <time.h>

const int INVALIDO = -1;
const int JUGANDO = 0;

const int MAX_TERRENO_1 = 15;
const int MAX_TERRENO_2 = 20;

const int CRITICO_REGULAR = 10;
const int CRITICO_BUENO = 25;
const int CRITICO_MALO = 0;
const int REGULAR = 'R';
const int BUENO = 'B';
const int MALO = 'M';
const int MITAD = 2;

const int RESISTENCIA_MAX_TORRES = 600;
const int MAX_DEFENSOR_EXTRA = 10;

const int NIVEL_1 = 1;
const int NIVEL_2 = 2;
const int NIVEL_3 = 3;
const int NIVEL_4 = 4;

const char ORCO = 'O';
const char ENANOS = 'G';
const char ELFOS = 'L';

const int ATAQUE_CRITICO_GIMLI = 100;
const int ATAQUE_GIMLI = 60;
const int ATAQUE_LEGOLAS = 30;
const int DISTANCIA_MAX_ELFO = 3;
const int ATAQUE_CRITICO_LEGOLAS = 70;
const int AMPLITUD_FALLO = 100;
const int AMPLITUD_CRITICO = 100;
const int AMPLITUD_VIDA_ORCOS = 101;
const int VIDA_BASE_ORCOS = 200;

const int CAMINO_1 = 1;
const int CAMINO_2 = 2;
const char CHAR_CAMINO = '.';
const char CHAR_ENTRADA = 'E';
const char CHAR_TORRE = 'T';

const int PRIMERA_POSICION = 0;
const int SOLO_UN_CAMINO = 0;

const int GANADO = 1;
const int PERDISTE = -1;

const int FIL_ENTRADA_1 = 7;
const int ULTIMA_COLUMNA_TERRENO_1 = 14;
const int ULTIMA_COLUMNA_TERRENO_2 = 19;
const int FIL_TORRE_1 = 8;
const int PRIMERA_COLUMNA = 0;
const int FIL_ENTRADA_2 = 5;
const int FIL_TORRE_2 = 10;
const int PRIMERA_FILA = 0;
const int ULTIMA_FILA_TERRENO_2 = 19;
const int COL_TORRE_1 = 5;
const int COL_TORRE_2 = 15;
const int COL_ENTRADA_1 = 4;
const int COL_ENTRADA_2 = 16;

const int MAX_DEFENSORES_N1_Y_N2 = 5;
const int MAX_DEFENSORES_N3 = 6;
const int MAX_DEFENSORES_N4 = 8;
const int MAX_ENEMIGOS_N1 = 100;
const int MAX_ENEMIGOS_N2 = 200;
const int MAX_ENEMIGOS_N3 = 300; 

const char SI = 'S';
const char NO = 'N';
const int COSTO_VIDA_DEF_EXTRA = 50;
const int AGREGAR_DEF_N1 = 25;
const int AGREGAR_DEF_N2_N3_N4 = 50;

const float TIEMPO_FIN_NIVEL = 2;
const float TIEMPO_ENTRE_TURNO = 0.5;


/*
	Precondiciones:Struct torres contenga la resistencia de las torres y la cantidad de defensores extra
	Postcondiciones: Inicializa las resistencias y la cantidad de defensores extras

*/
void cargar_info_torres(torres_t *torres){
	
	(*torres).resistencia_torre_1 = RESISTENCIA_MAX_TORRES;
	(*torres).resistencia_torre_2 = RESISTENCIA_MAX_TORRES;
	(*torres).enanos_extra = MAX_DEFENSOR_EXTRA;
	(*torres).elfos_extra = MAX_DEFENSOR_EXTRA;
}
/*
	Precondiciones: Valor animo sea valido
	Postcondiciones: Asigna el porcentaje critico dependiendo del animo

*/
void calcular_critico(int *critico, char animo){
	
	if(animo == REGULAR){
		*critico = CRITICO_REGULAR;
	}
	if(animo == BUENO){
		*critico = CRITICO_BUENO;
	}
	if(animo == MALO){
		*critico = CRITICO_MALO;
	}
}
/*
	Precondiciones: Viento o humedad sean validos
	Postcondiciones: Asigna el porcentaje de fallo dependiendo del viento o la humedad

*/
void calcular_fallo(int* fallo, int viento_o_humedad){
	
	*fallo = (viento_o_humedad / MITAD);
}

void inicializar_juego(juego_t* juego, int viento, int humedad, char animo_legolas, char animo_gimli){
	
	cargar_info_torres(&((*juego).torres));
	calcular_critico(&((*juego).critico_gimli), animo_gimli);
	calcular_critico(&((*juego).critico_legolas), animo_legolas);
	calcular_fallo(&((*juego).fallo_gimli), humedad);
	calcular_fallo(&((*juego).fallo_legolas), viento);
}
/*
	Precondiciones: -
	Postcondiciones: inicializa la matriz del terreno

*/
void inicializar_terreno(char terreno[MAX_FILAS][MAX_COLUMNAS]){

	for(int i = 0; i < MAX_TERRENO_2; i++){
		for(int j = 0; j < MAX_TERRENO_2; j++){
			terreno[i][j] = ' ';
		}
	}
}
/*
	Precondiciones: tope, terreno y camino sean validos
	Postcondiciones: inicializa cada posicion del camino

*/
void inicializar_posiciones_camino(int tope, char terreno[MAX_FILAS][MAX_COLUMNAS], coordenada_t camino[MAX_LONGITUD_CAMINO]){
	
	for(int i = 0; i < tope; i++){		
			terreno[camino[i].fil][camino[i].col] = CHAR_CAMINO;
	}
	terreno[camino[PRIMERA_POSICION].fil][camino[PRIMERA_POSICION].col] = CHAR_ENTRADA;
	terreno[camino[tope - 1].fil][camino[tope - 1].col] = CHAR_TORRE;
}
/*
	Precondiciones: Vector enemigos, terreno , camino y el numero de camino sean validos
	Postcondiciones: inicializa cada posicion del camino donde haya un orco

*/			
void inicializar_posiciones_orcos(int tope_enemigos, enemigo_t enemigos[MAX_ENEMIGOS], char terreno[MAX_FILAS][MAX_COLUMNAS], coordenada_t camino[MAX_LONGITUD_CAMINO], int numero_camino){
	
	for(int i = 0; i < tope_enemigos; i++){
		if(enemigos[i].vida > 0){	
			if(enemigos[i].camino == numero_camino){
				terreno[camino[enemigos[i].pos_en_camino].fil][camino[enemigos[i].pos_en_camino].col] = ORCO;	
			}
		}		
	}	
}
/*
	Precondiciones: vector defensores y terreno sean validos
	Postcondiciones: inicializa cada posicion del terreno donde haya un defensor

*/
void inicializar_posiciones_defensores(int tope, defensor_t defensores[MAX_DEFENSORES], char terreno[MAX_FILAS][MAX_COLUMNAS]){
	
	for(int i = 0; i < tope; i++){
		terreno[defensores[i].posicion.fil][defensores[i].posicion.col] = defensores[i].tipo;
	}
}
/*
	Precondiciones: max terreno y terreno sean validos
	Postcondiciones: imprime por pantalla el mapa del juego

*/
void imprimir_mapa(int max_terreno, char terreno[MAX_FILAS][MAX_COLUMNAS]){
	
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
/*
	Precondiciones: nivel actual, terreno, tope_defensores y torres sean validos
	Postcondiciones: imprime por pantalla el mapa del juego

*/
void imprimir_juego(int nivel_actual, char terreno[MAX_FILAS][MAX_COLUMNAS], int tope_defensores, torres_t torres){

system ("clear");
printf("NIVEL %i\n", nivel_actual);
	printf("    1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20");
	if(nivel_actual == NIVEL_1 || nivel_actual == NIVEL_2){
		imprimir_mapa(MAX_TERRENO_1, terreno);
	}
	if(nivel_actual == NIVEL_3 || nivel_actual == NIVEL_4){
		imprimir_mapa(MAX_TERRENO_2, terreno);
	}

	printf("\n");
	printf("                                                     |%i defensores|\n", tope_defensores);
	printf("                                                     |Resistencia Torre 1 = %i|\n", torres.resistencia_torre_1);
	printf("                                                     |Resistencia Torre 2 = %i|\n", torres.resistencia_torre_2);
	printf("                                                     |Enanos Extra = %i|\n", torres.enanos_extra);
	printf("                                                     |Elfos Extra = %i|\n", torres.elfos_extra);
	printf("\n");
}

void mostrar_juego(juego_t juego){		

	char terreno[MAX_FILAS][MAX_COLUMNAS];
	
	inicializar_terreno(terreno);
	if(juego.nivel_actual == NIVEL_1){	
		inicializar_posiciones_camino(juego.nivel.tope_camino_1, terreno, juego.nivel.camino_1);
		inicializar_posiciones_orcos(juego.nivel.tope_enemigos, juego.nivel.enemigos, terreno, juego.nivel.camino_1, CAMINO_1);
		inicializar_posiciones_defensores(juego.nivel.tope_defensores, juego.nivel.defensores, terreno);
	}
	if(juego.nivel_actual == NIVEL_2){	
		inicializar_posiciones_camino(juego.nivel.tope_camino_2, terreno, juego.nivel.camino_2);
		inicializar_posiciones_orcos(juego.nivel.tope_enemigos, juego.nivel.enemigos, terreno, juego.nivel.camino_2, CAMINO_2);
		inicializar_posiciones_defensores(juego.nivel.tope_defensores, juego.nivel.defensores, terreno);
	}
	if(juego.nivel_actual == NIVEL_3 || juego.nivel_actual == NIVEL_4){	
		inicializar_posiciones_camino(juego.nivel.tope_camino_1, terreno, juego.nivel.camino_1);	
		inicializar_posiciones_camino(juego.nivel.tope_camino_2, terreno, juego.nivel.camino_2);
		inicializar_posiciones_orcos(juego.nivel.tope_enemigos, juego.nivel.enemigos, terreno, juego.nivel.camino_1, CAMINO_1);
		inicializar_posiciones_orcos(juego.nivel.tope_enemigos, juego.nivel.enemigos, terreno, juego.nivel.camino_2, CAMINO_2);
		inicializar_posiciones_defensores(juego.nivel.tope_defensores, juego.nivel.defensores, terreno);
	}
	imprimir_juego(juego.nivel_actual, terreno, juego.nivel.tope_defensores, juego.torres);
}	

int agregar_defensor(nivel_t* nivel, coordenada_t posicion, char tipo){
	
bool se_puede_agregar = true;
int i;

	if((*nivel).tope_camino_1 > 0){
		i = 0;
		while(i < (*nivel).tope_camino_1 && se_puede_agregar == true){
			if((*nivel).camino_1[i].fil == posicion.fil && (*nivel).camino_1[i].col == posicion.col){	
				se_puede_agregar = false;
			}
			i++;
		}
	}
	if((*nivel).tope_camino_2 > 0){
		i = 0;
		while(i < (*nivel).tope_camino_2 && se_puede_agregar == true){
			if((*nivel).camino_2[i].fil == posicion.fil && (*nivel).camino_2[i].col == posicion.col){
				se_puede_agregar = false;
			}
			i++;
		}
	}
	i = 0;
	if((*nivel).tope_defensores > 0){
		while(i < (*nivel).tope_defensores && se_puede_agregar == true){
			if((*nivel).defensores[i].posicion.fil == posicion.fil && (*nivel).defensores[i].posicion.col == posicion.col){
				se_puede_agregar = false;		
			}
			i++;
		}
	}
	if(se_puede_agregar == true){

		(*nivel).tope_defensores += 1;
		(*nivel).defensores[(*nivel).tope_defensores - 1].posicion.fil = posicion.fil;
		(*nivel).defensores[(*nivel).tope_defensores - 1].posicion.col = posicion.col;
		(*nivel).defensores[(*nivel).tope_defensores - 1].tipo = tipo;
		if(tipo == ENANOS){
			(*nivel).defensores[(*nivel).tope_defensores - 1].fuerza_ataque = ATAQUE_GIMLI;
		}
		else{
			(*nivel).defensores[(*nivel).tope_defensores - 1].fuerza_ataque = ATAQUE_CRITICO_LEGOLAS;
		}

		return (0);
	}
	
	return(-1);	
}

int estado_nivel(nivel_t nivel){
	
	bool nivel_ganado = true;
	
	for(int i = 0; i < nivel.max_enemigos_nivel; i++){
		if(nivel.enemigos[i].vida > 0 || nivel.enemigos[i].vida == -1){
			nivel_ganado = false;
		}
	}
	if(nivel_ganado == true){
		return(1);
	}
	else{
		return(0);
	}
}

int estado_juego(juego_t juego){
	
	if(juego.torres.resistencia_torre_1 <= 0 || juego.torres.resistencia_torre_2 <= 0){
		return(-1);
	}
	else if(juego.nivel_actual == NIVEL_4 && estado_nivel(juego.nivel) == 1){
		return(1);
	}
	else{
		return (0);
	}
}
/*
	Precondiciones: Fallo, critico, tipo de defensor y la vida del orco sean validos
	Postcondiciones: Resta vida al orco segun los porcentajes de critico y de fallo

*/
void sacar_vida_orcos(int fallo, int critico, defensor_t defensor, enemigo_t* enemigo){
	
	if((rand() % AMPLITUD_FALLO + 1) > fallo){
		if((rand() % AMPLITUD_CRITICO + 1) <= critico){
			(*enemigo).vida -= (defensor.fuerza_ataque + 40);
		}
		else{
			(*enemigo).vida -= defensor.fuerza_ataque;
		}
	}
	if((*enemigo).vida < 0){
		(*enemigo).vida = 0;
	} 
}
/*
	Precondiciones: La posicion del enano y del orco sean validas
	Postcondiciones: Devuelve true si el orco esta en el rango del enano

*/
bool esta_en_rango_enano(coordenada_t posicion_defensor, coordenada_t posicion_orco){
	
	bool en_rango = false;
	int i = posicion_defensor.fil - 1;
	int j;

	if(posicion_orco.fil == -1 || posicion_orco.col == -1){
		return(false);
	}
	while(en_rango == false && i <= (posicion_defensor.fil + 1)){
		j = posicion_defensor.col -1;
		while(en_rango == false && j <= (posicion_defensor.col + 1)){
			if(posicion_orco.fil == i && posicion_orco.col == j){
				en_rango = true;
			}
			j++;
		}
		i++;
	}
	return(en_rango);		
}
/*
	Precondiciones: La posicion del elfo y del orco sean validas
	Postcondiciones: Devuelve true si el orco esta en el rango del elfo

*/
bool esta_en_rango_elfo(coordenada_t posicion_defensor, coordenada_t posicion_orco){
	
	int valor_abs_fil;
	int valor_abs_col;

	valor_abs_fil = posicion_defensor.fil - posicion_orco.fil;
	valor_abs_col = posicion_defensor.col - posicion_orco.col;
			
	if(posicion_orco.fil == -1 || posicion_orco.col == -1){
		return(false);
	}				
	else{
		if(valor_abs_fil < 0){
			valor_abs_fil = (valor_abs_fil * -1);
		}
		if(valor_abs_col < 0){
			valor_abs_col = (valor_abs_col * -1);
		}	
		return((valor_abs_fil + valor_abs_col <= DISTANCIA_MAX_ELFO));
	}
}
/*
	Precondiciones: Fallo, critico, defensor, enemigo y el camino sean validos
	Postcondiciones: Se fija si el enano puede atacar al orco y si puede, lo hace
*/
int enano_llega_a_atacar(int fallo, int critico, defensor_t defensor, enemigo_t* enemigo, coordenada_t camino[MAX_LONGITUD_CAMINO]){
	
	if((*enemigo).vida > 0){
		if(esta_en_rango_enano(defensor.posicion, camino[(*enemigo).pos_en_camino]) == true){								
			sacar_vida_orcos(fallo, critico, defensor, enemigo);
			return (0);		
		}
	}
	return (-1);
}
/*
	Precondiciones: Fallo, critico, defensor, enemigo y el camino sean validos
	Postcondiciones: Si el orco esta en rango, el elfo lo ataca
*/
void elfo_llega_a_atacar(int fallo, int critico, defensor_t defensor, enemigo_t* enemigo, coordenada_t camino[MAX_LONGITUD_CAMINO]){
	
	if((*enemigo).vida > 0){				
		if(esta_en_rango_elfo(defensor.posicion, camino[(*enemigo).pos_en_camino]) == true){	
				sacar_vida_orcos(fallo, critico, defensor, enemigo);
		}
	}
}
/*
	Precondiciones: Fallo, critico, defensor, enemigo y caminos sean validos
	Postcondiciones: Busca orco que pueda atacar hasta que haya pegado el enano
*/
void ataca_enano(int tope_enemigos, int fallo_gimli, int critico_gimli, defensor_t enano, enemigo_t enemigos[MAX_ENEMIGOS], coordenada_t camino_1[MAX_LONGITUD_CAMINO], coordenada_t camino_2[MAX_LONGITUD_CAMINO]){

	bool ya_pego_enano = false;
	int j = 0;

	while(j < tope_enemigos && ya_pego_enano == false){
		if(enemigos[j].camino == CAMINO_1){	
			if(enano_llega_a_atacar(fallo_gimli, critico_gimli, enano, &(enemigos[j]), camino_1) == 0){
				ya_pego_enano = true;
			}
		}
		else{
			if(enano_llega_a_atacar(fallo_gimli, critico_gimli, enano, &(enemigos[j]), camino_2) == 0){
				ya_pego_enano = true;
			}
		}
		j++;
	}
}
/*
	Precondiciones: Fallo, critico, defensor, enemigo y caminos sean validos
	Postcondiciones: Busca orco que pueda atacar el elfo

*/
void ataca_elfo(int tope_enemigos, int fallo_legolas, int critico_legolas, defensor_t elfo, enemigo_t enemigos[MAX_ENEMIGOS], coordenada_t camino_1[MAX_LONGITUD_CAMINO], coordenada_t camino_2[MAX_LONGITUD_CAMINO]){

	int j = 0;

	while(j < tope_enemigos){
		if(enemigos[j].camino == CAMINO_1){
			elfo_llega_a_atacar(fallo_legolas, critico_legolas, elfo, &(enemigos[j]), camino_1);
		}
		if(enemigos[j].camino == CAMINO_2){
			elfo_llega_a_atacar(fallo_legolas, critico_legolas, elfo, &(enemigos[j]), camino_2);
		}
		j++;
	}
}
/*
	Precondiciones: Los vectores de defensores, enemigos, caminos y el tope defensores esten inicializados y sean validos
	Postcondiciones: Ataca a todos los orcos que esten en el rango de algun defensor

*/
void atacar_orcos(juego_t *juego){
	
	for(int i = 0; i < (*juego).nivel.tope_defensores; i++){
		if((*juego).nivel.defensores[i].tipo == ENANOS){
			ataca_enano((*juego).nivel.tope_enemigos, (*juego).fallo_gimli, (*juego).critico_gimli, (*juego).nivel.defensores[i], (*juego).nivel.enemigos, (*juego).nivel.camino_1, (*juego).nivel.camino_2);
		}
		else if((*juego).nivel.defensores[i].tipo == ELFOS){
			ataca_elfo( (*juego).nivel.tope_enemigos, (*juego).fallo_legolas, (*juego).critico_legolas, (*juego).nivel.defensores[i], (*juego).nivel.enemigos, (*juego).nivel.camino_1, (*juego).nivel.camino_2);
		}
	}
}
/*
	Precondiciones: Las resistencias de la torre y la vida el orco sean validos
	Postcondiciones: Resta resistencia y elimina al orco

*/
void sacar_vida_torre(int* resistencia_torre, int *vida_enemigo){
	
	*resistencia_torre -= *vida_enemigo;
	if(*resistencia_torre < 0){
		*resistencia_torre = 0;
	}
	*vida_enemigo = 0;
}

/*
	Precondiciones: Las resistencias de las torres, el vector enemigos y los topes de los caminos sean, validos
	Postcondiciones: Resta resistencia si hay un enemigo en la posicion de alguna de las dos torres

*/
void calcular_vida_torre(int tope_enemigos, torres_t* torres, enemigo_t enemigos[MAX_ENEMIGOS], int tope_camino_1, int tope_camino_2){
	
	for(int i = 0; i < tope_enemigos; i++){
		if(enemigos[i].camino == CAMINO_1 && enemigos[i].pos_en_camino == (tope_camino_1 - 1) && enemigos[i].vida > 0){
			sacar_vida_torre(&((*torres).resistencia_torre_1), &(enemigos[i].vida));
		}
		if(enemigos[i].camino == CAMINO_2 && enemigos[i].pos_en_camino == (tope_camino_2 - 1) && enemigos[i].vida > 0){
			sacar_vida_torre(&((*torres).resistencia_torre_2), &(enemigos[i].vida));
		}
	}
}
/*
	Precondiciones: Tope enemigos, max_enemigos_nivel, el camino y la cantidad de enmigos por camino sea valido.
	Postcondiciones: Inicializa a los orcos 

*/
void inicializar_orcos_camino(int *tope_enemigos, int max_enemigos_nivel, enemigo_t enemigos[MAX_ENEMIGOS], int camino){
	
	if(*tope_enemigos < max_enemigos_nivel && tope_enemigos >= 0){
		enemigos[(*tope_enemigos)].camino = camino;
		enemigos[(*tope_enemigos)].vida = rand() % AMPLITUD_VIDA_ORCOS + VIDA_BASE_ORCOS;
		enemigos[(*tope_enemigos)].pos_en_camino = PRIMERA_POSICION;
		*tope_enemigos += 1;
	}
}
/*
	Precondiciones: Tope enemigos y vector enemigos sean validos
	Postcondiciones: avanza una posicion a los orcos

*/
void avanzar_orcos(int nivel_actual, int tope_enemigos, enemigo_t enemigos[MAX_ENEMIGOS]){
	
	for(int j = 0; j < tope_enemigos; j++){
		if(enemigos[j].vida > 0){
			enemigos[j].pos_en_camino += 1;
		}
	}
}

void jugar_turno(juego_t* juego){
	
	atacar_orcos(juego);
	avanzar_orcos((*juego).nivel_actual, (*juego).nivel.tope_enemigos, (*juego).nivel.enemigos);
	if((*juego).nivel_actual == NIVEL_1){
		inicializar_orcos_camino(&((*juego).nivel.tope_enemigos), (*juego).nivel.max_enemigos_nivel, (*juego).nivel.enemigos, CAMINO_1);
	}
	if((*juego).nivel_actual == NIVEL_2){
		inicializar_orcos_camino(&((*juego).nivel.tope_enemigos), (*juego).nivel.max_enemigos_nivel, (*juego).nivel.enemigos, CAMINO_2);
	}
	if((*juego).nivel_actual == NIVEL_3 || (*juego).nivel_actual == NIVEL_4){
		inicializar_orcos_camino(&((*juego).nivel.tope_enemigos), (*juego).nivel.max_enemigos_nivel, (*juego).nivel.enemigos, CAMINO_1);
		inicializar_orcos_camino(&((*juego).nivel.tope_enemigos), (*juego).nivel.max_enemigos_nivel, (*juego).nivel.enemigos, CAMINO_2);
	}
	calcular_vida_torre((*juego).nivel.tope_enemigos, &((*juego).torres), (*juego).nivel.enemigos, (*juego).nivel.tope_camino_1, (*juego).nivel.tope_camino_2);
}



		



