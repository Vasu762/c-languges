#include<iostream>
using namespace std;

class test{
int testcode;
int calculate;
string Description;
int NoCandidate;
int CenterReqd;

public:
 test()
 {


    cout<<"enter the value TestCode:";
    cin>>testcode;
    cout<<"enter the value  Description:";
    cin>>Description;
    cout<<"enter the value NoCandidate:";
    cin>>NoCandidate;
  
  
    calculate=NoCandidate/100+1;
 }

void display()
    {

    cout<<"testcode\tDescription\tNoCandidate\ttotal "<<endl;
    cout<<testcode<<"\t" << Description<<"\t"<< NoCandidate<<"\t"<<calculate<<"\t"<<endl;
    }


};
int main()
{
    test v;  
    v.display();
}




