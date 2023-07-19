#include<iostream>
using namespace std;

class bastman{
private:
int bcode;
char bname[20];
int innings,notout,runs,batavg;

void calcavg()
{
    batavg=runs/(innings-notout);
} 

public:
void readdata()
{
    cout<<"enter bcode:";
    cin>>bcode;
    cout<<"enter the name:";
    cin>>bname;
    cout<<"enter the innings";
    cin>>innings;
    cout<<"enter the notout:";
    cin>>notout;
    cout<<"enter the batman run:";
    cin>>runs;
    calcavg();

    
}
void displaydata()
{
    cout<<"bcode\t bname\t inning\t notout\t runs\t batavg"<<endl;
    cout<<bcode<<"\t" <<bname<<"\t" <<innings<<"\t"<< notout<<"\t"<< runs<<"\t"<< batavg<<endl;
}



};
int main()
{
    bastman v;
    v. readdata();
   
    v.displaydata();
}