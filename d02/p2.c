#include <stdio.h>

int main(int argc, char *argv[]){

	int n, x;

	printf("your number [0~100]");
	scanf("%d", &n);

	if(n >= 100)
		printf("class B\n");
	else
		printf("class A\n");

	return 0;

	}
