#include <stdio.h>
#include "listas.h"

int main ()  {
	LISTA *l;
	int *e1,*e2,*e3;
	int a,b,c;
	
	l=_iniciar_lista();
	printf("La lista inicial tiene como puntero %p\n",l);

	a=10;
	b=20;
	c=30;
	e1 = &a;
	e2 = &b;
	e3 = &c;
	
	printf("----------Se procede a insertar elementos en lista------------\n\n\n");
	
	printf("Se inserta el primer elemento:\n");
	l=insertar_en_lista(l,e1);
	printf("La lista inicial tiene como puntero %p\n",l);
//	printf("Direccion de lista %p, de lista->siguiente %p y el valor del elemento %d.\n\n",l,l->siguiente,*(int*)l->elemento);

	printf("Se inserta el segundo elemento:\n");
	l=insertar_en_lista(l,e2);
	printf("La lista inicial tiene como puntero %p\n",l);
//	printf("Direccion de lista %p, de lista->siguiente %p y el valor del elemento %d.\n\n",l,l->siguiente,*(int*)l->elemento);

	printf("Se inserta el tercer elemento:\n");
	l=insertar_en_lista(l,e3);
	printf("La lista inicial tiene como puntero %p\n",l);
//	printf("Direccion de lista %p, de lista->siguiente %p y el valor del elemento %d.\n\n",l,l->siguiente,*(int*)l->elemento);
	
	printf("El numero de elemntos de la lista es %d\n",elementos_en_lista(l));
}
	
