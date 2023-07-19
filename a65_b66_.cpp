#include<iostream>
using namespace std;
int main()
{
    char i;
    int j=65;
    for(i=65;i<=90;i++)
    {
        cout<<i;
        cout<<"=";
        cout<<j++;
    }
}