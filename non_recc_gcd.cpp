#include<stdio.h>
int gcd(int num1,int num2)
{
    while(num2!=0)
    {
        int r=num1%num2;
        num1=num2;
        num2=r;
    }
    return num1;
}
int main()
{
    int num1,num2;
    printf("Enter 2 numbers ");
    scanf("%d%d",&num1,&num2);
    printf("gcd of %d and %d is %d",num1,num2,gcd(num1,num2));
    return 0;
}
