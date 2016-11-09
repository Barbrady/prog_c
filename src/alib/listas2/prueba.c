#include <stdio.h>
#include "listas.h"


int main ()  {
	tipo_lista *lista = _iniciar_lista();
	int i;
	int elemento = 10;
	int elemento_dos = 20;
	int *p,*q;
	p=&elemento;
	q=&elemento_dos;
	printf("Los valores de la lista son lista = %p, lista->next = %p y lista->value = %p\n",lista,lista->next,lista->value);
	printf("Insertarmos un valor: %p\n",p);
	insertar_en_lista(lista,p);
	insertar_en_lista(lista,q);
	printf("Los valores de la lista son lista = %p, lista->next = %p y lista->value = %p\n",lista,lista->next,lista->value);

	printf("Los valores punteros de las listas son lista = %p,lista-next = %p y lista-next-next = %p\n",lista,lista->next,lista->next->next);

}
