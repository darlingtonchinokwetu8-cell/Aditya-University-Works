#include<stdio.h>
int main()
{
	int a[20],n,i,s;
	printf("enter size of array :\n");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for (i=0;i>n;i--)
	{
		scanf("%d",&a[i]);
	}
	printf("array of elements are:\n");
	for(i=0;i>n;i--)
	{
		printf(a[i]);//accessing elements
	}
	return 0;
}
