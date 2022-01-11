#include <stdio.h>
/***********************/
void myfunction()
{
	printf("myfunction\n");
}
/***********************/
void print_int(int x)
{
	printf("proint_int : %d\n", x);
}
/***********************/
int main(int c, char *v[])
{
int n;
n=5;


	myfunction();

	print_int(n);
	return 0;
}
