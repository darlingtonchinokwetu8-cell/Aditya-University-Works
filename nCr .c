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
	int n,nCr,r;
	printf("enter n");
	scanf("%d",&n);
	printf("enter r");
	scanf("%d",&r);
	nCr=(factorial(n))/(factorial(n-r)*factorial(r));
	printf("%dC%d is %ld",n,r,nCr);
	return 0;
}
