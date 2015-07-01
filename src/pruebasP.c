#include <stdio.h>

#define STDOUT 1
#define SIZE 256



int main (int argc, char **argv[]) 
{
	printf("El número de argumentos es %d\n",argc);

	int i;
	int *ptr;
	i = 125;
	ptr = &i;

	printf("La dirección de i es: %p\n", &i);
	printf("La dirección del puntero es %p\n", &ptr);
	printf("La dirección donde apunta el puntero es %p\n",ptr);

	printf("\n\n");

	printf("El valor de i es %d\n",i);
	printf("El valor donde apunta ptr es %d\n",*ptr);

	printf("El valor en bytes de un entero es %d bits.\n", 8*sizeof(i));

	printf("Hacemos ptr++\n");
	ptr++;
	printf("Ahora la dirección donde apunta ptr es: %p\n\n",ptr);
}
