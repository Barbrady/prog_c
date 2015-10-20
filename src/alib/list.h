#pragma once

typedef struct node  {
    void *val;
    struct node *next;
}node;

typedef struct LIST {
    int* val;
    struct LIST* next;
}LIST;

LIST *_init_LIST_ ();
void insert(struct LIST *p, int element);
int sizeList(LIST* p);
