#include <stdio.h>

#define RATIO "/sys/class/net/eth0/statistics/rx_bytes"
#define PRUEBA "./prueba.txt"

int obtener_ratio(char *FICHERO)  {
	int valor;
	char lectura[9];
	FILE *fp;
      	    if((fp = fopen(FICHERO, "r")) == NULL)  {
	        printf("Error en la lectura.\n");
	    	return -1;	
	    }
	    else {
		fgets(lectura,8,fp);
		//printf("El descriptor del fichero %s es %d\n",FICHERO,fp);
		fclose(fp);
		valor = atoi(lectura);
	    }
	return valor;
}


int main()  {
	int valor_viejo, valor_nuevo, valor;
	valor_viejo = obtener_ratio(RATIO);
	for(;;sleep(1))  {
		valor_nuevo = obtener_ratio(RATIO);
		valor = valor_nuevo - valor_viejo;
		printf("El valor leido es %d Kbps\n",valor);
		valor_viejo = valor_nuevo;
	}
}
