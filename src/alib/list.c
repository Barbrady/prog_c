#include "list.h"
#include <stdio.h>
#include <stdlib.h>



LIST* _init_LIST_() {
	LIST *p;
	p =  (LIST*) malloc(sizeof(LIST));
	int i = -1;
	if(p==NULL)
	{
		return NULL;
	}
	else  {
		p->val=&i;
		p->next=NULL;
	}
	return p;
}

void insert(struct LIST *p, int value)  {
	LIST *s;
	s = (LIST*) malloc(sizeof(struct LIST));
	int *i;
	i  = (int*) malloc(sizeof(int));
	*i = value;
	s->val = i;
	s->next = p->next;
	p->next = s;
}

int sizeList (LIST* p)  {
	if(p->next==NULL)  {
		return 0;
	}
	else  {
		return 1+(sizeList(p->next));
	}
}

