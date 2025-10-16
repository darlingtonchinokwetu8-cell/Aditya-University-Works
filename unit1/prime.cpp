#include<iostream>
using namespace std;
int main()
{
	int num,i,isPrime=0;
	cout<<"Enter number ";
	cin>>num;
	if(num==0)
	{
		cout<<"Error";
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				isPrime++;
			}
		}
	}
	if(isPrime==2)
	{
		cout<<"Number is prime";
	}
	else
	{
		cout<<"The number is not prime ";
	}
	return 0;
}
