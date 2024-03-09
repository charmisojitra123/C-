#include <iostream>

using namespace std;

class menu
{
    public:
    void hotelmenu()
    {
        cout << "\nWhat you want to order --------->" << endl;
        cout << "1. Soup\t\t\t\tRs. 120" << endl;
        cout << "2. Pizza\t\t\tRs. 320" << endl;
        cout << "3. Burger\t\t\tRs. 280" << endl;
        cout << "4. Coffee\t\t\tRs. 130" << endl;
        cout << "5. Rice\t\t\t\tRs. 260" << endl;
        cout << "6. Mocktail\t\t\tRs. 180" << endl;
        cout << "7. Ice Cream\t\t\tRs. 110" << endl;
        cout << "8. Cheesecake\t\t\tRs. 240" << endl;
        cout << "0. Please give the bill." << endl;
    }

    void totalbill()
    {
        cout << "Soup" << soupqty << souptotal;
    }
};

int main()
{
    menu obj;

    int choice,soupqty,souptotal,pizzaqty,pizzatotal,burgerqty,burgertotal,coffeeqty,coffeetotal,riceqty,ricetotal,mocktailqty,mocktailtotal,icecreamqty,icecreamtotal,cheesecakeqty,cheesecaketotal;
    do
    {
        obj.hotelmenu();
        cout << "\n";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout << "\nEnter the Quantity you want to order :- ";
            cin >> soupqty;
            souptotal = soupqty*120;
            break;

            case 2:
            cout << "\nEnter the Quantity you want to order :- ";
            cin >> pizzaqty;
            pizzatotal = pizzaqty*320;
            break;

            case 3:
            cout << "\nEnter the Quantity you want to order :- ";
            cin >> burgerqty;
            burgertotal = burgerqty*280;
            break;

            case 4:
            cout << "\nEnter the Quantity you want to order :- ";
            cin >> coffeeqty;
            coffeetotal = coffeeqty*130;
            break;

            case 5:
            cout << "\nEnter the Quantity you want to order :- ";
            cin >> riceqty;
            ricetotal = riceqty*260;
            break;

            case 6:
            cout << "\nEnter the Quantity you want to order :- ";
            cin >> mocktailqty;
            mocktailtotal = mocktailqty*180;
            break;

            case 7:
            cout << "\nEnter the Quantity you want to order :- ";
            cin >> icecreamqty;
            icecreamtotal = icecreamqty*110;
            break;

            case 8:
            cout << "\nEnter the Quantity you want to order :- ";
            cin >> cheesecakeqty;
            cheesecaketotal = cheesecakeqty*240;
            break;

            case 0:
            cout << "\nThank you for your order,Please visit again !!!!";
            break;
        }
    }
    while(choice != 0);



    
    obj.totalbill();
    
    
    return 0;
}