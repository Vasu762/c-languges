#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value";
    cin>>a;
    if(a==0)
    {
        cout<<"number is zero";
    }
    else{
        if(a>0)
        {
            cout<<"number is positive";
        }
        else{
            cout<<"number is ngative";
        }
    }
}