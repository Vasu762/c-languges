#include<iostream>
using namespace std;

class BOOK{
   
    int bookno;
    char bookTitle[30];
    float price;
    int total;


    void TOTALCOST(int n) 
    {
        total=price * n;
    }

    public:
    void input()
    {
        int n;
        cout<<"enter the BOOK_NO";
        cin>>bookno;
        cout<<"enter the BOOK TITLE";
        cin>> bookTitle;
        cout<<"enter the  PRICE";
        cin>>price;
        TOTALCOST(n);

         
    }
    void PURCHASE(int n)
    {
        cout<<n<<endl;
        cout<<TOTALCOST<<endl;
    }

};
int main()
{
    int n;
    BOOK v;
    v.input();
    v.PURCHASE(n);

}
