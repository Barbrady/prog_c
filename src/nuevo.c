#include <SDL2/SDL.h>
#include <stdio.h>
#include "./alib/list.h"

int main ()  {
	LIST *lista = _init_LIST_();
	int j;
	for(int i=0; i<10; i++)  {
		j = i;
		insert(lista,&j);
	}

	printf("El numero de elmentos de la lista es:%d\n\n",sizeList(lista->h));
}

