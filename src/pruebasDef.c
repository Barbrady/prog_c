#include <stdio.h>
#define SIZE 512
int main(int argc,char **argv)  
{
	printf("El numero de argumentos es %d\n",argc);
	printf("El primer argumento es %s\n",argv[0]);
	static char palabra[25] = "Hola, buenas tardes\n";
	char *string;

	string = &palabra[0];

	printf("%s",string);
	
	#ifdef DEBUG
		printf("Debbuger activado\n");
	#endif
}
