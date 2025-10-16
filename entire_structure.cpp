#include<stdio.h>
 typedef struct 
{
int x;
int y;
	
}POINT;
void display(POINT);
main()
{
	POINT p1={1,2};
	display(p1);
	return 0;
}
void display(POINT p)
{
	printf("The Coordinates of a point are:( %d , %d )",p.x,p.y);
}



