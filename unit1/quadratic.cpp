#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,r1,r2;
    cout<< "Enter a b and c "<<endl;
    cin>>a>>b>>c;
    r1=(-b+sqrt(pow(b,2)-a*a*c))/2*a;
    r2=(-b-sqrt(pow(b,2)-a*a*c))/2*a;
    cout<<r1<<endl;
    cout<<r2;
    return 0;
}
