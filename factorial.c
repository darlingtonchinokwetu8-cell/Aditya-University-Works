#include<stdio.h>
long int factorial(int n)
{
	long int f=1,i;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	return f;
}
int main()
{
	long int n,i;
	printf("enter n");
	scanf("%d",&n);
	printf(" the factorial is of %d is %ld",n,factorial(n));
	return 0;
}
