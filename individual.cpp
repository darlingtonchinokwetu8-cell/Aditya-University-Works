#include<stdio.h>
 typedef struct 
{
int x;
int y;	
}POINT;
void display(int,int);
int main()
{
	POINT p1={1,2};
	display(p1.x,p1.y);
	return 0;
}
void display(int a,int b)
{
	printf("The Coordinates of a point are: %d and %d ",a,b);
}

