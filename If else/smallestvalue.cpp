#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter the value of a :- ";
    cin >> a;
    cout << "Enter the value of b :- ";
    cin >> b;
    if(a<b)
    {
        cout << "The smallest value is :- " << a <<endl;
    }
    else
    {
        cout << "The smallest value is :- " << b <<endl;
    }

    return 0;
}