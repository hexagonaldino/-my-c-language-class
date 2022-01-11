#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
int i,n,c;
i=0;
n=0;
c=1;
while(n<10)
{
	c = c*c;
	printf("%d\n",c);
	c++;
	n++;
}
	return 0;
}
