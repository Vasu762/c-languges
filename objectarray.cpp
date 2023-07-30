#include<iostream>
using namespace std;
class result{
    int mathe ,sci,eng;
    int total;
    float pr;
    public:
    void setdata()
    {
        cout<<"enter the mathe markes:"<<endl;
        cin>>mathe;
        cout<<"enter the mathe sci:"<<endl;
        cin>>sci;
        cout<<"enter the eng markes:"<<endl;
        cin>>eng;
    }
    void getdata()
    {
        total=mathe+sci+eng;
        cout<<"total is:"<<total<<endl;
        pr=total/3;
        cout<<"pr is :"<<pr<<endl;
        
        if(pr>=90)
        {
            cout<<"A"<<endl;
        }
            else if(pr>=70){
                cout<<"B"<<endl;
            }
                else if(pr>=50)
                {
                    cout<<"C"<<endl;
                }
                    else if(pr>=40)
                    {
                        cout<<"D"<<endl;
                    }
                        else
                        {
                            cout<<"failed";
                        }
    }

};
int main()
{
    result a[3];
    for(int i=0;i<3;i++)
    {
        cout<<"------------"<<i+1<<endl;
        a[i].setdata();
    }
     for(int i=0;i<3;i++)
    {
        a[i].getdata();
    }

}

