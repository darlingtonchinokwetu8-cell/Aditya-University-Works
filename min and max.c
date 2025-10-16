#include<stdio.h>
int main()
{
	int a[20],i,n;
	int max ,min,max_pos,min_pos;
	printf("enter the size of an array");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			max_pos=i+1;
		}
		if(a[i]<min)
		{
			min=a[i];
			min_pos=i+1;
		}
	}//end of for loop
	printf("max element is %d located at%d\n",max,max_pos);
	printf("min element is %d located at %d\n",min,min_pos);
	return 0;
}
