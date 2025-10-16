#include<stdio.h>
int main()
{
	int a[20],i,n,temp,j;
	printf("enter size of an array");
	scanf("%d",&n);
	printf("the %d elements of an array are:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//arrays before sort
	printf("the array elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	//bubble sorting
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++);
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
	//print sorted elements
	printf("sorted elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}
