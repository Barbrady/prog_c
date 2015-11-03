#include <stdio.h>

int main()
{
	char c;
	
	c=-1;
	printf("-1=%x\n", (unsigned char) c);
	printf("-1=%d\n", (unsigned char) c);	
	printf("-1 Memory Adress=%p\n", &c);
	return 0;
}

