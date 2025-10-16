/*read,display,add and subtract complex numbers*/
#include<stdio.h>
int main()
{
	typedef struct complex
	{
		int real;
		int imag;
	}COMPLEX;
	COMPLEX c1,c2,sum_c,sub_c;
	int option;
	do
	{
		printf("****Main menu*******");
		printf("\n1.Read complex numbers ");
		printf("\n2.Display complex numbers ");
		printf("\n3.Add complex numbers ");
		printf("\n4.subtract complex numbers ");
		printf("\n5.Exit");
		printf("\n.Enter your option ");
		scanf("%d",&option);
		switch(option)
		{
			case 1://read
				printf("Enter real and imaginary of first complex number");
				scanf("%d %d",&c1.real,&c1.imag);
				printf("Enter real and imaginary of second complex number ");
				scanf("%d %d",&c2.real,&c2.imag);
				break;
			case 2://display
			printf("\n The first complex number is %d + %di",c1.real,c1.imag);	
			printf("\n The second complex number is %d + %di",c2.real,c2.imag);	
			break;
			case 3://addition
			sum_c.real=c1.real+c2.real;
			sum_c.imag=c1.imag+c2.imag;
			printf("\nThe sum of two complex numbers is %d + %di",sum_c.real,sum_c.imag);
			break;
			case 4://subtraction
			sub_c.real=c1.real-c2.real;
			sub_c.imag=c1.imag-c2.imag;
			printf("\nThe difference of two complex numbers is %d + %di",sub_c.real,sub_c.imag);
			break;
		}
	}
	while(option!=5);
	return 0;
}
