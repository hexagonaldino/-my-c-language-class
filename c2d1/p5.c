#include <stdio.h>

union one{
	int x;
	int y;
	char c;
};

struct rgb_value{
	char r, g, b, x;
};

union rgb{
	int code;		// 4 byte
	struct rgb_value value; // 4 byte
};


int main(int argc, char *argv[]){

	union rgb mycolor;

	mycolor.value.r = 128;
	mycolor.value.g = 128;
	mycolor.value.b = 128;
	mycolor.value.x = 0;

	printf("#%X\n", mycolor.code);

	return 0;
}
