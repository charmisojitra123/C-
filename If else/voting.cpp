#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age > 17)
    {
        cout << "You can vote!";
    }
    else
    {
        if(age <= 0)
        {
            cout << "Please enter valid age!";
        }
        else
        {
            cout << "You cannot vote!";
        }        
    }

    return 0;
}