#pragma once

typedef struct LISTA {
	void *elemento;
	struct LISTA *siguiente;
}LISTA;

LISTA *_iniciar_lista();
int insertar_en_lista(LISTA *l, void* e);
int elementos_en_lista(LISTA *l);
