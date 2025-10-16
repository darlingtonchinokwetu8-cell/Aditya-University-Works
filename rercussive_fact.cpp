#include<stdio.h>
long int factorial(int num)
{
  if(num==0)
  return 1;
  else
  return (num*factorial(num-1));
}
int main()
{
    long int num;
    printf("enter num ");
    scanf("%d",&num);
    printf("%d",factorial(num));
    return 0;
}
