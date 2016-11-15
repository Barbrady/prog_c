#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#define SIZE 99

int main()  {

	LIST* l;
    	int v[SIZE];
	l = _init_LIST_();
	for(int i=0; i<100; i++)  {
		v[i] = i;
        insert(l,v+i);
	}
    
	printf("La longitud de la lista es: %d\n",sizeList(l->h));
	/*while(l->h->next!=NULL)  {
        int *p = getValue(l->h);
        printf("%d ",*p);
		l->h = l->h->next;
	}
	printf("\n");
	*/
	int *f;
	while(l->h->next!=NULL)  {
		
		f = (int*) extract(l);
	//	printf("El número extraido es %d\n",*f);
	}
}
