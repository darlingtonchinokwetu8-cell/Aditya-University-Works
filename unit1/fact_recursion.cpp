#include<iostream>
using namespace std;
long long factorial_recursion(int num)
{
	if(num==0 || num==1)
		return 1;
	else
		return (num*factorial_recursion(num-1));
}
int main()
{
	int number;
	long long fact;
	cout<< "Enter the number ";
	cin>>number;
	if(number<0)
	{
		cout<<"Error";
	}
	else
	{
		fact=factorial_recursion(number);
	}
	cout<<fact;
	return 0;
}
