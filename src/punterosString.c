#include <stdio.h>

int longitud_cadena(char *cadena)  {
	int i=0;
	while (*cadena != '\0')  {
		i++;
		cadena++;
	}
	return i;
}


int main (int argc, char* argv[])
{
	char *p;
	char string[10];
	string[0]='C';
	string[1]='a';
	string[2]='s';
	string[3]='a';
	p = string;
	//*p = string[0];
	printf("El puntero apunta a %s.\n",p);
	if(argc>1)
	{
		p = argv[1];
		printf("El puntero apunta a %s.\n",p);
	}

	for(int i=0; i<4; i++)  
	{
		printf("%c",*p);
		p++;
	}
	printf("\n");
	printf("%d",*p);
	printf("\n");
	p++;
	printf("%d",*p);
	printf("\n");
	printf("La dirección de string es %p\n",string);
	printf("Y el puntero apunta actualmente a %p\n",p);
	printf("La diferencia en bytes es de %d\n",p-string);
}
