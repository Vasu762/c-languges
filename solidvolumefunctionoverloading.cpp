#include<iostream>
using namespace std;
class shape{

    public:
   void volume(int r)
    {
        cout<<"volume of shaepe:"<<(4*3.14*r*r*r)/3<<endl;
    }
     void volume(double b, double h)
    {
        cout<<"volume of pyramid"<<(4*b*h)/3<<endl;
    }
    void  volume(int r, int h)
    {
        cout<<"volume of cylinder:"<<3.14 * r * r *h <<endl;
    }
    void volume(double l)
    {
        cout<<"volume of cube:"<<l * l * l <<endl;
    }
    
};
int main()
{
    shape p;
    p.volume(20);
    p.volume(20.20,10.10);
    p.volume(20.20);
    p.volume(20,10);


}  