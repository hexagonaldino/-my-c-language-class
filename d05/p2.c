#include <stdio.h>
void myfunction2(int *z);
/*****************/
void myfunction(int x)
{
	printf("myfunction %d\n",x);
	x=100;
}
/****************/
int main(int c, char* v[])
{
int n;

n=5;
	myfunction(n); //pass by value
	printf("after mtfunction:%d\n",n);

	myfunction2(&n);  //pass by reference
	printf("after myfunction2: %d\n",n);
	return 0;
}
void mtfunction2(int *z)
{
	printf("myfunction2 %x, %dn\",z,*z);
	*z=100;
}
