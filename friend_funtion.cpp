#include<iostream>
using namespace std;
class Rect{
    int l,b;
    public:
    void setdate(int x, int y)
    {
        l=x , b=y;
    }
    void getdata()
    {
        cout<<"area is :"<<l*b<<endl;
    }
    friend Rect add(Rect, Rect , Rect); //only declare
};

Rect add(Rect x, Rect y, Rect z)
{
    Rect t;
    t.l=x.l + y.l + z.l;
    t.b=x.b + y.b + z.b;
    return t;
}
int main()
{
    Rect a,b,c,d;
    a.setdate(2,3);
    a.getdata();

    b.setdate(4,5);
    b.getdata();

    d.setdate(3,3);
    d.getdata();

    c=add(a,c,d);
    c.getdata();

}
