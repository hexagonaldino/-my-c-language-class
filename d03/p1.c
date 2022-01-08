#include <stdio.h>

int main(int argc, char *argv[]){

	int n;

	n = 0;
	while(1){

		printf("%d\n", n++);
		if(n == 10)
			dbreak;

	}


	/*
	n = 10;
	do{
		printf("%d\n", n);
		n++;

	}while(n<10);






	n = 0;
	while(n<10){
		printf("%d\n", n);
		n++;

	}
	*/
	return 0;
}
