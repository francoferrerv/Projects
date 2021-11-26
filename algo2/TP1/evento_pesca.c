#include "evento_pesca.h"
#include <stdlib.h>
#include <string.h>

#define FORMATO_LEER "%[^;];%i;%i;%[^\n]\n"
#define FORMATO_ESCRIBIR "%s;%i;%i;%s\n"
#define FORMATO_ARCH "%[^.].%s"
const int ERROR = -1;
const int CANT_A_LEER = 4;
const int MAX_EXTENSION = 4;
const int MAX_NOMBRE = 50;

/*
	Precondiciones: pokemon_2 ya este inicializado
	Postcondiciones: copia los datos de un pokemon a otro
*/
void copiar_datos_pokemon(pokemon_t* pokemon_1, pokemon_t* pokemon_2){

	strcpy((*pokemon_1).especie, (*pokemon_2).especie) ;
    (*pokemon_1).velocidad = (*pokemon_2).velocidad;
    (*pokemon_1).peso = (*pokemon_2).peso;
    strcpy((*pokemon_1).color, (*pokemon_2).color);
}

/*
	Precondiciones: archivo arrecife ya este abierto para leer, arrecife ya creado y la cantidad de pokemon del arrecife ya inicializado
	Postcondiciones: lee del archivo del arrecife, agrega los pokemon a un vector de pokemon guardado en el heap y verifica que se haya leido por lo menos un pokemon
*/
bool leer_archivo_arrecife(arrecife_t* arrecife, FILE* arch_arrecife){

	pokemon_t pokemon_actual;

	int leidos = fscanf(arch_arrecife, FORMATO_LEER, pokemon_actual.especie, &(pokemon_actual.velocidad), &(pokemon_actual.peso), pokemon_actual.color);
	while(leidos == CANT_A_LEER){
		pokemon_t* nuevo_pokemon = realloc((*arrecife).pokemon, sizeof(pokemon_t) * ((size_t)(*arrecife).cantidad_pokemon + 1));
		if(nuevo_pokemon==NULL){
			return((*arrecife).cantidad_pokemon > 0);
		}
		(*arrecife).pokemon = nuevo_pokemon;
		(*arrecife).cantidad_pokemon++;
		copiar_datos_pokemon(&((*arrecife).pokemon[(*arrecife).cantidad_pokemon - 1]), &pokemon_actual);
		leidos = fscanf(arch_arrecife, FORMATO_LEER, pokemon_actual.especie, &(pokemon_actual.velocidad), &(pokemon_actual.peso), pokemon_actual.color);
	}
	return((*arrecife).cantidad_pokemon > 0);
}

/*
	Precondiciones: contador y pokemon_a_sacar ya esten inicializados y arrecife ya creado
	Postcondiciones: agrega pokemon al vector del acuario
*/
int agregar_al_acuario(int contador, arrecife_t* arrecife, acuario_t* acuario, int* pokemon_a_sacar){

	for(int i = 0; i < contador; i++){
		(*acuario).cantidad_pokemon++;
		pokemon_t* nuevo_pokemon = realloc((*acuario).pokemon, sizeof(pokemon_t) * ((size_t)(*acuario).cantidad_pokemon + 1));
		if(nuevo_pokemon==NULL){
				return ERROR;
		}
		(*acuario).pokemon = nuevo_pokemon;
		copiar_datos_pokemon(&((*acuario).pokemon[(*acuario).cantidad_pokemon - 1]), &((*arrecife).pokemon[pokemon_a_sacar[i]]));
	}
	return 0;
}

/*
	Precondiciones: contador, pokemon_a_sacar y arrecife ya inicializado
	Postcondiciones: elimina del arrecife los pokemon que fueron transferidos al acuario
*/
int sacar_del_arrecife(int contador, arrecife_t* arrecife, int* pokemon_a_sacar){

	for(int i = 0; i < contador; i++){
		(*arrecife).cantidad_pokemon -= 1;
		for(int j = 0; j < ((*arrecife).cantidad_pokemon - (pokemon_a_sacar[i])); j++){
			copiar_datos_pokemon(&((*arrecife).pokemon[pokemon_a_sacar[i] + j]), &((*arrecife).pokemon[pokemon_a_sacar[i] + j + 1]));
		}
		pokemon_t* nuevo_pokemon = realloc((*arrecife).pokemon, sizeof(pokemon_t) * ((size_t)(*arrecife).cantidad_pokemon + 1));
		if(nuevo_pokemon==NULL){
			return ERROR;
		}
		(*arrecife).pokemon = nuevo_pokemon;
		pokemon_a_sacar[i+1] -= (i+1);
	}
	return 0;
}

bool arch_valido(const char* ruta_archivo){

	char ext_txt[] = {'t','x','t',0};
	char extension[MAX_EXTENSION];
	char nombre_archivo[MAX_NOMBRE];
	sscanf(ruta_archivo, FORMATO_ARCH, nombre_archivo, extension);
printf("%c %c %c %c\n", ext_txt[0], ext_txt[1], ext_txt[2], ext_txt[3]);
printf("%c %c %c %c\n", extension[0], extension[1], extension[2], extension[3]);

	return(strcmp(extension, ext_txt) == 0);
		
	
}

arrecife_t* crear_arrecife(const char* ruta_archivo){

	FILE* arch_arrecife;

	arrecife_t* arrecife = calloc(1, sizeof(arrecife_t));
	if(arrecife == NULL){
		printf("Hubo un error al reservar memoria");
		return NULL;
	}
	if(arch_valido(ruta_archivo)){	
		arch_arrecife = fopen(ruta_archivo, "r");
		if(!arch_arrecife){
			printf("No se pudo abrir el archivo del arrecife");
			free(arrecife);
			return NULL;
		}
		if(!leer_archivo_arrecife(arrecife, arch_arrecife)){
			printf("No se pudo leer ningun pokemon del arrecife");
			free(arrecife);
			fclose(arch_arrecife);
			return NULL;
		}
	}
	else{
		free(arrecife);
		return NULL;
	}

	fclose(arch_arrecife);
	return arrecife;
}

acuario_t* crear_acuario(){

	acuario_t* acuario = calloc(1, sizeof(acuario_t));
	if(acuario == NULL){
		printf("Hubo un error al reservar memoria");
		return NULL;
	}
	return acuario;
}

int trasladar_pokemon(arrecife_t* arrecife, acuario_t* acuario, bool (*seleccionar_pokemon) (pokemon_t*), int cant_seleccion){

	int i = 0;
	int j = 0;
	int contador = 0;
	int pokemon_a_sacar[(*arrecife).cantidad_pokemon];

	while(i < (*arrecife).cantidad_pokemon && contador < cant_seleccion){
		if(seleccionar_pokemon(&((*arrecife).pokemon[i]))){
			pokemon_a_sacar[j] = i;
			contador++;
    		j++;
		}
		i++;
	}
	if(contador < cant_seleccion){
		printf("No se ha trasladado ningun pokemon ya que no hay suficientes para alcanzar la cantidad requirida\n");
		return ERROR;
	}
	if(agregar_al_acuario(contador,arrecife, acuario, pokemon_a_sacar) == ERROR || sacar_del_arrecife(contador, arrecife, pokemon_a_sacar) == ERROR){
		return ERROR;
	}
	return 0;
}

void censar_arrecife(arrecife_t* arrecife, void (*mostrar_pokemon)(pokemon_t*)){

	for(int i = 0; i < (*arrecife).cantidad_pokemon; i++){
		mostrar_pokemon(&((*arrecife).pokemon[i]));
	}
}

int guardar_datos_acuario(acuario_t* acuario, const char* nombre_archivo){

	FILE* arch_acuario = fopen(nombre_archivo, "w");
	if(!arch_acuario){
		printf("No se pudo crear el archivo de acuario");
		return ERROR;
	}
	for(int i = 0; i < (*acuario).cantidad_pokemon; i++){
		fprintf(arch_acuario, FORMATO_ESCRIBIR, (*acuario).pokemon[i].especie, (*acuario).pokemon[i].velocidad, (*acuario).pokemon[i].peso, (*acuario).pokemon[i].color);
	}
	fclose(arch_acuario);
	return 0;
}

void liberar_acuario(acuario_t* acuario){

	free((*acuario).pokemon);
	free(acuario);
}

void liberar_arrecife(arrecife_t* arrecife){

	free((*arrecife).pokemon);
	free(arrecife);
}