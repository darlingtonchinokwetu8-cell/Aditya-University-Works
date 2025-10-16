//Arrays of UNIONS
#include<stdio.h>
union POINT
{
	int x;
	int y;
};
main()
{
	int i;
	/*union*/ POINT p[3];
	p[0].x=2;
	p[0].y=3;
	p[1].x=4;
	p[1].y=5;
	p[2].x=6;
	p[2].y=7;
	for(i=0;i<3;i++)
	{
		printf("\nCoordinates of point[%d] are %d and %d ",i,p[i].x,p[i].y);
	}
	printf("\n****Because of new data overrides existing data,the output is not accurate****\n");
	return 0;
	
}
