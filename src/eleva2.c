#include <stdio.h>
#include <stdlib.h>
int eleva(int i)
{
	int r = 2;
	if(i<=0)
	{
		return 1;
	}
	else  {
		for(int c=1; c<i; c++)
		{
			r = r*2;
			printf("En función 2 elevado a %d vale: %d\n",c+1,r);
		}
	}
	return r;
}





int main (int argc, char *argv[])
{
	if(argc > 1)  { 
		int r;
		printf("El argumento es %s.\n",argv[1]);
		int e = atoi(argv[1]);
		printf("El argumento pasado a entero es %d\n",e);
		r=eleva(e);
		printf("Resultado: %d.\n",r);
	}
	else  {
		printf ("Necesita introducir un valor.\n");
	}
}
