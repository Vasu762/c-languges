#include <iostream>
using namespace std;
int cal(int x)
{
    float sgst, cgst;
    float netbill;

    sgst = (x * 2.5) / 100;
    cgst = (x * 2.5) / 100;
    netbill = x + sgst + cgst;

    cout << " SGST............" << sgst << endl;
    cout << " CGST............" << cgst << endl;
    cout << " Net amount......" << netbill << endl;
}

class bill
{
public:
    int order, qty, total, totalnet, ch, netbill;
    string name, mono;
    float cgst, sgst;

    void get()
    {
        cout << "enter your name:" << endl;
        cin >> name;

        cout << "enter your mobile:" << endl;
        cin >> mono;

        cout << "=============================wel-come to customer======================================";
        cout << "=====================================MENU==============================================" << endl;
        cout << endl;
        cout << "(1)  pavbhaji=======================90 only." << endl;
        cout << "(2)  dhosa==========================99 only." << endl;
        cout << "(3)  manchuriyam====================99 only." << endl;
        cout << "(4)   Burgar========================50 only." << endl;
        cout << "(5)   Pizza=========================400 only." << endl;
        cout << "(6)   Coke==========================40 only." << endl;
    }

    void set()
    {
        do
        {
            cout << "enter you choice:";
            cin >> ch;
            switch (ch)
            {

            case 1:
                cout << "Please enter the qty : ";
                cin >> qty;
                total = 90 * qty;
                cout << "total" << total << endl;
                cout << "Order :pavbhaji." << endl;
                cout << endl;
                cout << "~---------THANK YOU FOR COMING-----------~" << endl;
                break;
            case 2:
                cout << "Please enter the qty : ";
                cin >> qty;
                total = 99 * qty;
                cout << "total" << total << endl;
                cout << "Order :pavbhaji." << endl;
                cout << endl;
                cout << "~---------THANK YOU FOR COMING-----------~" << endl;
                break;
            case 3:
                cout << "Please enter the qty : ";
                cin >> qty;
                total = 99 * qty;
                cout << "total" << total << endl;
                cout << "Order :pavbhaji." << endl;
                cout << "Number of deals : " << qty << endl;
                cout << endl;
                cout << "~---------THANK YOU FOR COMING-----------~" << endl;
                break;
            case 4:
                cout << "Please enter the qty : ";
                cin >> qty;
                total = 50 * qty;
                cout << "total" << total << endl;
                cout << "Order :pavbhaji." << endl;
                cout << "Number of deals : " << qty << endl;
                cout << "total" << total << endl;
                cout << endl;
                cout << "~---------THANK YOU FOR COMING-----------~" << endl;
                break;
            case 5:
                cout << "Please enter the qty:";
                cin >> qty;
                total = 400 * qty;
                cout << "total" << total << endl;
                cout << "Order :pavbhaji." << endl;
                cout << "Number of deals : " << qty << endl;
                cout << "total" << total << endl;
                cout << endl;
                cout << "~---------THANK YOU FOR COMING-----------~" << endl;
                break;
            case 6:
                cout << "Please enter the qty:";
                cin >> qty;
                total = 40 * qty;
                cout << "total" << total << endl;
                cout << "Order :pavbhaji." << endl;
                cout << "Number of deals : " << qty << endl;
                cout << "total" << total << endl;
                cout << endl;
                cout << "~---------THANK YOU FOR COMING-----------~" << endl;
                break;
            case 7:
                break;
            }
        } while (ch != 7);
        cal(total);
    }
};
int main()
{
    bill b;
    b.get();
    b.set();
}
