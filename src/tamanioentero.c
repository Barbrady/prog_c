#include <stdio.h>

void swap (int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}



int main()
{
    int i = sizeof(int);
    int c = sizeof(char);
    int a,b;
    a=10;
    b=20;

    printf("El tamaño de un char es %d.\n",c);
    printf("El tamaÃo de un entero es %d.\n",i);

    swap(&a,&b);
    printf("La variable a era 10 y b era 20, ahora a es %d y b es %d.\n",a,b);
}
