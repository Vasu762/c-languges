#include<iostream>
using namespace std;
class Test{
    public:
    static int a;
    Test(){
        cout<<"Test class called...."<<endl;
        a++;
    }
};
int Test ::a=10;
int main()
{
    cout<<"intital stage:"<<Test::a<<endl;
    Test a,b,c,d,e,f,g,h,i,j,k,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    cout<<"final stage:"<<Test::a<<endl;
}