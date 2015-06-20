#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/io.h>
#include <string.h>
#define size 512 	

int main(int argc, char *argv[])  
{
	char buffer[size];
	int i = argc;
	printf("El número de parámetros es: %d",i);
	printf("\n");

	printf("El primer argumento de las cadenas es: %s\n",argv[0]);
	printf("El segudno argumento, en caso de existir, es: %s\n",argv[1]);
	printf("\n");


	int fd = open(argv[1],O_RDWR);
	if(fd == -1)  {
		printf("Error en la apertura del archivo %s\n",argv[1]);
		exit(-1);
	}
	else{
	printf("El archivo %s, tiene como descriptor: %d\n",argv[1],fd);
	
	
	int readbytes = read(fd,buffer,size);
	write(1,buffer,readbytes);
	
	int tFile = strlen (buffer);
	printf("El tamaño del array es: %d",tFile);


	close(fd);
	printf("\n\n");
	}
}

