#include<stdio.h>
int main()
{
    int N,M;
    //int A[1000][1000],B[1000][000],C[1000][1000],i,j;
    scanf("%d%d",&N,&M);
    int A[N][M],B[N][M],C[N][M],i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    

}
