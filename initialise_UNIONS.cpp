#include<stdio.h>
typedef struct POINT1
{
	int x;
	int y;
};
main()
{
	POINT1 p1={2,3};
	POINT2 p2;
	p2.x=4;
	p2.y=5;
	printf("The coordinates of P1---->(%d , %d)\t",p1.x,p1.y);
	printf("The coordinates of P2---->(%d , %d)\t",p2.x,p2.y);
	return 0;
	
}
