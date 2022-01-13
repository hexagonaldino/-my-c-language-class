#include <stdio.h>
#include <string.h>

typedef struct _point{
	int x;
	int y;
	char color_name[15];
}POINT;

//typedef struct point POINT;

void point_set(POINT *p, int a, int b, char *s){
	p->x = a;
	p->y = b;
	strcpy(p->color_name, s);
}



int main(int argc, char *argv[]){

	int n[5]={1,2,3,4,5};
	int x;

	x = 5;

	struct _point mypoint;
	POINT mypoint2;

	//mypoint.x = 5;
	//mypoint.y = 10;
	//strcpy(mypoint.color_name, "black");

	point_set(&mypoint, 2, 20, "white");

	printf("%d, %d, %s\n", 
		mypoint.x, mypoint.y, 
		mypoint.color_name);


	return 0;
}
