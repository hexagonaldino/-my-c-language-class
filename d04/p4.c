#include <stdio.h>

int main(int argc, char *argv[])
{
int n;
int *np;
n=5;
np = &n;
printf("%d %x %d\n",np, np, *np );





	return 0;
}
