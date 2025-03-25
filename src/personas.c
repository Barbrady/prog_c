#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


typedef struct personas {
  int edad;
  int altura;
  float peso;
  char* nombre;

}personas;

int imprimir_persona(personas* persona)  {
  printf("La edad de %s es %d, mide %d y pesa %5.2f\n",persona->nombre, persona->edad, persona->altura, persona->peso);
  return 0;
}

int set_persona(personas* persona, int edad, int altura, float peso, char* nombre)  {
  persona->edad=edad;
  persona->altura=altura;
  persona->peso=peso;
  persona->nombre=nombre;
  return 0;
}

int main (int argc, char *argv[])  {
  printf("El numero de argumentos es %d y el primero es %s\n",argc, argv[1]);
  personas* persona = malloc(sizeof(personas));
  set_persona(persona, 44, 176, 85.5, "Aitor");
  imprimir_persona(persona);
  printf("El tamnio del tipo personas es %lu\n",sizeof(personas));
  
  int fd;
  if((fd = open(argv[1], O_RDWR)) == -1)  {
    perror("open");
    exit(-1);
  }
  
  printf("El fichero abierto tiene como descriptor %d\n",fd);
  close(fd);


}
