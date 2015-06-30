#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main (int argc, char *argcv[])  
{
    printf("El programa se llama %s\n",argcv[0]);
    int fd;
    char *buffer = "Hola\n";
    char *fichero = "prueba.txt";

    buffer = "Adios\n";
    printf("El buffer tiene : %s",buffer);

    if((fd = open(fichero,O_RDWR)) == -1)
    {
        printf("Error al abrir el fichero %s\n",fichero);
    }
    else  {
        int readbytes = strlen(buffer);
        write(fd,buffer,readbytes);
        close(fd);
    }

    printf("La dirección para \"192.168.1.1\" en unsing long es: %lu\n",inet_addr("255.255.255.255"));
}
