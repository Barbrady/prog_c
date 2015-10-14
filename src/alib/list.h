#pragam once

struct node {
    void *val;
    struct node *next;
}

struct LIST {
    struct node * h;
    struct node * t;
}

LIST *_init_LIST_ ();
void insert(void *element);

