#include <iostream>

using namespace std;

int main()
{
    int units;
    float total,charges,amt,surcharges,sur;

    cout << "Enter the units: ";
    cin >> units;

    if(units <= 100)
    {
        total = units*0.6;
        cout << "Total: " << total << endl;
    }
    else if(units <= 300)
    {
        total = units*0.8;
        cout << "Total: " << total << endl;
    }
    else
    {
        total = units*0.9;
        cout << "Total: " << total << endl;
    }

    charges = total+50;
    cout << "Charges: " << charges << endl;

    amt = total+charges;
    cout << "Total Amount is: " << amt << endl;
    if(amt > 300)
    {
        sur = amt*15/100;
        surcharges = charges+sur;
        cout << "Surcharge: " << sur << endl;
    }

    return 0;
}