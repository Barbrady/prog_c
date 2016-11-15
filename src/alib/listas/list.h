#pragma once

struct node  {
    void *val;
    struct node *next;
};

typedef struct LIST {
    struct node * h;
    struct node * t;
}LIST;

LIST *_init_LIST_ ();
void insert(LIST *p, void *element);
int sizeList(struct node *n);
void *getValue(struct node *n);
void *extract(LIST *p);
