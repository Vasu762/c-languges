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
    void get()
    {
        for(int i=1;i<=n;i++)
        {
            cout<<"squae of N number"<<i*i<<endl;
        }
    }
    
};
int main()
{
    test t;
    t.setdata();
    t.get();

}



