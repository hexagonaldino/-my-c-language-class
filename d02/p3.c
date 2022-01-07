#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

	int n;

	printf("awrgc: %d\n", argc);
	printf("argv[0]: %s\n", argv[0]);
	printf("argv[1]: %s\n", argv[1]);
	printf("argv[2]: %s\n", argv[2]);

	n = atoi(argv[1]);
	printf("number n: %d\n", n);





	return 0;
}
