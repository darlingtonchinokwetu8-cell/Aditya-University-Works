#include<iostream>
using namespace std;
int main()
{
	int num,reverse=0,remainder=0,temp;
	cout<<"Enter the number ";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		remainder=num%10;
		reverse=reverse*10 + remainder;
		num/=10;
	}
	if(reverse==temp)
	{
		cout<<"The  number is palindrome";
	}
	else
	{
		cout<<"\u001B[33m The number is not palindrome ";
	}
	return 0;
}
