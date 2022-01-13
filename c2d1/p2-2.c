#include <stdio.h>
#include <string.h>


typedef struct _point
{
        int x,y;
        char color_name[15];
}Point;

void point_set(Point *p, int a, int b, char *s)
{
        p->x = a;
        p->y = b;
        strcpy(p->color_name, s);
        /*
        (*p)x = a;
        (*p)y = b;
        */
}

void point_print(struct _point *p)
{
        printf("%d,%d,%s\n",
        p->x, p->y, p->color_name);

}


int main(int argc, char *argv[])
{
        int n[5]={1,2,3,4,5};
        int x;

        x = 5;

        struct _point mypoint;
        Point mypoint2;

        /*
        mypoint.x = 5;
        mypoint.y = 10;
        strcpy(mypoint.color_name, "black");
        */

        point_set(&mypoint, 2 ,20 , "white");
        point_print(&mypoint);
/*
        printf("%d, %d, %s\n",
                mypoint.x, mypoint.y, mypoint.color_name);

*/
