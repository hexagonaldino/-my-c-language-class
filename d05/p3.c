#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* v[])
{
srand(198347133);
int n,c;
for(c=0;c<4;c++)
{
n = srand(874624574);
n = n%100;
printf("%d\n",n);
}
printf("%d\n",n);
	return 0;
}
