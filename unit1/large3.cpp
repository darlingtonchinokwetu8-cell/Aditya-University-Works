#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<< "Enter 3 numbers ";
	cin>>a>>b>>c;
	(a>b && a>c)?cout<<a<<" Is large ":(b>a && b>c)?cout<<b<<" Is large ":cout<<c<< " Is large ";
	return 0;
}
