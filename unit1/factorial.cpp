#include<iostream>
using namespace std;
int main()
{
	int num,factorial=1;
	cout<<"Enter the number ";
	cin>>num;
	if(num<0)
	{
		cout<<"Error";
	}
	else if(num==0)
	{
		factorial=1;
	}
	else
	{
		for(int i=1;i<=num;i++)
		{
			factorial*=i;
		}
	}
	cout<<factorial;
}
