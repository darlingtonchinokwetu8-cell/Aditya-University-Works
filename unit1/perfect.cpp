#include<iostream>
using namespace std;
bool perfect(int num)
{
    int sum=0,i;
    int temp=num;
    for(i=1;i<=temp/2;i++)
    {
        if(temp%i==0)
        {
            sum+=i;
        }
    }
    return sum==num;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(perfect(n))
    {
        cout<<"\u001B[32m The number is perfect";
    }
    else
    {
        cout<<"\u001B[31m The number is not perfect";
    }
    return 0;
}
