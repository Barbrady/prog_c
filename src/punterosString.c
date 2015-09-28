#include <stdio.h>

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
}
