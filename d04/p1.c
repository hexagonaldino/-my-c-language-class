#include <stdio.h>

int main(int argc, char *argv[])
{

	int array_one[5]={1,2,3,4,5};
	int array_two[]={6,7,8,9,10,-1};
	int array_three[10];
	int n;

	for(n=0; n<5; n++)
	{
	printf("%d\n",array_one[n]);

	}

printf("==========\n");

	n=0;
	while(1)
	{

	if(array_two[n] == -1)
		break;
	else
	{
		printf("%d\n",array_two[n]);
		n++;
	}
	}


return 0;
}
