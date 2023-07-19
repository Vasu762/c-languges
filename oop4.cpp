#include<iostream>
using namespace std;

class Flight{
int  Flightnumber;
string  Destination;
float Distance;
float  Fuel;

void  CALFUEL()
    {
        if (Distance <= 1000)
        {
            Fuel = 500;
        }
        else if (Distance > 1000 && Distance <= 2000)
        {
            Fuel = 1100;
        }
        else
        {
            Fuel = 2200;
        }
    }

public:
void  FEEDINFO()
{
    cout<<"enter the  FlightNumber:";
    cin>>Flightnumber;
    cout<<"enter the   Destination:";
    cin>>Destination;
    cout<<"enter the Distance :";
    cin>>Distance;

    CALFUEL();
    
}

void SHOWINFO()
{
    cout<<"Flightnumber\t  Destination\t  Distance\t  CALFUEL\t"<<endl;
   cout<<Flightnumber<<"\t" << Destination<<"\t" << Distance<<"\t"<<CALFUEL<<"\t"<<endl;


} 

};
int main()
{
    Flight f;
    f.FEEDINFO();
    f.SHOWINFO();
}

