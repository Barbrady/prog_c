import "list.h"
import <stdio.h>

struct LIST * list;


void _init_LIST_() {
    struct LIST *l = (LIST*) malloc (sizeof(struct LIST));
    l->h=NULL;
    l->t=NULL;

    list = l;
   
}

void insert(void *element)  {
    struct node *p = (node*) malloc (sizeof(struct node));
    p->val = element;

    list->h = p;
    
}


    

    
