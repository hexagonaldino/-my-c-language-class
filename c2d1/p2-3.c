#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _point{
	int x;
	int y;
	char color_name[15];
}POINT;

//typedef struct point POINT;

void point_set(POINT *p, int a, int b, char *s){
	
	if(p==NULL)
		return;

	p->x = a;
	p->y = b;
	strcpy(p->color_name, s);
}

void point_print(struct _point *p){

	if(p==NULL)
		return;

	printf("x: %d, y: %d, color_name: %s\n",
		p->x, p->y, p->color_name);
}

int main(int argc, char *argv[]){

	//stack
	struct _point mypoint;
	POINT mypoints[5];

	//heap
	POINT *mypoint2 = NULL;      ///FILE *f = NULL;
	POINT *mypoints2 = NULL;
	int n;

	point_set(&mypoint, 2, 20, "white");
	point_print(&mypoint);

	point_set(mypoints, 4,40,"gray");  	//mypoints[0]
	point_set(mypoints+1, 6,60,"white"); 	//mypoints[1]
	/*******************************************/
	mypoint2 = (POINT*)malloc(sizeof(POINT)*1);   // sizeof(struct _point)

	point_set(mypoint2, 100,150, "green");
	point_print(mypoint2);

	free(mypoint2);
	/****************************************/
	mypoints2 = (POINT*) malloc(sizeof(POINT)*5);

	point_set(mypoints2, 110, 160, "white");	//mypoints2[0]
	point_set(mypoints2+1, 120, 170, "black");	//mypoints2[1]

	free(mypoints2);
	return 0;
}
