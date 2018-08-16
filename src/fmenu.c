#include "fmenu.h"
#include <stdio.h>

int imprimir_menu (int n_argumentos, char* s_argumentos[])  {
	int i;
	for (i=1; i<n_argumentos; i++)  {
		printf("%s.\n",s_argumentos[i]);
	}
	return 1;
}

int main (int argc, char *argv[])   {
	imprimir_menu(argc, argv);
	return 0;
}
