#include<iostream>
using namespace std;

class shape{
    public:
    shape(int a)
    {
        cout<<"area of squre:"<<a*a<<endl;
    }
    shape(int l , int b)
    {
         cout<<"area of rectengle:"<<l*b<<endl;
    }
    shape(int a,int b,int c)
    {
        cout<<"area of triangal:"<<a+b+c/2<<endl;
    }
    shape(double a)
    {
        cout<<"area of circal:"<<3.14*a*a<<endl;
    }
};
int main()
{
    shape  a(10), b(10,20), c(10,20,30) , d(10.10);

}