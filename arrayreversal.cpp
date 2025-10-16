#include<stdio.h>
int main()
{
	int n,a[100],i,j,temp;
	
	printf("enter n ");
	scanf("%d",&n);
	
	printf("enter %d array elements \n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Array before reversal are \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nArray after reversal are\n");
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
	return 0;
}
