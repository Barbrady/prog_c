#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main()  {
	LIST* p;
	p = _init_LIST_();
	for(int i=1; i<100; i++)  {
		insert(p,i);
	}

	printf("La longitud de la lista es: %d\n",sizeList(p));

	while(p!=NULL)  {
		printf("%d ",*(p->val));
		p = p->next;
	}
	printf("\n");
}
