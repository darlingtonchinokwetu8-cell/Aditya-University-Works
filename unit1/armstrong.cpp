#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int num)
{
	int dig,temp,Count=0,sum=0;
	temp=num;
	while(temp !=0)
	{
		Count++;
		temp/=10;
	}
temp=num;
	while(temp != 0)
	{
		dig=temp%10;
		sum+=pow(dig,Count);
		temp/=10;
	}
	if(sum == num)
    {
        cout<<"\u001B[35m The number is Armstrong ";
    }
    else
    {
        cout<<"The number is not Armstrong ";
    }
}
int main()
{
	int n;
	cout<< "Enter the number ";
	cin>>n;
	armstrong(n);
	return 0;

}
