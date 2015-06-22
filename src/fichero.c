#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main ( int arch, char *argv[])
{
	int fd;

	if ( (fd = open(argv[1], O_RDWR )) == -1)
	{
		perror("open");
		//exit(-1);
	}

	printf("El fichero abierto tiene un descriptor de %d.\n",fd);
	close(fd);
	
	printf("El fichero de ejecución es:%s.\n",argv[0]);
	return 0;
}
