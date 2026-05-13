#include <stdio.h>

int suma(int a, int b)  {
    return a+b;
}

int main() {
    int a, b,c;
    a=1;
    b=3;
    c=suma(a,b);
    printf("La suma es igual a %d\n",c);
    return 0;
}


