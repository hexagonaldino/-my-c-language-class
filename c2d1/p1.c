#include <stdio.h>

void myfunc1(int p){    // pass by value

	p  // value

}

void myfunc2(int *p){   // pass by ref (address)

 	p   // address
	*p  // value

}


int main(int argc, char *argv[]){

	int n;
	int *np;
	
	n = 5;
	np = &n;                             // stack
	np = (int*)malloc(sizeof(int)*5);    // heap
	free(np);

	return 0;
}
