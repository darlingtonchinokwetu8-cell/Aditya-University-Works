//illustration of inline functions
#include<iostream>
using namespace std;
inline  int add(int x,int y)
{
	return x + y;
}
int main()
{
	int a,b;
	cout<<"Enter the numbers :"<<endl;
	cin>>a>>b;
	cout<<"\u001B[33m Sum is :"<<add(a,b);
	return 0;
}
