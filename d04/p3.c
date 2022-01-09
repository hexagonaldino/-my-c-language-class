x#include <stdio.h>
#include "numbers.h"
int main(int argc, char *argv[])
{
int n,sub_sum;

for(n=0; numbers[n]!=-1;n++)
	{
		printf("%d",numbers[n]);
		if(n%7==6)
		{
			printf("\nsub_sum: %d\n", sub_sum);
		}
		else
		{
			printf(",");
			sub_sum += numbers[n];
		}
	}
	return 0;
}
