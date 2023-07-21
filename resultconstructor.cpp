#include<iostream>
using namespace std;

class marksheet{
    int admno;
    char sname[20];
    float total;
    float per;
    int eng,guj,sci;

    public:
    marksheet()
    {
        cout<<"enter the admno:";
        cin>>admno;
        cout<<"enter the sname:";
        cin>>sname;
     cout<<"enter the eng:";
        cin>>eng;
        cout<<"enter the guj:";
        cin>>guj;
        cout<<"enter the sci:";
        cin>>sci;
      
        total=eng+guj+sci;

        per=total/3;
    
    
    
        cout<<"admno\t sname\t eng\t guj\t sci\t total\t per\t"<<endl;
         cout<<admno<<"\t"<< sname<<"\t"<< eng<<"\t" <<guj<<"\t"<< sci<<"\t"<< total<<"\t"<< per<<"\t"<<endl;


    }

};
int main()
{
    marksheet m;
    
}
/////.;;