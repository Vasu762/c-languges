#include<iostream>
using namespace std;

class BOOK{
   
    int bookno;
    char bookTitle[30];
    float price;
    int n;

    int total;

    public:
    BOOK()
    {
        
        cout<<"enter the BOOK_NO"<<endl;
        cin>>bookno;
        cout<<"enter the BOOK TITLE"<<endl;
        cin>> bookTitle;
        cout<<"enter the  PRICE"<<endl;
        cin>>price;
        cout<<"enter the n:";
        cin>>n;

        total=price * n;
    
        cout<<n<<endl;
        cout<<total<<endl;
    } 

};
int main()
{
    
     BOOK v;
    
}
