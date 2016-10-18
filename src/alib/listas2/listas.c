/*
 * =====================================================================================
 *
 *       Filename:  listas.c
 *
 *    Description:  Implementacion del tipo lista
 *
 *        Version:  1.0
 *        Created:  14/09/16 15:53:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aitor Alkorta (), oficial.barbrady@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "listas.h"
#include <stdio.h>
#include <stdlib.h>


tipo_lista *_iniciar_lista() {
	tipo_lista *lista=NULL;
	return lista;
}

int insertar_en_lista(tipo_lista *lista, void *elemento)  {
	tipo_lista *nodo_nuevo;
	nodo_nuevo = (tipo_lista*) malloc(sizeof(tipo_lista));
	(*nodo_nuevo)->value = elemento;

	if(lista==NULL)  {
		lista=nodo_nuevo;
	}
	else{
		(*nodo_nuevo)->next = (*lista)->next;
		(*lista)->next = &nodo_nuevo;
	}

	}
}
