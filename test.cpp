#include<iostream>
using namespace std;

class test{
int testcode;
int calculate;
string Description;
int NoCandidate;
int CenterReqd;

void CALCNTR()
{
    calculate=NoCandidate/100+1;
}

public:
void SCHEDULE()
{
    cout<<"enter the value TestCode:";
    cin>>testcode;
    cout<<"enter the value  Description:";
    cin>>Description;
    cout<<"enter the value NoCandidate:";
    cin>>NoCandidate;
  
    CALCNTR();
}


void DISPTEST() 
{
    cout<<"testcode\t  Description\t NoCandidate\t total "<<endl;
    cout<<testcode<<"\t" << Description<<"\t"<< NoCandidate<<"\t"<<calculate<<"\t"<<endl;

}



};
int main()
{
    test v;
    v.SCHEDULE();
    v.DISPTEST();
}




