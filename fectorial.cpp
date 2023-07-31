#include<iostream>
using namespace std;
class base{
    public:
    int n;

    void setdata()
    {
        cout<<"enter the value N:"<<endl;
        cin>>n;
    }
};

class test : public base
{
    public:
    int a=1;
    void get()
    {
        for(int i=1;i<=n;i++)
        {
           a=a*i;
        }
        cout<<"Factorial of "<< n<< "is:"<<a <<endl;
    }
    
};
int main()
{
    test t;
    t.setdata();
    t.get();

}



