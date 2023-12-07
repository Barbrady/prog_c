#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])  {
  double* puntero;
  puntero = malloc(32);
  //*puntero = 12;
  printf("El valor de sizeof del puntero es %d\n",sizeof(*puntero));
  printf("El puntero apunta a %d y tiene una direccion de memoria de %p\n y admas la direccion de memoria del puntero es: %p\n", *puntero, puntero,&puntero);
  printf("Ahora ejecutmos el bucle for:\n");
    for (int i=0; i<10; i++)  {
    printf("El puntero apunta a %d y tiene una direccion de memoria de %p\n", *puntero, puntero);
    puntero = puntero++;
    }
}

