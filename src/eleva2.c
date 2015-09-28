#include <stdio.h>

long long eleva(int i)
{
	long long r = 2;
	if(i<=0)
	{
		return 1;
	}
	else  {
		for(int c=1; c<i; c++)
		{
			r = r*2;
		}
	}
	return r;
}





int main ()
{
	long long r,e;
	printf("Exponente: ");
	scanf("%lli",&e);
	r=eleva(e);
	printf("Resultado: %lli.\n",r);
}
