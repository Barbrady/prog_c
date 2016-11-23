/*
 * =====================================================================================
 *
 *       Filename:  get_net_rate.c
 *
 *    Description:  Obtiene la tasa de KBytes transmitidos por segundo desde el dispositivo ethernet
 *
 *        Version:  1.0
 *        Created:  09/11/16 11:26:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aitor Alkorta (), oficial.barbrady@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define dispositivo "/sys/class/net/enp10s0/statistics/rx_bytes"

long int get_rate() {
	FILE *fo;
	long int valor;
	char cadena[12];
	if((fo = fopen(dispositivo, "r")) == NULL) {
		printf("Error, no se ha podido abrir fichero.\n");
		return -1;
	}
	fgets(cadena,12,fo);
	fclose(fo);
	valor = atoi(cadena);
	return valor;
}


	
int main()  {
	printf("El valor en bytes es %d\n",get_rate());
}
