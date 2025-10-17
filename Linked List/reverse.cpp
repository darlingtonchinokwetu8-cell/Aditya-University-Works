#include<stdio.h>
#include<math.h>
int reverse(int x){
    long long reverse=0,remainder;
    while(x>0)
    {
        remainder=(long long)x%10;
        reverse=reverse *10 +remainder;
       x/=10;
    }
    if(reverse>=pow(-2,31) && reverse<=(pow(2,31)-1))
    {
        return (long long)reverse;
    }
    else
    {
        return 0;
    }
}
int main()
{
	long long num;
	printf("\n Enter the value x: ");
	scanf("%Ld",&num);
long long ans=reverse(num);
	printf("%Ld ",ans);
	return 0;
}
