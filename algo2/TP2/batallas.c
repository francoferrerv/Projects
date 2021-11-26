#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "abb.h"
#include "heap.h"
#include "batallas.h"
#include "pokedex_ascii_2.h"

#define FORMATO_CHAR " %c;"
#define FORMATO_GYM "%100[^;];%i;%i\n"
#define FORMATO_NOMBRE "%100[^\n]\n"
#define FORMATO_POKEMON "%100[^;];%i;%i;%i\n"

#define ROJO "\033[31;1m"
#define VERDE "\033[32m"
#define AMARILLO "\033[33;1m"
#define AZUL "\033[34;1m"
#define VIOLETA "\033[35;1m"
#define BLANCO "\033[97m"
#define NEGRO "\033[30m"
#define FROJO "\033[41m"
#define FVERDE "\033[42;1m"
#define FAMARILLO "\033[43;1m"
#define FAZUL "\033[44m"
#define FBLANCO "\033[47m"
#define FVIOLETA "\033[45m"
#define NORMAL "\033[0m"
#define MAX_NOMBRE 100
#define INGRESAR_PERSONAJE 'E'
#define AGREGAR_GIMNASIO 'A'
#define COMENZAR 'I'
#define SIMULAR 'S'
#define GIMNASIO 'G'
#define ENTRENADOR 'E'
#define LIDER 'L'
#define POKEMON 'P'
#define VER_PERSONAJE 'E'
#define INFO_GIMNASIO 'G'
#define CAMBIAR_POKEMON 'C'
#define REALIZAR_BATALLA 'B'
#define REINTENTAR 'R'
#define FINALIZAR 'F'
#define TOMAR_POKEMON 'T'
#define AVANZAR 'N'


const int MAX_ARCHIVO = 100;
const int BARRA_DE_VIDA = 20;
const int MAX_POKEMON = 6;
const int MIN_POKEMON = 1;
const int BATALLA_1 = 1;
const int BATALLA_2 = 2;
const int BATALLA_3 = 3;
const int BATALLA_4 = 4;
const int MAX_STATS = 63;
const int CHARIZARD = 6;
const int DRAGONITE = 149;
const int GENGAR = 94;
const int PIKACHU = 25;
const int GANO = 1;
const int PERDIO = -1;


typedef struct pokemon{
	char nombre[MAX_NOMBRE];
	int velocidad;
	int defensa;
	int ataque;
	bool en_equipo;
	int puntos_stats;
}pokemon_t;

typedef struct entrenador{
	char nombre[MAX_NOMBRE];
    lista_t* pokemon;
    int cant_pokemon;
}entrenador_t;

typedef struct gimnasio{
	char nombre[MAX_NOMBRE];
    lista_t* entrenadores;
    int dificultad;
    int id_batalla;
    int cant_entrenadores;
}gimnasio_t;

typedef struct personaje{
	char nombre[MAX_NOMBRE];
	lista_t* pokemon_para_combatir;
	abb_t* pokemon_obtenidos;
	bool termino;
	bool simular;
	int cant_pokemon;
}personaje_t;

typedef int (*funcion)(void*, void*);
/*
	Precondiciones:-
	Postcondiciones: Hace que el usuario ingrese N si quiere seguir
*/
void next(){

	char next;
	printf(NORMAL " _____________________\n");
	printf("|Ingrese N para seguir|\n");
	printf("|_____________________|\n");
	scanf(" %c", &next);
	while(next != AVANZAR){
		printf("\tIngrese N si quiere seguir porfavor\n");
		scanf(" %c", &next);
	}
	return;
}

int funcion_batalla_1(void* pkm_1, void* pkm_2){
	
	printf(NORMAL "%s vs %s\n", ((pokemon_t*)pkm_1)->nombre, ((pokemon_t*)pkm_2)->nombre);
	printf("%i %i %i   ",((pokemon_t*)pkm_1)->ataque, ((pokemon_t*)pkm_1)->defensa, ((pokemon_t*)pkm_1)->velocidad);
	printf("%i %i %i\n",((pokemon_t*)pkm_2)->ataque, ((pokemon_t*)pkm_2)->defensa, ((pokemon_t*)pkm_2)->velocidad);
	next();
	if(((pokemon_t*)pkm_1)->ataque < ((pokemon_t*)pkm_2)->ataque){
		printf("PERDISTE\n");
		next();
		return PERDIO;
	}
	else{
		printf("GANASTE\n");
		next();
		return 1;
	}
}

int funcion_batalla_2(void* pkm_1, void* pkm_2){
	
	int promedio = (((pokemon_t*)pkm_2)->ataque + ((pokemon_t*)pkm_2)->defensa + ((pokemon_t*)pkm_2)->velocidad) / 3;
	int promedio_2 = (((pokemon_t*)pkm_1)->ataque + ((pokemon_t*)pkm_1)->defensa + ((pokemon_t*)pkm_1)->velocidad) / 3;
	printf(NORMAL ROJO"												|%s| nivel:%i\n\n\n", ((pokemon_t*)pkm_2)->nombre, promedio);
	printf(VERDE "|%s| nivel:%i\n", ((pokemon_t*)pkm_1)->nombre, promedio_2);
	next();
	if(promedio_2 < promedio){
		printf(VIOLETA "PERDISTE\n\n");
		next();
		return PERDIO;
	}
	else{
		printf(AMARILLO "GANASTE\n\n");
		next();
		return GANO;
	}
}

int funcion_batalla_3(void* pkm_1, void* pkm_2){
	
	printf(NORMAL FROJO NEGRO "												|%s|\n", ((pokemon_t*)pkm_2)->nombre);
	printf("												ATAQUE:%i DEFENSA:%i VELOCIDAD:%i\n\n",((pokemon_t*)pkm_2)->ataque, ((pokemon_t*)pkm_2)->defensa, ((pokemon_t*)pkm_2)->velocidad);
	printf(NORMAL "						vs\n\n\n");
	printf(FVERDE NEGRO "|%s|\n", ((pokemon_t*)pkm_1)->nombre);
	printf("ATAQUE:%i DEFENSA:%i VELOCIDAD:%i\n",((pokemon_t*)pkm_1)->ataque, ((pokemon_t*)pkm_1)->defensa, ((pokemon_t*)pkm_1)->velocidad);
	next();
	if((((pokemon_t*)pkm_1)->ataque - ((pokemon_t*)pkm_2)->defensa < 0 && ((pokemon_t*)pkm_1)->defensa - ((pokemon_t*)pkm_2)->ataque < 0) || ((pokemon_t*)pkm_1)->velocidad - ((pokemon_t*)pkm_2)->velocidad < 0){
		printf(FVIOLETA NEGRO "PERDISTE\n\n");
		next();
		return PERDIO;
	}
	else{
		printf(FAMARILLO NEGRO"GANASTE\n\n");
		next();
		return GANO;
	}
}
/*
	Precondiciones: vida sea valido
	Postcondiciones: imprime la vida del pokemon de la funcion 4
*/
void print_vida(int vida){

	for(int i = 0; i < vida; i++){
		if(i == 0){
			printf(NORMAL "|");
		}
		if(i % BARRA_DE_VIDA == 0){
			printf(FVERDE" ");
		}
		if( i == vida - 1){
			printf(NORMAL "|");
		}
	}
}
/*
	Precondiciones: parametros sean validos
	Postcondiciones: hace que ataque unode los pokemon
*/
void pelear_vida(void* pkm_1, void* pkm_2, int* vida, int* vida_2, int* turno){
	int ataque_1 = (int)(((float)((pokemon_t*)pkm_1)->ataque / (float)((pokemon_t*)pkm_2)->defensa) * 50);
	int ataque_2 = (int)(((float)((pokemon_t*)pkm_2)->ataque / (float)((pokemon_t*)pkm_1)->defensa) * 50);

	if(((pokemon_t*)pkm_1)->velocidad >= ((pokemon_t*)pkm_2)->velocidad){
		if(*turno == 1){
			*vida_2 -= ataque_1; 
			*turno += 1;
		}
		else{
			*vida -= ataque_2; 
			*turno -= 1;
		}
	}
	else{
		if(*turno == 2){
			*vida_2 -= ataque_1; 
			*turno -= 1;
		}
		else{
			*vida -= ataque_2; 
			*turno += 1;
		}
	}
}
/*
	Precondiciones: parametros sean validos
	Postcondiciones: imprimer la batalla de la funcion 4
*/
void imprimir_batalla_1(void* pkm_1, void* pkm_2, int vida, int vida_2){

	system("clear");
	printf(NORMAL FBLANCO NEGRO"								|%s|"NORMAL "   HP:", ((pokemon_t*)pkm_2)->nombre);
	print_vida(vida_2);
	printf(NORMAL "\n\n\n                       		vs\n\n");
	printf(FBLANCO NEGRO"|%s|" NORMAL "    HP:", ((pokemon_t*)pkm_1)->nombre);
	print_vida(vida);
	printf("\n");
	next();
}

int funcion_batalla_4(void* pkm_1, void* pkm_2){
	
	int vida_2 = (((pokemon_t*)pkm_2)->ataque + ((pokemon_t*)pkm_2)->defensa + ((pokemon_t*)pkm_2)->velocidad);
	int vida = (((pokemon_t*)pkm_1)->ataque + ((pokemon_t*)pkm_1)->defensa + ((pokemon_t*)pkm_1)->velocidad);
	int turno = 1;
	while(vida > 0 && vida_2 > 0){
		imprimir_batalla_1(pkm_1, pkm_2, vida, vida_2);
		pelear_vida(pkm_1, pkm_2, &vida, &vida_2, &turno);
	}
	if(vida < vida_2){
		printf(VIOLETA "PERDISTE\n\n");
		next();
		return PERDIO;
	}
	else{
		printf(AMARILLO "GANASTE\n\n");
		next();
		return GANO;
	}
}
/*
	Precondiciones: parametros sean validos
	Postcondiciones: hace que ataque uno de los pokemon
*/
void pelear_vida_2(void* pkm_1, void* pkm_2, int* vida, int* vida_2, int* turno, int nivel, int nivel_2){
	int ataque_1 = (int)(((float)(((pokemon_t*)pkm_1)->ataque * nivel) / (float)(((pokemon_t*)pkm_2)->defensa * nivel_2)) * 50);
	int ataque_2 = (int)(((float)(((pokemon_t*)pkm_2)->ataque * nivel_2) / (float)(((pokemon_t*)pkm_1)->defensa * nivel)) * 50);

	if(((pokemon_t*)pkm_1)->velocidad >= ((pokemon_t*)pkm_2)->velocidad){
		if(*turno == 1){
			*vida_2 -= ataque_1; 
			*turno += 1;
		}
		else{
			*vida -= ataque_2; 
			*turno -= 1;
		}
	}
	else{
		if(*turno == 2){
			*vida_2 -= ataque_1; 
			*turno -= 1;
		}
		else{
			*vida -= ataque_2; 
			*turno += 1;
		}
	}
}
/*
	Precondiciones: vida_total y vida sean validos
	Postcondiciones: imprime la vida del pokemon de la funcion 5
*/
void print_vida_2(int vida_total, int vida){

	for(int i = 0; i < vida_total; i++){
		if(i == 0){
			printf(NORMAL "|");
		}
		if(i % BARRA_DE_VIDA == 0){
			if(i > vida){
				printf(NORMAL " ");
			}
			else if(vida <= vida_total/2 && vida > vida_total/4){
				printf(FAMARILLO " ");
			}
			else if(vida <= vida_total/4){
				printf(FROJO " ");
			}
			else{
				printf(FVERDE" ");
			}
		}
		if(i == vida_total - 1){
			printf(NORMAL "|");
		}
	}
}
/*
	Precondiciones: todos los parametros sean validos
	Postcondiciones: imprime la batalla de la funcion 5
*/
void imprimir_batalla_2(void* pkm_1, void* pkm_2, int vida_total, int vida_total_2, int vida, int vida_2, int nivel, int nivel_2){

	system("clear");
	printf(NORMAL "");
	print_pokemon_2(encontrar_n_pokedex(((pokemon_t*)pkm_2)->nombre));
	printf(NORMAL FBLANCO NEGRO"																	|%s|"NORMAL " Nivel: %i|\n																	|HP:", ((pokemon_t*)pkm_2)->nombre, nivel_2);
	print_vida_2(vida_total_2, vida_2);
	printf("\n");
	print_pokemon(encontrar_n_pokedex(((pokemon_t*)pkm_1)->nombre));
	printf(FBLANCO NEGRO"							|%s|" NORMAL " Nivel: %i\n							HP:", ((pokemon_t*)pkm_1)->nombre, nivel);
	print_vida_2(vida_total, vida);
	printf("\n");
	next();
}

int funcion_batalla_5(void* pkm_1, void* pkm_2){
	
	int vida_total_2 = (((pokemon_t*)pkm_2)->ataque + ((pokemon_t*)pkm_2)->defensa + ((pokemon_t*)pkm_2)->velocidad);
	int vida_total = (((pokemon_t*)pkm_1)->ataque + ((pokemon_t*)pkm_1)->defensa + ((pokemon_t*)pkm_1)->velocidad);
	int vida_2 = vida_total_2;
	int vida = vida_total;
	int nivel_2 = (((pokemon_t*)pkm_2)->ataque + ((pokemon_t*)pkm_2)->defensa + ((pokemon_t*)pkm_2)->velocidad) / 6;
	int nivel = (((pokemon_t*)pkm_1)->ataque + ((pokemon_t*)pkm_1)->defensa + ((pokemon_t*)pkm_1)->velocidad) / 6;
	int turno = 1;
	while(vida > 0 && vida_2 > 0){
		imprimir_batalla_2(pkm_1, pkm_2, vida_total, vida_total_2, vida, vida_2, nivel, nivel_2);
		pelear_vida_2(pkm_1, pkm_2, &vida, &vida_2, &turno, nivel, nivel_2);
	}
	if(vida < vida_2){
		imprimir_batalla_2(pkm_1, pkm_2, vida_total, vida_total_2, vida, vida_2, nivel, nivel_2);
		printf(VIOLETA "PERDISTE\n\n");
		next();
		return PERDIO;
	}
	else{
		imprimir_batalla_2(pkm_1, pkm_2, vida_total, vida_total_2, vida, vida_2, nivel, nivel_2);
		printf(AMARILLO "GANASTE\n\n");
		next();
		return GANO;
	}
}
// funcion_batalla_5 pero para simulacion//
/*
	Precondiciones: pkm_1 y 2 sean validos
	Postcondiciones: devuelve 1 si gano el pkm_1 o -1 si perdio
*/
int funcion_batalla_0(void* pkm_1, void* pkm_2){

	int vida_total_2 = (((pokemon_t*)pkm_2)->ataque + ((pokemon_t*)pkm_2)->defensa + ((pokemon_t*)pkm_2)->velocidad);
	int vida_total = (((pokemon_t*)pkm_1)->ataque + ((pokemon_t*)pkm_1)->defensa + ((pokemon_t*)pkm_1)->velocidad);
	int vida_2 = vida_total_2;
	int vida = vida_total;
	int nivel_2 = (((pokemon_t*)pkm_2)->ataque + ((pokemon_t*)pkm_2)->defensa + ((pokemon_t*)pkm_2)->velocidad) / 6;
	int nivel = (((pokemon_t*)pkm_1)->ataque + ((pokemon_t*)pkm_1)->defensa + ((pokemon_t*)pkm_1)->velocidad) / 6;
	int turno = 1;
	while(vida > 0 && vida_2 > 0){
		pelear_vida_2(pkm_1, pkm_2, &vida, &vida_2, &turno, nivel, nivel_2);
	}
	if(vida < vida_2){
		return PERDIO;
	}
	else{
		return GANO;
	}
}
/*
	Precondiciones: gimnasio_1 y 2 sean validos
	Postcondiciones: compara la dificultad de dos gimnasios
*/
int comparar_gym(void* gimnasio_1, void* gimnasio_2){

	return ((gimnasio_t*)gimnasio_1)->dificultad - ((gimnasio_t*)gimnasio_2)->dificultad;
}
/*
	Precondiciones: -
	Postcondiciones: libera la memoria de los pokemon o entrenadores dentro de la lista
*/
void destructor_lista(void* elemento){
	
	if(elemento){
		free(elemento);
	}
}
/*
	Precondiciones:-
	Postcondiciones: libera la memoria de los gimnasios dentro del heap
*/
void destructor_heap(void* elemento){
	
	if(elemento){
		gimnasio_t* gym = elemento;
		for(int i = 0; i < gym->cant_entrenadores; i++){
			lista_destruir(((entrenador_t*)lista_elemento_en_posicion(gym->entrenadores, (size_t)i))->pokemon, destructor_lista);
		}
		lista_destruir(gym->entrenadores, destructor_lista);
		free(gym);
	}
}
/*
	Precondiciones: elementos sean validos
	Postcondiciones: compara el nombre de dos pokemon
*/
int comparador_arbol(void* elemento_1, void* elemento_2){
	return(strcmp(((pokemon_t*)elemento_1)->nombre, ((pokemon_t*)elemento_2)->nombre));
}
/*
	Precondiciones: -
	Postcondiciones: libera la memeoria del elemento en un arbol
*/
void destructor_arbol(void* elemento){
	
	if(elemento){
		free(elemento);
	}
}
/*
	Precondiciones: elemento sea valido
	Postcondiciones: imprime el pokemon mandado y devuelve false para seguir iterando
*/
bool print_arbol(void* elemento, void* contexto){
	
	pokemon_t* pokemon = (pokemon_t*)elemento;
	if(pokemon->en_equipo == false){
		printf(" \t%s     Ataque:%i Defensa:%i Velocidad:%i\n", pokemon->nombre, pokemon->ataque, pokemon->defensa, pokemon->velocidad);
	}
	return false;
}

/*
	Precondiciones:-
	Postcondiciones: borra el contenido del personaje 
*/
void vaciar_personaje(personaje_t* personaje){

	if(personaje){
		lista_t* aux = personaje->pokemon_para_combatir;
		abb_t* aux_2 = personaje->pokemon_obtenidos;
		lista_destruir(aux, NULL);
		arbol_destruir(aux_2);
		personaje->cant_pokemon = 0;
		personaje->pokemon_para_combatir = lista_crear();
		personaje->pokemon_obtenidos = arbol_crear(comparador_arbol, destructor_arbol);
	}
}
/*
	Precondiciones:-
	Postcondiciones: libera la memoria del personaje
*/
void destruir_personaje(personaje_t* personaje){

	if(personaje){
		lista_destruir(personaje->pokemon_para_combatir, NULL);
		arbol_destruir(personaje->pokemon_obtenidos);
		free(personaje);
	}
}
/*
	Precondiciones:-
	Postcondiciones: libera la memoria del gimnasio
*/
void destruir_gimnasio(gimnasio_t* gimnasio){

	if(gimnasio){
		for(int i = 0; i < gimnasio->cant_entrenadores; i++){
			entrenador_t* entrenador_actual = (entrenador_t*)lista_elemento_en_posicion(gimnasio->entrenadores, (size_t)i);
			if(entrenador_actual){
				lista_destruir(entrenador_actual->pokemon, destructor_lista);
			}
		}
		lista_destruir(gimnasio->entrenadores, destructor_lista);
		free(gimnasio);
	}
}

/*
	Precondiciones:-
	Postcondiciones: libera la memoria del entrenador
*/
void destruir_entrenador(entrenador_t* entrenador, gimnasio_t* gym){

	if(entrenador){
		lista_destruir(entrenador->pokemon, destructor_lista);
		lista_desapilar(gym->entrenadores);
		free(entrenador);
	}
}
/*
	Precondiciones:-
	Postcondiciones: crea un personaje
*/
personaje_t* crear_personaje(){

	personaje_t* personaje = calloc(1, sizeof(personaje_t));
	if(!personaje){
		return NULL;
	}
	personaje->pokemon_para_combatir = lista_crear();
	personaje->pokemon_obtenidos = arbol_crear(comparador_arbol, destructor_arbol);;
	return personaje;
}
/*
	Precondiciones:-
	Postcondiciones: crea un entrenador
*/
gimnasio_t* crear_gimnasio(){
	return calloc(1, sizeof(gimnasio_t));
}
/*
	Precondiciones:-
	Postcondiciones: crea un entrenador
*/
entrenador_t* crear_entrenador(){
	return calloc(1, sizeof(entrenador_t));
}
/*
	Precondiciones:-
	Postcondiciones: crea un pokemon
*/
pokemon_t* crear_pokemon(){
	pokemon_t* pokemon = calloc(1, sizeof(pokemon_t));
	pokemon->en_equipo = false;
	return pokemon;
}
/*
	Precondiciones:personaje sea valido
	Postcondiciones: muestra al entrenador y sus pokemon del equipo
*/
void ver_personaje(personaje_t* personaje){

	printf(AMARILLO"\n\n-%s\n\nPOKEMON:\n", personaje->nombre);
	for(int i = 0; i < personaje->cant_pokemon; i++){
		pokemon_t* pokemon = ((pokemon_t*)lista_elemento_en_posicion(personaje->pokemon_para_combatir, (size_t)i));
		if(pokemon){
			printf(" -%s     Ataque:%i Defensa:%i Velocidad:%i\n", pokemon->nombre, pokemon->ataque, pokemon->defensa, pokemon->velocidad);
		}
	}
	printf(NORMAL "");
	next();
}
/*
	Precondiciones: heap sea valido
	Postcondiciones: muestra la informacion del gimnasio
*/
void ver_gimnasio(heap_t* gimnasios){

	gimnasio_t* gym = ((gimnasio_t*)heap_primero(gimnasios));
	printf(ROJO"-%s\n", gym->nombre);
	printf("Dificultad: %i\n", gym->dificultad);
	next();
}
/*
	Precondiciones:personaje sea valido
	Postcondiciones: muestra los pokemon del equipo del entrenador y los que no estan en el equipo
*/
void mostrar_pokemon(personaje_t* personaje){

	system("clear");
	printf(NORMAL ROJO"────────▄███████████▄────────\n");
	printf("─────▄███▓▓▓▓▓▓▓▓▓▓▓███▄─────\n");
	printf("────███▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓███────\n");
	printf("───██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██───\n");
	printf("──██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██──\n");
	printf("─██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██─\n");
	printf("██▓▓▓▓▓▓▓▓▓"BLANCO"███████"ROJO"▓▓▓▓▓▓▓▓▓██\n");
	printf("██▓▓▓▓▓▓▓▓"BLANCO"██░░░░░██"ROJO"▓▓▓▓▓▓▓▓██\n");
	printf("██▓▓▓▓▓▓▓"BLANCO"██░░███░░██"ROJO"▓▓▓▓▓▓▓██\n");
	printf(BLANCO"███████████░░███░░███████████\n");
	printf("██░░░░░░░██░░███░░██░░░░░░░██\n");
	printf("██░░░░░░░░██░░░░░██░░░░░░░░██\n");
	printf("██░░░░░░░░░███████░░░░░░░░░██\n");
	printf("─██░░░░░░░░░░░░░░░░░░░░░░░██─\n");
	printf("──██░░░░░░░░░░░░░░░░░░░░░██──\n");
	printf("───██░░░░░░░░░░░░░░░░░░░██───\n");
	printf("────███░░░░░░░░░░░░░░░███────\n");
	printf("─────▀███░░░░░░░░░░░███▀─────\n");
	printf("────────▀███████████▀────────\n");

	printf(NORMAL AMARILLO" ______________________\n");
	printf("|POKEMON PARA COMBATIR:|\n");
	printf("|______________________|\n");
	for(int i = 0; i < MAX_POKEMON; i++){
		pokemon_t* pokemon = ((pokemon_t*)lista_elemento_en_posicion(personaje->pokemon_para_combatir, (size_t)i));
		printf(" \t%i:    %s     Ataque:%i Defensa:%i Velocidad:%i\n", i+1, pokemon->nombre, pokemon->ataque, pokemon->defensa, pokemon->velocidad);
	}
	printf(AZUL "\n\n __________________\n");
	printf("|POKEMON GUARDADOS:|\n");
	printf("|__________________|\n");
	abb_con_cada_elemento(personaje->pokemon_obtenidos, 1, print_arbol, NULL);
}
/*
	Precondiciones:agregar, sacar y personaje sean validos
	Postcondiciones: intercambia los dos pokemon de las posiciones de sacar y agregar
*/
void intercambiar( char nombre[MAX_NOMBRE], int sacar, personaje_t* personaje){

	pokemon_t* pokemon_agregar = ((pokemon_t*)arbol_buscar(personaje->pokemon_obtenidos, nombre));
	pokemon_t* pokemon_sacar = ((pokemon_t*)lista_elemento_en_posicion(personaje->pokemon_para_combatir, (size_t)sacar));
	pokemon_agregar->en_equipo = true;
	pokemon_sacar->en_equipo = false;
	lista_borrar_de_posicion(personaje->pokemon_para_combatir, (size_t)sacar);
	lista_insertar_en_posicion(personaje->pokemon_para_combatir, pokemon_agregar, (size_t)sacar); 
}
/*
	Precondiciones: personaje sea valido
	Postcondiciones: pregunta al usuario que pokemon quiere cambiar de lugar y los intercambia
*/
void cambiar_pokemon(personaje_t* personaje){

	char nombre[MAX_NOMBRE];
	int sacar;

	if(personaje->cant_pokemon > MAX_POKEMON){
		mostrar_pokemon(personaje);
		printf(NORMAL "Ingrese el nombre del pokemon que quieras agregar\n");
		scanf("%s", nombre);
		pokemon_t* pokemon = (pokemon_t*)arbol_buscar(personaje->pokemon_obtenidos, nombre);
		while(pokemon == NULL || pokemon->en_equipo == true){
			printf("Ese nombre no es valido\n");
			scanf("%s", nombre);
			pokemon = (pokemon_t*)arbol_buscar(personaje->pokemon_obtenidos, nombre);
		}
		printf("Ingrese la posicion donde lo quieras meter\n");
		scanf("%i", &sacar);
		while(sacar < MIN_POKEMON || sacar > MAX_POKEMON){
			printf("Ese numero no es valido, ingrese un numero entre 1 y 6\n");
			scanf("%i", &sacar);
		}
		sacar--;
		intercambiar(nombre, sacar, personaje);
	}
	else{
		printf("No tenes mas pokemon guardados\n");
		next();
	}
}
/*
	Precondiciones:-
	Postcondiciones: pregunta que opcion quiere hacer el usuario
*/
void elegir_opcion_gimnasio(char* opcion){

	system("clear");
	printf(NORMAL AMARILLO FROJO"");
	print_pokemon(CHARIZARD);
	printf("Menu de Gimnasio:\n\n");
	printf(" _________________________________________\n");
	printf("|E: Ver entrenador principal y sus pokemon|\n");
	printf("|_________________________________________|\n");
	printf(" ___________________________________\n");
	printf("|G: Informacion del proximo gimnasio|\n");
	printf("|___________________________________|\n");
	printf(" _________________________________\n");
	printf("|C: Cambiar los pokemon de combate|\n");
	printf("|_________________________________|\n");
	printf(" ___________________________\n");
	printf("|B: Realizar proxima batalla|\n");
	printf("|___________________________|\n"NORMAL);
	
	scanf(" %c", opcion);
	while(*opcion != VER_PERSONAJE && *opcion != INFO_GIMNASIO && *opcion != CAMBIAR_POKEMON && *opcion != REALIZAR_BATALLA){
		printf("Ingrese la opcion E, G, C o B en mayuscula porfavor\n");
		scanf(" %c", opcion);
	}
}
/*
	Precondiciones: gimnasios y personaje sean validos
	Postcondiciones: muestra el menu del gimnasio y hace la opcion que elija el usuario
*/
void mostrar_menu_gimnasio(heap_t* gimnasios, personaje_t* personaje){
	
	if(personaje->simular == false){
		char opcion;
		elegir_opcion_gimnasio(&opcion);
		if(opcion == VER_PERSONAJE){
			ver_personaje(personaje);
			mostrar_menu_gimnasio(gimnasios, personaje);
		}
		else if(opcion == INFO_GIMNASIO){
			ver_gimnasio(gimnasios);
			mostrar_menu_gimnasio(gimnasios, personaje);
		}
		else if(opcion == CAMBIAR_POKEMON){
			cambiar_pokemon(personaje);
			mostrar_menu_gimnasio(gimnasios, personaje);
		}
	}
}
/*
	Precondiciones:id_batalla y simular sean validos
	Postcondiciones: devuelve la funcion con la que van a pelear los pokemon
*/
funcion elegir_funcion(int id_batalla, bool simular){

	if(simular == false){
	 	if(id_batalla == BATALLA_1){
	 		return (funcion)funcion_batalla_1;
	 	}
	 	else if(id_batalla == BATALLA_2){
	 		return (funcion)funcion_batalla_2;
	 	}
	 	else if(id_batalla == BATALLA_3){
	 		return (funcion)funcion_batalla_3;
	 	}
	 	else if(id_batalla == BATALLA_4){
	 		return (funcion)funcion_batalla_4;
	 	}
	 	else{
	 		return (funcion)funcion_batalla_5;
	 	}
	 }
	 else{
	 	return (funcion)funcion_batalla_0;
	 }
 }
/*
	Precondiciones: pokemon sea valido
	Postcondiciones: suma un punto a cada atributo del pokemon si no ha superado los 63 puntos sumados
*/
void mejorar_stats(pokemon_t* pokemon){

	if(pokemon->puntos_stats < MAX_STATS){
		pokemon->velocidad++;
		pokemon->ataque++;
		pokemon->defensa++;
		pokemon->puntos_stats++;
	}
}
/*
	Precondiciones:entrenador personaje y funcion batalla sean validos
	Postcondiciones: hace pelear al personaje contra un entrenador hasta que uno se quede sin pokemon. Devuelve 1 si gano y -1 si perdio
*/
int pelear(entrenador_t* entrenador, personaje_t* personaje, funcion batalla){

	int resultado = 1;
	int i = 0;
	int j = 0;
	system("clear");
	while(i < MAX_POKEMON && i < personaje->cant_pokemon && j < entrenador->cant_pokemon){
		pokemon_t* mi_pokemon = (pokemon_t*)lista_elemento_en_posicion(personaje->pokemon_para_combatir, (size_t)i);
		pokemon_t* pokemon_entrenador = (pokemon_t*)lista_elemento_en_posicion(entrenador->pokemon, (size_t)j);
		resultado = batalla(mi_pokemon, pokemon_entrenador);
		if(resultado == GANO){
			mejorar_stats(mi_pokemon);
			j++;
		}
		else{
			i++;
		}
	}
	if(i >= MAX_POKEMON || i >= personaje->cant_pokemon){
		return PERDIO;
	}
	return GANO;
}
/*
	Precondiciones: pokemon_a_copiar sea valido
	Postcondiciones: crea y devuelve una copia del pokemon
*/
pokemon_t* copiar_pokemon(pokemon_t* pokemon_a_copiar){

	pokemon_t* nuevo_pokemon = crear_pokemon();
	if(!nuevo_pokemon){
		return NULL;
	}
	strcpy(nuevo_pokemon->nombre, pokemon_a_copiar->nombre);
	nuevo_pokemon->velocidad = pokemon_a_copiar->velocidad;
	nuevo_pokemon->ataque = pokemon_a_copiar->ataque;
	nuevo_pokemon->defensa = pokemon_a_copiar->defensa;
	return nuevo_pokemon;
}
/*
	Precondiciones:lider y personaje sean validos
	Postcondiciones: hace eligir al usuario que pokemon quiere tomar y lo agrega a los pokemon del personaje
*/
void elegir_pokemon(entrenador_t* lider, personaje_t* personaje){

	system("clear");
	printf(NORMAL "");
	for(int i = 0; i < lider->cant_pokemon; i++){
		pokemon_t* pokemon_actual = lista_elemento_en_posicion(lider->pokemon, (size_t)i);
		printf(" \t%i:    %s     ataque:%i defensa:%i velocidad:%i\n", i+1, pokemon_actual->nombre, pokemon_actual->ataque, pokemon_actual->defensa, pokemon_actual->velocidad);
	}
	printf("Ingrese el numero del pokemon que quieras agregar a tus pokemon obtenidos\n");
	int numero;
	scanf("%i", &numero);
	while(numero - 1 < 0 || numero - 1 >= lider->cant_pokemon){
		printf("Ingrese un numero valido (entre 1 y %i)", lider->cant_pokemon);
		scanf("%i", &numero);
	}
	numero--;
	pokemon_t* nuevo_pokemon = copiar_pokemon((pokemon_t*)lista_elemento_en_posicion(lider->pokemon, (size_t)numero));
	if(!nuevo_pokemon){
		return;
	}
	if(personaje->cant_pokemon < 6){
		lista_insertar(personaje->pokemon_para_combatir, nuevo_pokemon);
	}
	arbol_insertar(personaje->pokemon_obtenidos, nuevo_pokemon);
	personaje->cant_pokemon++;
}
/*
	Precondiciones: personaje sea valido
	Postcondiciones: finaliza la partida mostrando por pantalla cosas disitintas dependiendo de si perdio o gano
*/
void finalizar_partida(personaje_t* personaje){

	system("clear");
	if(personaje->termino == true){
		printf(NORMAL "┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n");
		printf("███▀▀▀██┼███▀▀▀███┼███▀█▄█▀███┼██▀▀▀\n");
		printf("██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼█┼┼┼██┼██┼┼┼\n");
		printf("██┼┼┼▄▄▄┼██▄▄▄▄▄██┼██┼┼┼▀┼┼┼██┼██▀▀▀\n");
		printf("██┼┼┼┼██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██┼┼┼\n");
		printf("███▄▄▄██┼██┼┼┼┼┼██┼██┼┼┼┼┼┼┼██┼██▄▄▄\n");
		printf("┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n");
		printf("███▀▀▀███┼▀███┼┼██▀┼██▀▀▀┼██▀▀▀▀██▄┼\n");
		printf("██┼┼┼┼┼██┼┼┼██┼┼██┼┼██┼┼┼┼██┼┼┼┼┼██┼\n");
		printf("██┼┼┼┼┼██┼┼┼██┼┼██┼┼██▀▀▀┼██▄▄▄▄▄▀▀┼\n");
		printf("██┼┼┼┼┼██┼┼┼██┼┼█▀┼┼██┼┼┼┼██┼┼┼┼┼██┼\n");
		printf("███▄▄▄███┼┼┼─▀█▀┼┼─┼██▄▄▄┼██┼┼┼┼┼██▄\n");
		printf("┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼██┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼████▄┼┼┼▄▄▄▄▄▄▄┼┼┼▄████┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼┼▀▀█▄█████████▄█▀▀┼┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼┼┼┼█████████████┼┼┼┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼┼┼┼██▀▀▀███▀▀▀██┼┼┼┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼┼┼┼██┼┼┼███┼┼┼██┼┼┼┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼┼┼┼█████▀▄▀█████┼┼┼┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼┼┼┼┼███████████┼┼┼┼┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼▄▄▄██┼┼█▀█▀█┼┼██▄▄▄┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼▀▀██┼┼┼┼┼┼┼┼┼┼┼██▀▀┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼▀▀┼┼┼┼┼┼┼┼┼┼┼\n");
		printf("┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼\n");
	}
	else{
		printf(NORMAL AMARILLO"");
		print_pokemon(DRAGONITE);
		printf(NORMAL FAMARILLO NEGRO"FELICITACIONES!!\n LES HAS GANADO A TODOS LOS GIMNASIOS\n TE HAS CONVERTIDO EN UN MAESTRO POKEMON");
		personaje->termino = true;
	}
}
/*
	Precondiciones:-
	Postcondiciones: pregunta al usuario que opcion quiere elegir
*/
void elegir_opcion_victoria(char* opcion){

	system("clear");
	printf(NORMAL AMARILLO"");
	print_pokemon(PIKACHU);
	printf("Has derrotado al lider del gimnasio!\n\n");
	printf(" _____________________________\n");
	printf("|T: Tomar un pokemon del lider|\n");
	printf("|_____________________________|\n");
	printf(" _________________________________\n");
	printf("|C: Cambiar los pokemon de batalla|\n");
	printf("|_________________________________|\n");
	printf(" ______________________________\n");
	printf("|N: Avanzar al proximo gimnasio|\n");
	printf("|______________________________|\n");

	scanf(" %c", opcion);
	while(*opcion != TOMAR_POKEMON && *opcion != CAMBIAR_POKEMON && *opcion != AVANZAR){
		printf("Ingrese la opcion T, C o N en mayuscula porfavor\n");
		scanf(" %c", opcion);
	}
}
/*
	Precondiciones: gimnasios personaje y bool sean validos
	Postcondiciones: toma un pokemon del lider si no ha tomado uno anteriormente
*/
void tomar_pokemon(heap_t* gimnasios, personaje_t* personaje, bool* ya_tomo_pokemon){

	if(*ya_tomo_pokemon == false){
		gimnasio_t* gym = heap_primero(gimnasios);
		elegir_pokemon(lista_tope(gym->entrenadores), personaje);
		*ya_tomo_pokemon = true;
	}
	else{
		printf("Ya has tomado un pokemon del lider!\n");
		next();
	}
}
/*
	Precondiciones:gimnasios y personaje sean validos y bool ya inicializado
	Postcondiciones: muestra el menu de victoria y hace la opcion que elija el usuario
*/
void mostrar_menu_victoria(heap_t* gimnasios, personaje_t* personaje, bool* ya_tomo_pokemon){

	char opcion;
	if(personaje->simular == false){
		elegir_opcion_victoria(&opcion);
	}
	else{
		opcion = AVANZAR;
	}
	if(opcion == TOMAR_POKEMON){
		tomar_pokemon(gimnasios, personaje, ya_tomo_pokemon);
		mostrar_menu_victoria(gimnasios, personaje, ya_tomo_pokemon);
	}
	else if(opcion == CAMBIAR_POKEMON){
		cambiar_pokemon(personaje);
		mostrar_menu_victoria(gimnasios, personaje, ya_tomo_pokemon);
	}
	else if(opcion == AVANZAR){
		gimnasio_t* gym_reciente = heap_extraer_raiz(gimnasios, comparar_gym);
		destruir_gimnasio(gym_reciente);
		if(heap_vacio(gimnasios) == true){
			finalizar_partida(personaje);
			return;
		}
		mostrar_menu_gimnasio(gimnasios, personaje);
	}
}
/*
	Precondiciones:-
	Postcondiciones: Pregunta al usuario que opcion elige
*/
void elegir_opcion_derrota(char* opcion){

	system("clear");
	printf(VIOLETA"");
	print_pokemon(GENGAR);
	printf("Has perdido :( \n\n");
	printf(" _________________________________\n");
	printf("|C: Cambiar los pokemon de batalla|\n");
	printf("|_________________________________|\n");
	printf(" _________________________\n");
	printf("|R: Reintentar el gimnasio|\n");
	printf("|_________________________|\n");
	printf(" _______________________\n");
	printf("|F: Finalizar la partida|\n");
	printf("|_______________________|\n");

	scanf(" %c", opcion);
	while(*opcion != CAMBIAR_POKEMON && *opcion != REINTENTAR && *opcion != FINALIZAR){
		printf("Ingrese la opcion C, R o F en mayuscula porfavor\n");
		scanf(" %c", opcion);
	}
}
/*
	Precondiciones: gimnasios y personaje sean validos
	Postcondiciones: muestra el menu de derrota y hace la opcion que elija el usuario
*/
void mostrar_menu_derrota(heap_t* gimnasios, personaje_t* personaje){

	char opcion;
	if(personaje->simular == false){
		elegir_opcion_derrota(&opcion);
	}
	else{
		opcion = FINALIZAR;
	}
	if(opcion == CAMBIAR_POKEMON){
		cambiar_pokemon(personaje);
		mostrar_menu_derrota(gimnasios, personaje);
	}
	else if(opcion == FINALIZAR){
		personaje->termino = true;
		finalizar_partida(personaje);
	}
}
/*
	Precondiciones: gimnasios y personaje sean validos
	Postcondiciones: realiza batallas del personaje contra los entrenadores del gimnasio
*/
void realizar_batalla(heap_t* gimnasios, personaje_t* personaje){

	int i = 0;
	int resultado = GANO;
	gimnasio_t* gym = (gimnasio_t*)heap_primero(gimnasios);
	funcion batalla = elegir_funcion(gym->id_batalla, personaje->simular);
	while(i < gym->cant_entrenadores && resultado == GANO){
		entrenador_t* entrenador_actual = (entrenador_t*)lista_tope(gym->entrenadores);
		resultado = pelear(entrenador_actual, personaje, batalla);
		if(resultado == GANO){
			if(personaje->simular == false){
				printf(AMARILLO "Le has ganado a %s!\n", entrenador_actual->nombre);
				next();
			}
			if(i != gym->cant_entrenadores - 1){
				destruir_entrenador(entrenador_actual, gym);
			}
			i++;
		}
	}
	if(resultado == PERDIO){
		gym->cant_entrenadores -= i;
		mostrar_menu_derrota(gimnasios, personaje);
	}
	else{
		bool ya_tomo_pokemon = false;
		mostrar_menu_victoria(gimnasios, personaje, &ya_tomo_pokemon);
	}
}
/*
	Precondiciones: archivo ya esta abierto y i inicializado
	Postcondiciones: lee un pokemon del archivo. Devuelve false si no es valido
*/
bool leer_pokemon_entrenador(pokemon_t* pokemon_actual, FILE** arch_personaje, personaje_t* personaje, int i){

	fscanf(*arch_personaje, FORMATO_POKEMON, pokemon_actual->nombre, &(pokemon_actual->velocidad), &(pokemon_actual->ataque), &(pokemon_actual->defensa));
	if(i < MAX_POKEMON){
		lista_insertar(personaje->pokemon_para_combatir, pokemon_actual);
		pokemon_actual->en_equipo = true;
	}
	arbol_insertar(personaje->pokemon_obtenidos, pokemon_actual);
	if(pokemon_actual->velocidad < 0 ||  pokemon_actual->ataque < 0 || pokemon_actual->defensa < 0){
		return false;
	}
	return true;
}
/*
	Precondiciones: personaje ya creado
	Postcondiciones: lee el personaje del archivo del entrenador principal. Devuelve false si hubo un error
*/
bool leer_personaje(personaje_t* personaje){

	char ruta_archivo[MAX_ARCHIVO];
	printf("Ingrese el archivo del entrenador principal\n");
	scanf(" %s", ruta_archivo);
	FILE* arch_personaje = fopen(ruta_archivo, "r");
	if(!arch_personaje){
		return false;
	}
	bool es_valido = true;
	char tipo;
	int i = 0;
	int leidos = fscanf(arch_personaje, FORMATO_CHAR, &tipo);
	while(leidos == 1 && (tipo == ENTRENADOR || tipo == POKEMON) && es_valido == true){
		if(tipo == ENTRENADOR){
			fscanf(arch_personaje, FORMATO_NOMBRE, personaje->nombre);
			leidos = fscanf(arch_personaje, FORMATO_CHAR, &tipo);
		}
		if(tipo == POKEMON){
			pokemon_t* pokemon_actual = crear_pokemon();
			if(!pokemon_actual){
				vaciar_personaje(personaje);
				fclose(arch_personaje);
				return false;
			}
			es_valido = leer_pokemon_entrenador(pokemon_actual, &arch_personaje, personaje, i);
			i++;
			leidos = fscanf(arch_personaje, FORMATO_CHAR, &tipo);
		}
	}
	if(i == 0){
		es_valido = false;
	}
	personaje->cant_pokemon = i;
	personaje->termino = false;
	fclose(arch_personaje);
	if(es_valido == false){
		vaciar_personaje(personaje);
	}
	return es_valido;
}

bool leer_gimnasio(char* tipo, gimnasio_t* gimnasio_actual, FILE** arch_gym, int* leidos){

	fscanf(*arch_gym, FORMATO_GYM, gimnasio_actual->nombre, &(gimnasio_actual->dificultad), &(gimnasio_actual->id_batalla));
	if(gimnasio_actual->dificultad < 0 || gimnasio_actual->id_batalla < 0 || gimnasio_actual->id_batalla > 5){
		return false;
	}
	*leidos = fscanf(*arch_gym, FORMATO_CHAR, tipo);
	gimnasio_actual->entrenadores = lista_crear();
	return true;
}
/*
	Precondiciones: archivo ya este abierto
	Postcondiciones: lee un pokemon del archivo. Devuelve false si no es valido
*/
bool leer_pokemon(char* tipo, FILE** arch_gym, int* leidos, entrenador_t* entrenador_actual, gimnasio_t* gimnasio_actual){

	if(entrenador_actual->cant_pokemon < MAX_POKEMON){
		pokemon_t* pokemon_actual = crear_pokemon();
		if(!pokemon_actual){
			fclose(*arch_gym);
			return false;
		}
		entrenador_actual->cant_pokemon++;
		fscanf(*arch_gym, FORMATO_POKEMON, pokemon_actual->nombre, &(pokemon_actual->velocidad), &(pokemon_actual->ataque), &(pokemon_actual->defensa));
		lista_encolar(entrenador_actual->pokemon, pokemon_actual);
		if(pokemon_actual->velocidad < 0 ||  pokemon_actual->ataque < 0 || pokemon_actual->defensa < 0){
			return false;
		}
	}
	else{
		pokemon_t pokemon_actual;
		fscanf(*arch_gym, FORMATO_POKEMON, pokemon_actual.nombre, &(pokemon_actual.velocidad), &(pokemon_actual.ataque), &(pokemon_actual.defensa));
	}
	*leidos = fscanf(*arch_gym, FORMATO_CHAR, tipo);
	return true;
}
/*
	Precondiciones: archivo ya este abierto para leer
	Postcondiciones: lee un entrenador del archivo. Devuelve false si no es valido
*/
bool leer_entrenador(char* tipo, FILE** arch_gym, int* leidos, gimnasio_t* gimnasio_actual){

	bool es_valido = true;
	entrenador_t* entrenador_actual = crear_entrenador();
	if(!entrenador_actual){
		fclose(*arch_gym);
		return false;
	}
	gimnasio_actual->cant_entrenadores++;
	fscanf(*arch_gym, FORMATO_NOMBRE, entrenador_actual->nombre);
	*leidos = fscanf(*arch_gym, FORMATO_CHAR, tipo);
	entrenador_actual->pokemon = lista_crear();
	while(*leidos == 1 && *tipo == POKEMON && es_valido == true){
		es_valido = leer_pokemon(tipo, arch_gym, leidos, entrenador_actual, gimnasio_actual);
	}
	lista_apilar(gimnasio_actual->entrenadores, entrenador_actual);
	return es_valido;
}
/*
	Precondiciones: -
	Postcondiciones: verifica que el gimnasio tenga entrenadores y cada uno minimo un pokemon. Devuelve false si no es valido
*/
bool verificar_gym(gimnasio_t* gym){

	bool es_valido = false;
	if(gym->cant_entrenadores > 1){
		es_valido = true;
	}
	for(int i = 0; i < gym->cant_entrenadores; i++){
		if(((entrenador_t*)lista_elemento_en_posicion(gym->entrenadores, (size_t)i))->cant_pokemon == 0){
			es_valido = false;
		}
	}
	return es_valido;
}
/*
	Precondiciones: heap ya creado
	Postcondiciones: lee el archivo creando el gimnasio y agregandolo al heap. Devuelve false si hubo un error
*/
bool leer_archivo_gimnasio(heap_t* gimnasios){

	char ruta_archivo[MAX_ARCHIVO];
	printf("Ingrese el archivo del gimnasio a agregar\n");
	scanf(" %s", ruta_archivo);
	FILE* arch_gym = fopen(ruta_archivo, "r");
	if(!arch_gym){
		return false;
	}
	char tipo;
	bool es_valido = true;
	int leidos = fscanf(arch_gym, FORMATO_CHAR, &tipo);
	while(leidos == 1 && tipo == GIMNASIO && es_valido == true){
		gimnasio_t* gimnasio_actual = crear_gimnasio();
		if(!gimnasio_actual){
			fclose(arch_gym);
			
			destruir_gimnasio(gimnasio_actual);
			return false;
		}
		es_valido = leer_gimnasio(&tipo, gimnasio_actual, &arch_gym, &leidos);
		while(leidos == 1 && (tipo == LIDER || tipo == ENTRENADOR) && es_valido == true){
			es_valido = leer_entrenador(&tipo, &arch_gym, &leidos, gimnasio_actual);
		}
		if(es_valido == true && verificar_gym(gimnasio_actual) == true){
			heap_insertar(gimnasios, gimnasio_actual, comparar_gym);
		}
		else{
			destruir_gimnasio(gimnasio_actual);
		}
	}
	fclose(arch_gym);
	return !heap_vacio(gimnasios);
}
/*
	Precondiciones:-
	Postcondiciones: Pregunta al usuario que opcion quiere elegir
*/
void elegir_opcion_inicio(char* opcion){

	system("clear");
	printf(AMARILLO "	                       .;:**'            \n");
	printf("                                `                  \n");
	printf("  .:XHHHHk.              db.   .;;.     dH  MX   \n");
	printf("oMMMMMMMMMMM       ~MM  dMMP :MMMMMR   MMM  MR      ~MRMN\n");
	printf("QMMMMMb  *MMX       MMMMMMP !MX' :M~   MMM MMM  .oo. XMMM 'MMM\n");
	printf("  `MMMM.  )M> :X!Hk. MMMM   XMM.o*  .  MMMMMMM X?XMMM MMM>!MMP\n");
	printf("   'MMMb.dM! XM M'?M MMMMMX.`MMMMMMMM~ MM MMM XM `* MX MMXXMM\n");
	printf("    ~MMMMM~ XMM. .XM XM`*MMMb.~*?**~ .MMX M t MMbooMM XMMMMMP\n");
	printf("     ?MMM>  YMMMMMM! MM   `?MMRb.    `***   !L*MMMMM XM IMMM\n");
	printf("      MMMX   *MMMM*  MM       ~M:           !Mh.*** dMI IMMP\n");
	printf("      'MMM.                                             IMX\n");
	printf("       ~M!M                                             IMP\n\n\n");

	printf("Bienvenido al mundo pokemon!\n\n");
	printf(" ____________________________________________\n");
	printf("|"AZUL "E: Ingresar archivo del entrenador principal"AMARILLO"|\n");
	printf("|____________________________________________|\n");
	printf(" ______________________\n");
	printf("|"AZUL "A: Agregar un gimnasio"AMARILLO"|\n");
	printf("|______________________|\n");
	printf(" ______________________\n");
	printf("|"AZUL "I: Comenzar la partida"AMARILLO "|\n");
	printf("|______________________|\n");
	printf(" _____________________\n");
	printf("|"AZUL "S: Simular la partida"AMARILLO"|\n");
	printf("|_____________________|\n");

	scanf(" %c", opcion);
	while(*opcion != INGRESAR_PERSONAJE && *opcion != AGREGAR_GIMNASIO && *opcion != COMENZAR && *opcion != SIMULAR){
		printf("Ingrese la opcion E, A, I o S en mayuscula porfavor\n");
		scanf(" %c", opcion);
	}
}
/*
	Precondiciones:personaje ya creado
	Postcondiciones: agregar el personaje y sus pokemon del archivo
*/
void agregar_entrenador(personaje_t* personaje, bool* hay_entrenador){

	if(*hay_entrenador == true){
		printf("Ya ingresaste este archivo\n");
		next();
	}
	else if(leer_personaje(personaje) == true){
		*hay_entrenador = true;
	}
	else{
		printf("El archivo insertado no es valido\n");
		next();
	}
}
/*
	Precondiciones: heap ya creado
	Postcondiciones: agrega el/los gimnasios del archivo al heap
*/
void agregar_gimnasio(heap_t* gimnasios, bool* hay_gimnasio){

	if(leer_archivo_gimnasio(gimnasios) == true){
		*hay_gimnasio = true;
	}
	else{
		printf("El archivo insertado no es valido\n");
		next();
	}
}
/*
	Precondiciones: -
	Postcondiciones: Avisa al usuario que falta agregar un archivo
*/
void falta_archivo(){

	printf("Tenes que cargar los archivos de los gimnasios o del entrenador principal\n");
	next();
}
/*
	Precondiciones: heap y personaje ya creados 
	Postcondiciones: muestra el menu del inicio y hace la opcion que elija el usuario
*/
void mostrar_menu_inicio(heap_t* gimnasios, personaje_t* personaje, bool* hay_gimnasio, bool* hay_entrenador){

	char opcion;
	elegir_opcion_inicio(&opcion);
	if(opcion == INGRESAR_PERSONAJE){
		agregar_entrenador(personaje, hay_entrenador);
		mostrar_menu_inicio(gimnasios, personaje, hay_gimnasio, hay_entrenador);
	}
	else if(opcion == AGREGAR_GIMNASIO){
		agregar_gimnasio(gimnasios, hay_gimnasio);
		mostrar_menu_inicio(gimnasios, personaje, hay_gimnasio, hay_entrenador);
	}
	else if(opcion == COMENZAR){
		if(!*hay_gimnasio || !*hay_entrenador){
			falta_archivo(gimnasios, personaje, hay_gimnasio, hay_entrenador);
			mostrar_menu_inicio(gimnasios, personaje, hay_gimnasio, hay_entrenador);
			return;
		}
		mostrar_menu_gimnasio(gimnasios, personaje);
	}
	else if(opcion == SIMULAR){
		if(!*hay_gimnasio || !*hay_entrenador){
			falta_archivo(gimnasios, personaje, hay_gimnasio, hay_entrenador);
			mostrar_menu_inicio(gimnasios, personaje, hay_gimnasio, hay_entrenador);
			return;
		}
		personaje->simular = true;
		mostrar_menu_gimnasio(gimnasios, personaje);
	}
}
/*
	Precondiciones: personaje y gimnasios sean validos
	Postcondiciones: libera la memoria del personaje y del heap de gimnasios
*/
void liberar_todo(personaje_t* personaje, heap_t* gimnasios){
	
	destruir_personaje(personaje);
	heap_destruir(gimnasios, destructor_heap);
}

int main(){

	heap_t* gimnasios = heap_crear();
	personaje_t* personaje = crear_personaje();	
	bool hay_gimnasio = false;
	bool hay_entrenador = false;

	mostrar_menu_inicio(gimnasios, personaje, &hay_gimnasio, &hay_entrenador);
	while(personaje->termino == false){
		realizar_batalla(gimnasios, personaje);
	}
	liberar_todo(personaje, gimnasios);
}