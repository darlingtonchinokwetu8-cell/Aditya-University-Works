 #include<stdio.h>
 #include<math.h>
int main()
{
	int  a,b,c;
	float x1,x2;
	printf("enter a b and c values:\n");
	scanf("%d%d%d",&a,&b,&c);
	x1=(-b+sqrt(pow(b,2)-4*(a*c)))/2.0*a;
	x2=(-b-sqrt(pow(b,2)-4*(a*c)))/2.0*a;
	printf("x1 is %f and x2 is %f",x1,x2);
}
