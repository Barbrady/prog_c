#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int lista_vacia(LISTA* l)  {
	if(l == NULL || (l->elemento==NULL && l->siguiente==NULL))  {
		return 1;
	}
	else {
		return 0;
	}
}

LISTA* _iniciar_lista()  {
	LISTA *l;
	l = (LISTA*) malloc(sizeof(LISTA));
	if(l==NULL)  {
		printf("Error, no se ha podido reservar memoria.\n");
		return NULL;
	}
	else  {
		//printf("Lista creada con dirección %p\n",l);
		l->elemento=NULL;
		l->siguiente=NULL;
	}
	return l;
}

LISTA* insertar_en_lista(LISTA *l, void* e)  {
	if(l->elemento==NULL)  {
		l->elemento = e;
		return l;
	}
	else  {
		LISTA* nuevo_nodo;
		nuevo_nodo = _iniciar_lista();
		nuevo_nodo->elemento = e;
		nuevo_nodo->siguiente = l;
		l = nuevo_nodo;
		return l;
	}
}

int elementos_en_lista(LISTA* l)  {
	if(lista_vacia(l)) {
		return 0;
	}
	else  {
		return 1+elementos_en_lista(l->siguiente);
	}
}

void imprimir_lista(LISTA *l)  {
	LISTA* lista_auxiliar = l;
	int i=1;
	while(!lista_vacia(lista_auxiliar))  {
		printf("Elemento %d es igual a %d\n",i,*((int*)lista_auxiliar->elemento));
		i++;
		lista_auxiliar = lista_auxiliar->siguiente;
	}
}
