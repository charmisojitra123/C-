#include <iostream>

using namespace std;

int main()
{
   int feet,inches=12,total=0;

    cout << "Enter feet: ";
    cin >> feet;

    total=feet*inches;
    cout << "Total inches: " << total;

    return 0;
}