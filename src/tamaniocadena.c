#include <stdio.h>

int getLength(char *string)
{
	char * string2 = string;
	while(*string2 != '\0')
	{
		string2++;
	}

	return string2 - string;
}

int main (int argc, char *argv[])
{
	int i = getLength(argv[1]);
	printf("La cadena tiene %d caracteres.\n",i);
}
