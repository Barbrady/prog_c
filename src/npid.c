#include <stdio.h>
#include <unistd.h>

int main ()  {
    int pid;
    pid = getpid();
    printf("El pid es %d.\n",pid);
}    
