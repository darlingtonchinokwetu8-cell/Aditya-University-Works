//binary search programmes
#include<stdio.h>
int main()
{
//declare variables
	int a[100],i,n,left,right,pos,key,mid,flag=0;
	//collect size of an array and elements
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be searched:\n");
	scanf("%d",&key);
	left=0,right=n-1;
	while(left<=right)//binary search logic
	{
		mid=(left + right)/2;
		if(a[mid]==key)
		{
			flag=1;
			pos= mid + 1;
			break;
		}
		if(key<a[mid])
		{
			right=mid-1;
		}
		if(key>a[mid])
		{
			left=mid +1;
		}
	}//end of while loop
	if(flag==1)
	{
		printf("the element is %d located at %d",key,pos);
	}
	else
	{
		printf("key not found");
	}
	return 0;
}
