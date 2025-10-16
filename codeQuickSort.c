//quicksort
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void QuickSort(int arr[],int left,int right)
{
	int pivot=left,i=left,j=right;
	if(left<right)
	{
		while(i<j)
		{
			while(arr[i]<=arr[pivot]&&i<=right)
			i++;
			while(arr[j]>arr[pivot])
			j--;
			if(i<j)
			{
				swap(&arr[i],&arr[j]);
			}
		}
		swap(&arr[j],&arr[pivot]);
		QuickSort(arr,left,j-1);
		QuickSort(arr,j+1,right);
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
	QuickSort(A,0,n-1);
	printf("Sorted Array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}

