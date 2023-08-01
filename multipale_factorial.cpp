#include<iostream>
using namespace std;
class base1{
    public:
    int n;

    void setdata()
    {
        cout<<"enter the value N:"<<endl;
        cin>>n;
    }
};

class base2
{
    public:
    int a=1;
    void getdata()
    {
        cout<<"factorial number is:";
    }
};

class derived:public base1 , public base2{

public:
int a=1;
void product()
    {
     
        for(int i=1;i<=n;i++)
        {
          a=a*i;
        }
        cout<<a<<endl;
    }
};
    

int main()
{
   derived d;
   d.setdata();
   d.getdata();
   d.product();
}



