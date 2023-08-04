#include<iostream>>
using namespace std;
class Bank{
    int bal;
    string name;
    string type;
    public:
    void setdata(int bal, string name, string type)
    {
        this->bal=bal;
        this->name=name;
        this->type=type;
    }
    void getdata()
    {
        cout<<"Acconut holder name is:"<<bal<<endl;
        cout<<"Acconut type:"<<name<<endl;
        cout<<"Acconut balance:"<<type<<endl;
    }
};
int main()
{
    Bank b;
    b.setdata(1000,"vasu","saving");
    b.getdata();
}