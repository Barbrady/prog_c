#include "list.h"
#include <stdio.h>
#include <stdlib.h>



LIST* _init_LIST_() {
	LIST *p;
	p =  (LIST*) malloc(sizeof(LIST));
	//int i = -1;
	if(p==NULL)
	{
	    printf("No hay memoria suficiente en el sistema.\n");
        return NULL;
	}
	else  {
		p->h=NULL;
		p->t=NULL;
	}
	return p;
}

void insert(LIST *p, void *element)  {
	struct node *n;
    n = (struct node*) malloc(sizeof(struct node));
    if(p->h == NULL)  {
        p->h = p->t = n;
        p->h->val = p->t->val = element;
    }
    else  {
        p->t->next = n;
        n->val = element;
        p->t = n;
    }
}


int sizeList (struct node* n)  {
	if(n->next==NULL)  {
		return 0;
	}
	else  {
		return 1+(sizeList(n->next));
	}
}

void *getValue(struct node *n)  {
    return n->val;
}

void *extract(LIST *p)  {
	if (p->h==NULL)  {
		printf("Lista vacía.\n");
		return NULL;
	}
	else  {
		if(p->h==p->t)  {
			return p->h->val;
			p->h=p->t=NULL;
		}
		else  {
			void *l;
			struct node *s;
			s=p->h;
			l=p->h->val;
			p->h = p->h->next;
			free(s);
			return l;
		}
	}
}

