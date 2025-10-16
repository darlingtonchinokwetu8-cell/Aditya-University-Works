#include<stdio.h>
int main()
{
	int a[20],i,n,t;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter elements before reverse: ",n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-1-i];//logic for reverse
		a[n-1-i]=t;
	}
	printf("\nelements after reverse:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
