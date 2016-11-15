#include <stdio.h>
#include "list.h"

int main ()  {
	LIST *lista;
	lista = _init_LIST_();
	int *p;
        int i=3;
	p=&i;	
	insert(lista,p);

}
