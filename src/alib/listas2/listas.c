#include <stdio.h>
#include "listas.h"

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

int insertar_en_lista(LISTA *l, void* e)  {
	if(l->elemento==NULL)  {
		l->elemento = e;
		return 0;
	}
	else  {
		LISTA* nuevo_nodo;
		nuevo_nodo = _iniciar_lista();
		nuevo_nodo->elemento = e;
		nuevo_nodo->siguiente = l;
		l= nuevo_nodo;
	}
	return 0;
}

int elementos_en_lista(LISTA* l)  {
	if(l->siguiente == NULL) {
		return 0;
	}
	else  {
		return 1+elementos_en_lista(l->siguiente);
	}
}
