//swap by reference
#include<stdio.h>
void swap(int*,int*);
void swap(int*a,int*b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;	
}
main()
{
	int x,y;

	
	printf("enter x and y values ");
	scanf("%d %d",&x,&y);
	swap(&x,&y);

	printf("x=%d\n",x);
	printf("y=%d",y);
	return 0;
}
