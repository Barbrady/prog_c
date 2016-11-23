#include <stdio.h>
#include "palabras.h"

int comprobar_palindromo(char* palabra)  {
	char* primera_letra;
	char* ultima_letra;
	int p;
	p=longitud_palabra(palabra);
	ultima_letra = palabra+p-1;
	primera_letra = palabra;
	while(primera_letra<ultima_letra)  {
		if(letras_iguales(*primera_letra,*ultima_letra) == 0)  {
			return 0;
		}
		primera_letra++;
		ultima_letra--;
	}
	return 1;
}

int main (int argc, char* argv[])  {
	TIPO_PALABRA palabra = argv[1];
	TIPO_PALABRA frase = "Hola Que Tal.";
	int p;
	if(argc<2)  {
		printf("Introduzca al menos una palabra.\n");
		return -1;
	}
 	p=comprobar_palindromo(palabra);
	if(p!=0)  {
		printf("La palabra %s es un palíndromo\n",palabra);
	}
	else  {
		printf("No es palíndromo.\n");
	}
	frase=eliminar_espacios(frase);
	printf("Hola Que Tal es igual a %s\n",frase);

		


}



