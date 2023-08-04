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
int Test ::a=51;
int main()
{
    cout<<"intital stage:"<<Test::a<<endl;
    Test t,a,s,d,f;
    cout<<"final stage:"<<Test::a<<endl;
}