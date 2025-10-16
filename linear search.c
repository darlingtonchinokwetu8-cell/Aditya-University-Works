//linear search
#include<stdio.h>
int main()
{
	int a[20],i,n,pos,flag,key;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element to be searched:\n");
	scanf("%d",&key);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			flag=1;
			pos=i+1;
			break;
		}
	}
	if(flag==1)
	{
		printf("element %d found at %d\n",key,pos);
	}
	else
	{
		printf("elements not found.",key);
	}
	
		return 0;
}
