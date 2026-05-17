#include <stdio.h>
int sacaporpantalla( char **argv, int i)  {
    int contador=1;
    while(contador<i)  {
        printf("\"%s\" ",argv[contador]);
        contador++;
    }
    printf("\n");
    return 0;
}
int contar_cadena(char *cadena)  {
    char letra;
    int contador = 0;
    letra=cadena[contador];
    while(letra != '\0'){
        contador++;
        letra=cadena[contador];
    }
    return contador;
}

int main (int argc, char *argv[])  {
    printf("El número de argumentos pasados de %d\n", argc);
    if(argc > 1)  {
        printf("Y los argumentos son:  ");
        int d = sacaporpantalla(argv, argc);
    }
    printf("Y la palabra pepo tiene %d letras\n", contar_cadena("pepo"));
    return 0;
}
