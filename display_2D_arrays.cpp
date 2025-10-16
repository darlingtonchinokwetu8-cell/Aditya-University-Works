//displaying 2D arrays program
#include<stdio.h>
int main()
{
	//declare variables
	int a[10][10],i,j,m,n;
	//request number of rows and columns for array
	printf("enter number of rows and columns");
	scanf("%d%d",&m,&n);
	//request the elements of 2D array
	printf("the %d elements are \n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//displaying entered elements
	printf("the %d elements are \n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//end of main
