#include "animos.h"
const int MAX_ANIMO_REGULAR = 35;
const int MIN_ANIMO_REGULAR = 21;
const int MAX_ANIMO_MALO = 20;
const int MIN_ANIMO_MALO = 5;
const int MIN_HORAS_REGULARES = 5;
const int MAX_HORAS_REGULARES = 8;
const int MIN_HORAS_MALAS = 0;
const int MAX_HORAS_MALAS = 4;
const int VEINTE_PUNTOS = 20;
const int QUINCE_PUNTOS = 15;
const int DIEZ_PUNTOS = 10;
const int CINCO_PUNTOS = 5;
const int ZERO_PUNTOS = 0;
const char ANIMO_BUENO = 'B';
const char ANIMO_REGULAR = 'R';
const char ANIMO_MALO = 'M';
const int HUMEDAD_50 = 50;
const int HUMEDAD_25 = 25;
const int HUMEDAD_75 = 75;
const int VIENTO_25KMH = 25;
const int VIENTO_50KMH = 50 ;
const int VIENTO_75KMH = 75;
const int DIA_MIN_25 = 21;
const int DIA_MIN_50 = 11;
const int DIA_MAX_50 = 20;
const int DIA_MAX_75 = 10;
const int MAXIMO_HORAS = 12;
const int MINIMO_HORAS = 0;
const char GUISO = 'G';
const char PIZZA = 'P';
const char HAMBURGUESA = 'H';
const char ENSALADA = 'E';
const char PIE_IZQUIERDO = 'I';
const char PIE_DERECHO = 'D';
const char MANIANA = 'M';
const char TARDE = 'T';
const char NOCHE = 'N';
const int MINIMO_DIA = 1;
const int MAXIMO_DIA = 30;



/*
	*Precondiciones: puntos_animo este entre 0 y 50
	*Postcondiciones: devolver animo malo si tiene entre 5 y 20 puntos, animo regular entre 21 y 35 y animo bueno si mas de 36 puntos
*/
char definir_animo(int puntos_animo){
	if((puntos_animo <= MAX_ANIMO_MALO) && (puntos_animo >= MIN_ANIMO_MALO)){
		return (ANIMO_MALO);
	}
	else if((puntos_animo <= MAX_ANIMO_REGULAR) && (puntos_animo >= MIN_ANIMO_REGULAR)){
		return(ANIMO_REGULAR);
	}
	else{
		return(ANIMO_BUENO);
	}
}

/*
	*Precondiciones: horas_dormidas este en el rango de 1 a 12
	*Postcondiciones: devolver 0 puntos si durmio entre 0 y 4 horas, 10 puntos entre 5 y 8 horas y 20 puntos si mas que 8
*/
int puntos_horas_dormidas(int horas_dormidas){
	if((horas_dormidas <= MAX_HORAS_MALAS) && (horas_dormidas >= MIN_HORAS_MALAS)){
		return ZERO_PUNTOS;
	}
	else if((horas_dormidas <= MAX_HORAS_REGULARES) && (horas_dormidas >= MIN_HORAS_REGULARES)){
		return DIEZ_PUNTOS;
	}
	else{
		return VEINTE_PUNTOS;
	}
}

/*
	*Precondiciones: cena sea una comida valida (ensalada, hamburguesa, pizza, guiso)
	*Postcondiciones: devolver 5 puntos si comio guiso, 10 pizza, 15 hamburguesa y 20 ensalada
*/
int puntos_cena(char cena){
	if(cena == ENSALADA){
		return VEINTE_PUNTOS;
	}
	else if(cena == HAMBURGUESA){
		return QUINCE_PUNTOS; 
	}
	else if(cena == PIZZA){
		return DIEZ_PUNTOS;
	}
	else{
		return CINCO_PUNTOS;
	}
}

/*
	*Precondiciones: pie_levantado sea derecho o izquierdo
	*Postcondiciones: devolver diez puntos si es derecho, si es izquierdo 0
*/
int puntos_pie(char pie_levantado){
	if(pie_levantado == PIE_DERECHO){
		return DIEZ_PUNTOS;
	}
	else{
		return ZERO_PUNTOS;
	}
}

/*
	*Precondiciones: valor de pie_levantado sea derecho o izquierdo, valor de cena sea ensalada, hamburguesa, pizza o guiso y horas_dormidas este en el rango de 0 a 12
	*Postcondiciones: sumar puntos dependiendo del valor de cada variable y definir si animo es bueno, malo o regular
*/
void determinar_animo(char pie_levantado, char cena, int horas_dormidas, char* animo){
	int puntos_animo = puntos_pie(pie_levantado) + puntos_cena(cena) + puntos_horas_dormidas(horas_dormidas);

	*animo = definir_animo(puntos_animo);
}

/*
	*Precondiciones: hora_del_dia sea un character valido
	*Postcondiciones: asignarle 75, 50 o 25 a la humedad
*/
void determinar_humedad(int hora_del_dia, int* humedad){
	if(hora_del_dia == MANIANA){
		*humedad = HUMEDAD_75;
	}
	else if(hora_del_dia == TARDE){
		*humedad = HUMEDAD_25;
	}
	else if(hora_del_dia == NOCHE){
		*humedad = HUMEDAD_50;
	}
}

/*
	*Precondiciones: dia_mes esta en el rango de 1 a 30
	*Postcondiciones: asignarle 75, 50 o 25  a la velocidad del viento
*/
void determinar_viento(int dia_mes, int* viento){
	if((dia_mes <= DIA_MAX_75) && (dia_mes >= MINIMO_DIA)){
		*viento = VIENTO_75KMH;
	}
	else if((dia_mes <= DIA_MAX_50) && (dia_mes >= DIA_MIN_50)){
		*viento = VIENTO_50KMH;
	}
	else if((dia_mes <= MAXIMO_DIA) && (dia_mes >= DIA_MIN_25)){
		*viento = VIENTO_25KMH;
	}
}

/*
	*Precondiciones: (no tiene)
	*Postcondiciones: devolver true si horas_dormidas esta entre 0 y 12, sino false
*/  
bool horas_suenio_en_rango(int horas_dormidas){
	return((horas_dormidas >= MINIMO_HORAS) && (horas_dormidas <= MAXIMO_HORAS));
}

/*
	*Precondiciones: (no tiene)
	*Postcondiciones: devolver true si dia_mes esta entre 1 y 30, sino false
*/
bool dia_esta_en_rango(int dia_mes){
return((dia_mes <= MAXIMO_DIA) && (dia_mes >= MINIMO_DIA));
}

/*
	*Precondiciones: (no tiene)
	*Postcondiciones: devolver true si hora_del_dia es maniana, tarde o noche, sino false
*/
bool hora_valida(char hora_del_dia){
	return((hora_del_dia == MANIANA) || (hora_del_dia == TARDE) || (hora_del_dia == NOCHE));
}

/*
	*Precondiciones: (no tiene)
	*Postcondiciones: devolver true si pie_levantado es derecho o izquierdo, sino false
*/
bool pie_valido(char pie_levantado){
	return((pie_levantado == PIE_DERECHO) || (pie_levantado == PIE_IZQUIERDO));
}

/*
	*Precondiciones: (no tiene)
	*Postcondiciones: devolver true si cena es ensalada, hamburguesa, pizza o guiso, sino false
*/
bool cena_valida(char cena){
	return((cena == ENSALADA) || (cena == HAMBURGUESA) || (cena == PIZZA) || (cena == GUISO));
}

/*
	*Precondiciones: valor horas_dormidas sea ingresado por usuario
	*Postcondiciones: mostrar texto por pantalla si horas_dormidas no es valido y escanear nuevo valor
*/
void verificar_horas_dormidas(int* horas_dormidas){
	while(horas_suenio_en_rango(*horas_dormidas) == false){
		printf("un numero entre %i y %i por favor. \n",MINIMO_HORAS, MAXIMO_HORAS);
		scanf("%i", horas_dormidas);
	}
}

/*
	*Precondiciones: valor cena sea ingresado por usuario
	*Postcondiciones: mostrar texto por pantalla si cena no es valida y escanear nuevo valor
*/
void verificar_cena(char* cena){
	while(cena_valida(*cena) == false){
		printf("ingrese %c, %c, %c o %c. \n", ENSALADA, HAMBURGUESA, PIZZA, GUISO);
		scanf(" %c", cena);
	}
}

/*
	*Precondiciones: valor pie sea ingresado por usuario
	*Postcondiciones: mostrar texto por pantalla si pie no es valido y escanear nuevo valor
*/
void verificar_pie(char* pie){
	while(pie_valido(*pie) == false){
		printf("ingrese %c o %c (derecho o izquierdo). \n", PIE_DERECHO, PIE_IZQUIERDO);
		scanf(" %c", pie);
	}
}

/*
	*Precondiciones: valor hora_del_dia sea ingresado por usuario
	*Postcondiciones:mostrar texto por pantalla si hora_del_dia no es valida y escanear nuevo valor
*/
void verificar_hora(char* hora_del_dia){
	while(hora_valida(*hora_del_dia) == false){
		printf("ingrese %c, %c o %c. \n", MANIANA, TARDE, NOCHE);
		scanf(" %c", hora_del_dia);
	}
}

/*
	*Precondiciones: valor dia_mes sea ingresado por usuario
	*Postcondiciones: mostrar texto por pantalla si dia_mes no es valido y escanear nuevo valor
*/
void verificar_dia(int* dia_mes){
	while(dia_esta_en_rango(*dia_mes) == false){
		printf("Un numero entre %i y %i, por favor. \n", MINIMO_DIA, MAXIMO_DIA);
		scanf("%i", dia_mes);
	}
}	



void animos(int* viento, int* humedad, char* animo_legolas, char* animo_gimli){


int dia_mes;
char hora_del_dia;
char pie_legolas;
char cena_legolas;
int horas_dormidas_legolas;
char pie_gimli;
char cena_gimli;
int horas_dormidas_gimli;

	printf("Que dia del mes es hoy? (entre %i y %i, inclusive) \n", MINIMO_DIA, MAXIMO_DIA);
	scanf("%i", &dia_mes);
	
	verificar_dia(&dia_mes);
	
	printf("Es la maniana, tarde o noche? (ingresar M, T o N) \n");
	scanf(" %c", &hora_del_dia);

	verificar_hora(&hora_del_dia);
	
	printf("Con que pie se levantó Legolas? (ingresar D o I) \n");
	scanf(" %c", &pie_legolas);

 	verificar_pie(&pie_legolas);

	printf("Legolas comió ensalada, hamburguesa, pizza o guiso la noche anterior? (ingresar E, H, P o G). \n");
	scanf(" %c", &cena_legolas);

	verificar_cena(&cena_legolas);

	printf("Cuantas horas durmió Legolas? (entre %i y %i, inclusive). \n", MINIMO_HORAS, MAXIMO_HORAS);
	scanf("%i", &horas_dormidas_legolas);
    
    verificar_horas_dormidas(&horas_dormidas_legolas);

	printf("Con que pie se levantó Gimli? (ingresar D o I) \n");
	scanf(" %c", &pie_gimli);

	verificar_pie(&pie_gimli);
	
	printf("Gimli comió ensalada, hamburguesa, pizza o guiso la noche anterior? (ingresar E, H P o G). \n");
	scanf(" %c", &cena_gimli);

	verificar_cena(&cena_gimli);
	
	printf("Cuantas horas durmió gimli? (entre %i y %i, inclusive). \n", MINIMO_HORAS, MAXIMO_HORAS);
	scanf("%i", &horas_dormidas_gimli);

	verificar_horas_dormidas(&horas_dormidas_gimli);
	
	determinar_viento(dia_mes, viento);
	determinar_humedad(hora_del_dia, humedad);
	determinar_animo(pie_legolas, cena_legolas, horas_dormidas_legolas, animo_legolas);
	determinar_animo(pie_gimli, cena_gimli, horas_dormidas_gimli, animo_gimli);

}
