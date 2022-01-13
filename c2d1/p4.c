#include <stdio.h>

struct one{
	int a;
	char c;
	long b;   //8 byte
};

struct two{		//16 byte
	long b;
	int a;
	char c;
};

int main(int argc, char *argv[]){

	printf("struct one %d\n",
			sizeof(struct one));


	return 0;
}
