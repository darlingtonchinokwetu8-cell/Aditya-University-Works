#include<stdio.h>
int fibonacci(int num)
{
    if(num==0)
    {
    return 0;
    }
    else if(num==1)
    {
    return 1;
    }
    else 
    {
    printf("%d ",fibonacci(num-1)+fibonacci(num-2));
    }
}
int main()
{
    int num;
    printf("enter num ");
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}
