#include<stdio.h>
main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;//declare variables.........................
	//request for number of rows and columns of matrices
	printf("enter number of rows and columns for matrix A:");
	scanf("%d%d",&m,&n);
	printf("enter number of rows and columns of matrix B:");
	scanf("%d%d",&p,&q);
	//if loop for addition of matrices...................................................
	if((m==p)&&(n==q))
	{
		//read for elements of matrices A................................................
		printf("enter %d elements for matrix  A\n",m*n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		//read elements of matrix B
		printf("enter %d elements for matrix B \n",p*q);
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		//logic for addition of matrices A & B
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j] = a[i][j] + b[i][j];
			}
		}
		//display resultant matrix
		printf("the elements of addition matrix are: \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}//end of if loop
	else
	{
		printf("square matrix only");
	}// end of else loop
	return 0;
	
}//end of main#
