#include<stdio.h>
typedef struct POINT1
{
	int x;
	int y;
};
typedef union POINT2
{
	int x,y;
};
main()
{
	POINT1 p1={2,3};
	POINT2 p2;
	printf("The coordinates of P1---->(%d , %d)\t",p1.x,p1.y);
	p2.x=4;
	printf("\tThe x coordinate of P2---->%d",p2.x);
	p2.y=5;
	printf("\tThe y coordinate of P2---->%d",p2.y);
	return 0;
	
}
