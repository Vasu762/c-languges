#include<iostream>
using namespace std;

class student{
private:
int admno;
char sname[20];
float eng,mathes,science;
float total;
void ctotal()
{
    total=eng+mathes+science;
}
public:
void takedata()
{
    cout<<"enter admno :";
    cin>>admno;
    cout<<"enter the sname:";
    cin>>sname;
    cout<<"enter the eng markes";
    cin>>eng;
    cout<<"enter the mathes markes";
    cin>>mathes;
    cout<<"enter the science markes";
    cin>>science;
    ctotal();
   
    
}
void showdata()
{
    cout<<"adnmno\t sname\t eng\t mathas\t science\t total"<<endl;
    cout<<admno<<"\t"<<sname<<"\t"<<eng<<"\t"<<mathes<<"\t"<<science<<"\t"<<total;
}

};

int main()
{
    student a;
    a.takedata();
    a.showdata();
    
}