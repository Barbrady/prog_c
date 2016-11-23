#include <stdio.h>
#include <stdlib.h>
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

char *eliminar_espacios(char* texto)  {
	char* auxiliar,*reserva;
	auxiliar = (char*) malloc(sizeof(char)) ;
	reserva = auxiliar;
	char c = *texto;
	while(c != '\0')  {
		if(c != ' ')  {
			*auxiliar = c;
			auxiliar++;
		}
		texto++;
		c = *texto;
	}
	texto = reserva;
	return reserva;
}
