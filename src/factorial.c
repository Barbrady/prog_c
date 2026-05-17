#include <stdio.h>
#include <stdlib.h>

int factorial(int numero)  {
    int auxiliar = 1;
    while (numero > 1) {
        auxiliar = auxiliar*numero;
        numero --;
        }
    return auxiliar;
}

int main ()  {
    printf( "Vamos a calcular el factorial de un número entre 1 y 100\n");

    int *numero;
    numero = (int*) malloc(sizeof(int));

    printf("Introduce un número: \n");
    scanf("%d",numero);


    if(*numero >= 1 && *numero <= 100)  {
        printf("El factorial de %d es %d\n", *numero, factorial(*numero));
    }
    else  {
        printf("El número no está entre 1 y 100\n");

        }

   }
