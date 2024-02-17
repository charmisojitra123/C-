#include <iostream>

using namespace std;

int main()
{
    float income,tax,total;

    cout << "Enter your income:- ";
    cin >> income;

    if(income <= 2500)
    {
        tax = income * 0 / 100;
        total = income+tax;
        cout << "Your tax is: " << tax << endl;
        cout << "Your total tax is: " << total << endl;
    }
    else if(income <= 5000)
    {
        tax = income * 10 / 100;
        total = income+tax;
        cout << "Your tax is: " << tax << endl;
        cout << "Your total tax is: " << total << endl;
    }
    else if(income <= 10000)
    {
        tax = income * 20 / 100;
        total = income+tax;
        cout << "Your tax is: " << tax << endl;
        cout << "Your total tax is: " << total << endl;
    }
    else
    {
        tax = income * 30 / 100;
        total = income+tax;
        cout << "Your tax is: " << tax << endl;
        cout << "Your total tax is: " << total << endl;
    }

    return 0;
}