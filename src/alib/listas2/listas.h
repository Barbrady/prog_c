#pragma once

typedef struct TIPO_LISTA {
	void *elemento;
	struct TIPO_LISTA *siguiente;
}LISTA;

LISTA *_iniciar_lista();
LISTA * insertar_en_lista(LISTA *l, void* e);
int elementos_en_lista(LISTA *l);
void imprimir_lista(LISTA *l);
