#include <stdio.h>

int main(int argc, char *argv[])
{

	int n, x, c;
	int user_input;

	printf("file prime no under : ");
	scanf("%d", &user_input);

	c = 0;
	for(n=2; n<user_input;n++)
	{
	for(x=2; x<n; x++)
		if(n % x == 0){
			printf("not peime- %d,%d\n", n, x);
			c = 1;
			break;
	}
	printf("----------\n");

	if(c == 0)
		printf("prime\n");
	else
		printf("not prime\n");


	return 0;
}
