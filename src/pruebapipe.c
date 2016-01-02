/*
 * =====================================================================================
 *
 *       Filename:  pruebapipe.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  31/12/15 08:24:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aitor Alkorta (), oficial.barbrady@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define SIZE 512

int main (int argc, char *argv[])  {
	char buffer [SIZE];
	int fdi, fdo, readbytes;
	if(argc!= 3)  {
		printf("Uso del programa %s fichero-in fichero-out\n",argv[0]);
		exit(1);
	}

	fdi = open(argv[1],O_RDONLY);
	fdo = open(argv[2],O_WRONLY|O_CREAT|O_TRUNC, 0644);

	while((readbytes = read(fdi,&buffer,sizeof(char))) > 0)  {
			write(fdo,&buffer,readbytes);
	}
	close(fdi);
	close(fdo);	
}
