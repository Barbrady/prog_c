#include <stdio.h>

int longCadena (char* s)  {
	char* p = s;
	while(*p!='\0') {
		p++;
	}
	//	printf("La longitud de la cadena es %d\n",p-s);
	return p-s;
}

long long eleva(int base, int exponente)
{
	long long retorno = (long long) base;
	if(exponente<=0)  {
		return 1;
	}
	else  {
		for(int i=1; i<exponente; i++)  {
			retorno = retorno*base;
		}
		return retorno;
	}
}

int stringEntero (char* s)
{
	int l = longCadena(s);
	int r,f;
	r=0; 
	f=eleva(10,l-1);
	//	printf("El valor factor es %d\n",f);

	for(int i=0; i<l; i++)  {
		if(s[i]<48 || s[i]>57)  {
			printf("Error en el exponente.\n\n");
			return -1;
		}
		//	printf("El r inicial es %d\n",r);
		//	printf("El caracter es %c\n",s[i]);
		r =r+(f*(s[i] - 48));
		//	printf("El r intermedio es %d\n",r);
		f=f/10;
	}
	return r;
}

int main (int argc, char* argv[])  {
	long long resultado;
	if(argc!=2)  {
		printf("El número de argumentos pasados es incorrecto.\n");
	}
	else{
		//printf("Argumentos: %d\n",argc);
		long long n;
		n = (long long) stringEntero(argv[1]);
		//printf ("El exponente es %llu \n",n);
		//printf("El resultado de elevar 2 a la %d potencia es: %llu\n",n,eleva(2,n));
		resultado = eleva(2,(int)n);
		printf("%llu\n",resultado);
	}
}
 

