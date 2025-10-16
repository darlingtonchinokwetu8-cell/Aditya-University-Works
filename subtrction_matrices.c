//matrix subtraction code
#include<stdio.h>
int main()
{
	//declare variables
	int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
	//request for rows and columns for matrix A& B
	printf("enter number of rows and columns for A:",m*n);
	scanf("%d%d",&m,&n);
	printf("enter number of rows and columns for B:",p*q);
	scanf("%d%d",&p,&q);
	// if loop for subtraction
	if((m==p)&&(n==q))
	{
		//read A elements
		printf("enter %d elements for matrix A \n",m*n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		//read B elements
		printf("enter %d elements for matrix B \n",p*q);
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		//logic for subtracting matrices
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=a[i][j]-b[i][j];
			}
		}
		//display subtracted matrices
		printf("the elements of C are:\n",c[i][j]);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf(" \n");
		}
	}//end of if loop
	// else loop starts
	else 
	{
		printf("not applicable for non square matrices");
	}//else loop ends
	return 0;
}//end of main
