#include <stdio.h>

int elevado(int base, int expo)  {
	int numero = 1;
	for(int k=0; k<expo; k++)  {
		numero  = numero*base;
	}
	return numero;
}


int main()  {
	int i = 0;
	printf("Introduzca el numero:");
	scanf("%d",&i);
	//int i=50;
	int x = 0;
	x = elevado(i,3);
	
	printf("El numero es:%d\n",x);
}
