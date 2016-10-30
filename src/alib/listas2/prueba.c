#include <stdio.h>
#include "listas.h"


int main ()  {
	tipo_lista *lista = _iniciar_lista();
	int i;
	int elemento = 10;
	int elemento2 = 23;
	i = insertar_en_lista(lista, &elemento);
	i = insertar_en_lista(lista, &elemento2);
	printf("El tamaño de la lista es: %d.\n",obtener_tamanio_lista(lista));

}
