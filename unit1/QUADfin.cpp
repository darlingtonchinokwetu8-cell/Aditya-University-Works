#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,discrement;
    float x1,x2;
    float realpart,imaginarypart;
    cout<<" \u001B[31a Enter the values of a , b , c:"<<endl;
    cin>>a>>b>>c;
   discrement=pow(b,2)-4*a*c;
   if(discrement==0)
   {
       cout<< "The roots are real and equal :"<<endl;
       x1=x2=(float)-b/2*a;
       cout<<"\u001B[34m X1="<<x1<<endl;
       cout<<"\u001B[34m X2="<<x2;
   }
   else if(discrement>0)
   {
       cout<<"The roots are real and distinct :"<<endl;
       x1=(float)((-b+sqrt(discrement))/2*a);
       x2=(float)((-b-sqrt(discrement))/2*a);
       cout<<" \u001B[32m X1="<<x1<<endl;
       cout<<" \u001B[32m X2="<<x2;
   }
   else
   {
       cout<<"The roots are complex :"<<endl;
       realpart=(float)(-b/2*a);
       imaginarypart=(float)(sqrt(-(discrement)));
       cout<<"\u001B[31m X1="<<realpart<<"+"<<imaginarypart<<"i"<<endl;
       cout<<"\u001B[31m X2="<<realpart<<"-"<<imaginarypart<<"i"<<endl;
   }
return 0;
}
