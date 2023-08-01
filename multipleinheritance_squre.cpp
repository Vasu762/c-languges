#include<iostream>
using namespace std;
class base1{
    public:
    int n;
    void setA()
    {
        cout<<"enter the value:";
        cin>>n;
    }
};
class base2{
public:
   void setB()
   {
    cout<<"squre of number:";
   }


}; 
class drived : public base1,public base2{
public:
        void product()
        {
             for(int i=1;i<=n;i++)
            {
            cout<<i * i<<endl;
            }
        }
    
}; 
int main()
{
    drived d;
    d.setA();
    d.setB();
    d.product();
}