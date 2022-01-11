#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char argv[])
{
int n, i;
int ck[100];
int sum;
i=0;
sum=0;
srand((int)time(NULL));

while(i<100)
{
	n=rand()%100;

	printf("%d\n", n);
	printf("%d=\n", i);
	ck[i]=n;
	i++;
}
i=0;
n=0;
while(i<100)
{
	sum+=ck[n];
}
printf("%d\n",sum);

	return 0;
}
