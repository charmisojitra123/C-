#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    if(n==0)
    {
        cout << "Number is Zero.";
    }
    else if(n>0)
    {
        cout << "Number is Positive.";
    }
    else
    {
        cout << "Number is Negative.";
    }

    return 0;
}