//transpose of a matrix
#include<stdio.h>
int main()
{
	//declare variables
	int a[10][10],temp=0,i,j,m,n;
	//request for number of rows and columns of a matrix
	printf("enter the number of rows and columns of a matrix:",m*n);
	scanf("%d%d",&m,&n);
	//if loop for square matrix
	if(m==n)
	{
		//request for matrix elements
		printf("the matrix elements are :\n",m*n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		//display matrix A 
		printf("matrix A is \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf(" \n");
		}
		//logic for transposing a matrix
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i<j)
				{
					temp=a[i][j];
					a[i][j]=a[j][i];
					a[j][i]=temp;
				}
			}
		}
		printf("the transpose of a matrix is \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf(" \n");
		}	
	}//end of if loop
	//else loop
	else
	{
		printf("not applicable please enter square matrix");
	}
	return 0;

}
