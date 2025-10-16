#include<stdio.h>
int main()
{
	int q,r,D,B,Q,b,R,rev=0;
	scanf("%d",&D);
	if(D==0)
	{
		printf("binary is 0");
	}
	else
	{
		while(D!=0)
		{
			Q=D/2;
			R=D%2;
			D/=10;
		}
	}
	B=R;
	while(B!=0)
	{
		q=B/10;
		r=B%10;
		D/=10;
		rev=(rev*10)+r;
		b=rev;
	}
	printf("(%d) is binary",b);
	return 0;
}
