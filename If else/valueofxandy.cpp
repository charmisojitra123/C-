#include <iostream>

using namespace std;

int main()
{
    int x,y;

    cout << "Enter value of x :- ";
    cin >> x;
    cout << "Enter value of y :- ";
    cin >> y;

    if(x<2000 || x>3000)
    {
        cout << "Value of x is :- " << x << endl;
    }
    else
    {
        cout << "Value of x is invaild" << endl;
    }
    if(y>100 && y<500)
    {
        cout << "Value of y is :- " << y << endl;
    }
    else
    {
        cout << "Value of y is invaild";
    }

    return 0;
}