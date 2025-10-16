//trace of a matrix
#include<stdio.h>
int main()
{
	//declare variables
	int a[10][10],i,j,m,n,trace=0;
	//request number of rows and columns for matrix
	printf("enter number of rows and columns");
	scanf("%d%d",&m,&n);
	//if loop for square matrix
	if(m==n)
	{
		//request the elements of matrixA array
	printf("the %d elements are \n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	// displaying trace 
	printf("trace is");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				trace=trace+a[i][j];
			}
		}
	}
		printf(" %d",trace);
}
	else
	{
		printf("not valid for non square matrix");
	}
	return 0;
}
//end of main
