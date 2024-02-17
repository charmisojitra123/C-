#include <iostream>

using namespace std;

int main()
{
    float salary;
    float hra,da,total;

    cout << "Enter the Salary: ";
    cin >> salary;

    if (salary <= 5000)
    {
        hra = salary * 8 / 100;
        da = salary * 20 / 100;
        total = salary + hra + da;
        cout << "HRA is :- " << hra << endl;
        cout << "DA :- " << da << endl;
        cout << "Gross Salary :- " << total << endl;
    }
    else if (salary <= 10000)
    {
        hra = salary * 12 / 100;
        da = salary * 30 / 100;
        total = salary + hra + da;
        cout << "HRA is :- " << hra << endl;
        cout << "DA :- " << da << endl;
        cout << "Gross Salary :- " << total << endl;
    }
    else if (salary <= 15000)
    {
        hra = salary * 15 / 100;
        da = salary * 40 / 100;
        total = salary + hra + da;
        cout << "HRA is :- " << hra << endl;
        cout << "DA :- " << da << endl;
        cout << "Gross Salary :- " << total << endl;
    }
    else
    {
        hra = salary * 20 / 100;
        da = salary * 50 / 100;
        total = salary + hra + da;
        cout << "HRA is :- " << hra << endl;
        cout << "DA :- " << da << endl;
        cout << "Gross Salary :- " << total << endl;
    }

    return 0;
}