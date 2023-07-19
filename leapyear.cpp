#include<iostream>
using namespace std;
{
    int year;
    cout<<"enter the year:";
    cin>>year;
    if(year%4==0)
    {
        cout<<"year is leap year";
    }    
    else{
        cout<<"year is not leap year";
    }
}