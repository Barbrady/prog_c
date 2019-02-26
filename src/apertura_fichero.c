#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h> 

#define SIZE 512
#define STDOUT 1

int main (int argn, char* argv[]) {
    int fd;
    int readbytes;
    char buffer[SIZE];
    if(argn<2)  {
        printf("Error, se há de introducir un ficher para su apertura\n");
        return -1;
    }

    printf("El número de argumentos es %d, y el primer argumento %s y el segundo es %s\n",argn, argv[0], argv[1]);
    if((fd=open(argv[1], O_RDWR)) == -1)  {
        printf("Error al abrir el archivo.\n");
        return -1;
    }
    /* printf("Esta es la linea anterior al while\n"); */ 
    while((readbytes=read(fd,buffer,SIZE))!=0)  {
	    write(STDOUT,buffer,readbytes);
    }
    
    close(fd);

    return 0;
}
