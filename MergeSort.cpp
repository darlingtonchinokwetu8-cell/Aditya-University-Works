#include<stdio.h>
void merge(int arr[],int left,int mid,int right)
{
	mid=(left+right)/2;
	int temp[(right-left)+1];
	int i,j,k=0;
	i=left,j=mid+1;
	while(i<=mid && j<=right)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
		}
		k++;	
	}
	//copying remaining elements from left sub array
	while(i<=mid)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	//copying remaining elements from right sub array
    while(j<=right)
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	//copying temp to original array
	for(i=left,k=0;i<=right;i++,k++)
	{
		arr[i]=temp[k];
	}
}
void MergeSort(int arr[],int left,int right)
{
	int mid=(left+right)/2;
	if(left<right)
	{
		//mid=(left+right)/2;
		MergeSort(arr,left,mid);//recursive call for left sub array
		MergeSort(arr,mid+1,right);//recursive call for right sub array
		merge(arr,left,mid,right);
	}
}

int main()
{
	
	
	
	
	int n,i,j,A[100];
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	MergeSort(A,0,n-1);
	printf("\u001B[32m Sorted Array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}
