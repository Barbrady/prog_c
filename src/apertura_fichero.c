#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h> 
int main (int argn, char* argv[]) {
    int fd;
    if(argn<2)  {
        printf("Error, se há de introducir un ficher para su apertura\n");
        return -1;
    }

    printf("El número de argumentos es %d, y el primer argumento %s y el segundo es %s\n",argn, argv[0], argv[1]);
    if((fd=open(argv[1], O_WRONLY)) == -1)  {
        printf("Error al abrir el archivo.\n");
        return -1;
    }
    close(fd);

    return 0;
}
