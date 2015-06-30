#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#define SIZE 512
#define STDOUT 1
int main (int argc, char *argv[]) 
{
    printf("El número de argumentos pasados al main es: %d\n",argc);

    int fd;
    char *buffer[SIZE];
    if( (fd = open(argv[1],O_RDWR)) == -1)  
    {
        perror("open");
        exit(-1);
    }
    printf("El descriptor del fichero %s es %d\n",argv[1],fd);
    int readbytes = read(fd,buffer,SIZE);
    printf("Se han leido %d bytes, en lugar de %d bytes.\n",readbytes,SIZE);
    char *puntero = "hola\n";
    for(int i=0; i<10; i++)  {

        write(fd,puntero,5);
    }
    close(fd);
    return 0;
}
