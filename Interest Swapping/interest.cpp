#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    float interest;

    cout << "Enter the amount of a: ";
    cin >> a;
    cout << "Enter the amount of b: ";
    cin >> b;
    cout << "Enter the amount of c: ";
    cin >> c;

    interest = (a * b * c) / 100;
    cout << "The interest is: " << interest;
}