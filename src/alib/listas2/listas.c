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
	tipo_lista *p;
	p = (tipo_lista*) malloc(sizeof(tipo_lista));
	if(p==NULL)  {
		printf("No hay memoria disponible en el sistema.\n");
	}
	else  {
		//p->value = NULL;
		p->next = NULL;
	}
	return p;

}

int insertar_en_lista(tipo_lista *lista, void *elemento)  {
	tipo_lista *nueva_lista;
	nueva_lista = (tipo_lista*) malloc(sizeof(tipo_lista));
	nueva_lista->value = elemento;

	if(lista==NULL)  {
		lista=nueva_lista;
	}
	else{
		nueva_lista->next = lista->next;
		lista->next = nueva_lista;
	}
	return 0;
}
int obtener_tamanio_lista(tipo_lista *lista)  {
	if(lista->next==NULL) return 0;
	else  {
		return 1+(obtener_tamanio_lista(lista->next));
	}
}




