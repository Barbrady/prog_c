#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ()  {
	int pid;

	printf("Vamos a probar el creado de procesos con fork.\n");

	pid = fork();

	if(pid<0)  {
		printf("Error en la creación del fork.\n");
	}
	if(pid==0) {  
		printf("Este es el proceso hijo con pid=%d\n",pid);
		printf("Y esto arroja su getipd() = %d\n",getpid());
		//execl("/home/barbrady/bin/npid","npid",NULL);
		exit(1);
	}
	printf("Este es el proceso padre donde pid=%d.\n",pid);
	printf("Y esto arroja su getipd() = %d\n",getpid());
	
	

}
