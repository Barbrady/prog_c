/*
 * =====================================================================================
 *
 *       Filename:  prueba.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/12/15 05:50:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aitor Alkorta (), oficial.barbrady@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "fmenu.h"

int main(int argc, char *argv[]) {
	if (argc<=1)  {
		printf("No ha introducio argumentos a imprimir, pruebe con ./ejecutable argumento1 argumento2 ...\n");
		return 0;
	}
	imprimir_menu(argc, argv);
}
