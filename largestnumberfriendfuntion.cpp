#include <iostream>
using namespace std;

class Test
{
    int x, y;

public:
    void input()
    {
        cout << "enter the value:";
        cin >> x >> y;
    }
    friend void find(Test t);
};
void find(Test t)
{
    if (t.x > t.y)
    {
        cout << "number is largest" << t.x;
    }
    else
    {
        cout << "number is largest" << t.y;
    }
}

int main()
{
    Test t;
    t.input();
    find(t);
}