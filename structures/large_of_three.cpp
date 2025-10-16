#include<stdio.h>
int main()
{
	struct numbers
	{
		int a,b,c;
		int largest;
	}num;
	printf("Enter three numbers ");
	scanf("%d %d %d",&num.a,&num.b,&num.c);
	if(num.a>num.b && num.a>num.c)
	num.largest=num.a;
	if(num.b>num.a && num.b>num.c)
	num.largest=num.b;
	else
	num.largest=num.c;
	printf("*************************************\n");
	printf(" largest number------> %d ",num.largest);
	return 0;
	
}
