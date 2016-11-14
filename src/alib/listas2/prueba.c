#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main ()  {
	LISTA *l;
	
	l=_iniciar_lista();
	system("ls");

	printf("----------Se procede a insertar elementos en lista------------\n\n\n");

	for (int i=0;i<250;i++)  {
		int* p = (int*) malloc(sizeof(int));
		*p=i+1;
		l=insertar_en_lista(l,p);
	}
	printf("El numero de elemntos de la lista es %d\n",elementos_en_lista(l));
	
	
	
	imprimir_lista(l);

}

	
