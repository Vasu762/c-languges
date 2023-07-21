#include<iostream>
using namespace std;

class area{
    public:
   void shape(int a)
    {
        cout<<"area of squre:"<<a*a<<endl;
    }
   void shape(int l , int b)
    {
         cout<<"area of rectengle:"<<l*b<<endl;
    }
    void shape(int a,int b,int c)
    {
        cout<<"area of triangal:"<<a+b+c/2<<endl;
    }
   void shape(double a)
    {
        cout<<"area of circal:"<<3.14*a*a<<endl;
    }
};
int main()
{
   area b;
   b.shape(10);
   b.shape(10,20);
   b.shape(10,20,30);
   b.shape(10.20);


}