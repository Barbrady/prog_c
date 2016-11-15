#include <stdio.h>
#include "palabras.h"


int longitud_palabra(char* palabra)  {
	int i = sizeof(char);
	char* puntero = palabra;
	while(*puntero)  {
		puntero++;
	}
	return (puntero-palabra)/i;
}

int letras_iguales(char letra1, char letra2)  {
	if(letra1 == letra2)  {
	       	return 1;
	}
	else  {
		return 0;
	}
}
