#include <stdio.h>

int main(int argc, char *argv[])
{
	int z[100];
	int n, m;
	for(n=0, m=0; n<100;n++)
	{
		z[n] = m+7;
		printf("%d",n*7);
	}
	return 0;
}
