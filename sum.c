#include<stdio.h>
int main()
{
	int a[20],i,n,sum=0;
	printf("enter size of an array");
	scanf("%d",&n);
	int arr[n];
	printf("the %d elements of an array are:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	prinf("%d\n",sum);
	return 0;
	
}
