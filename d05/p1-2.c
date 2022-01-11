#include <stdio.h>
/**************************/
int is_prime(int i)
{
int i2;
	i2=i%2;
	if(i2==0)
	{
		printf("%d is prime\n",i);
		return 0;
	}
	else
	{
		printf("%d is not prime\n",i);
		return 1;
	}
}
/*************************/
int main(int c, char* v[])
{
int n;
	scanf("%d",&n);
	is_prime(n);
	return 0;
}
