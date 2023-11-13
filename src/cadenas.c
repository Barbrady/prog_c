#include <stdio.h>

int longitud (char *cadena) {
  int i = 0;
  while (*cadena != '\0')  {
    i++;
    cadena++;
  }
  return i;
}
int imprimir_cadena(char *cadena)  {
  while(*cadena != '\0')  {
    printf("%c",*cadena);
    cadena++;
  }
  printf("\n");
  return 0;
}

int main (int argc, char *argv[])  {
  if (argc > 1)  {
    printf("El numero de argumentos es %d\n",argc);
    printf("Y la longitud del primer argumento es %d\n", longitud(argv[1]));
    imprimir_cadena(argv[1]);
  }
  else  {
    printf("El numero de argumetos es incorrecto, pruebe $HOME/binario argumento1 argumento1\n");
  }
}
