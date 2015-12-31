/*
 * =====================================================================================
 *
 *       Filename:  ejemploforkpipe.c
 *
 *    Description:  Ejemplo de fork y pipe
 *
 *        Version:  1.0
 *        Created:  28/12/15 17:47:59
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
#include <unistd.h>
int main()   {
	int pid, status;
	int fd[2];

	pipe(fd);

	pid = fork();

	if(pid==0)  {
		printf("Este es el proceso hijo con pid %d\n",getpid());
		exit(0);
	}
	printf("Este el es proceso padre con pid %d\n",getpid());
	printf("Estos son los descriptores de fichero pipe0 %d y pipe1 %d\n",fd[0],fd[1]);
	wait(pid,&status,NULL);
	
}	

