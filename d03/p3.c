 #include <stdio.h>

int main(int argc, char *argv[])
{

	int n,m;
	int x[10];
	m = 1;
	for(n=0; n<10; n++)
	{
		x[n] =  x[n-1]+2;
		m+=2;


	}
	for(n=0; n<10; n++)
		printf("%d - %d\n", n, x[n]);






	return 0;
}
