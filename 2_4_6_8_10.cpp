#include<iostream>
using namespace std;
int main()
{
    int i,n,t=0;
    cout<<"enter the value";
    cin>>n;
    for(i=2;i<=n;i=i+2)
    {
        t=t+i;
        cout<<i;
    }
    cout<<"\nsum of number"<<t;
}