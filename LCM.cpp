#include<stdio.h>
int gcd(int num1,int num2)
{
    if(num2==0)
    {
        return num1;
    }
    else
    {
        return gcd(num2,num1%num2);
    }
}
int LCM(int num1,int num2)
{
	return (num1*num2)/gcd(num1,num2);
}
    
int main()
{
    int num1,num2;
    printf("Enter 2 numbers ");
    scanf("%d%d",&num1,&num2);
    printf("LCM of %d and %d is %d",num1,num2,LCM(num1,num2));
    return 0;
}
