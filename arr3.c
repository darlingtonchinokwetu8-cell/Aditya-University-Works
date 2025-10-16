//inserting an element program
#include<stdio.h>
int main()
{
	int a[20],pos,key,i,j,n;//declare variables
	printf("enter size of an array");
	scanf("%d",&n);
	printf("the elements are %d :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key to be inserted",key);
	scanf("%d",&key);
	printf("enter the position of the key",pos);
	scanf("%d",&pos);
	for(i=0;i<n;i++)
	{
		a[i]=a[j];
	}
	a[pos]=key;
	pos--;
	for(pos=1;pos<n+1;pos--);
	{
		a[i+1]=a[j];
	}
	printf("elements after inserting\n",a[j]);
	for(j=0;j<n+1;j++)
	{
		printf("%d\t",a[j]);
	}
	return 0;
	
	
	
}
