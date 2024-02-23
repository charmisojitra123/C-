#include <iostream>

using namespace std;

class complex
{
    int x,y;

    public:
    void addData()
    {
        cout << "Enter the value of x:- ";
        cin >> x;
        cout << "Enter the value of y:- ";
        cin >> y;
    }

    void display()
    {
        cout << "Value of x is :- " << x << endl;
        cout << "Value of y is :- " << y << endl;
    }
};

int main()
{
    complex obj[3];
    for(int i = 0; i < 3; i++)
    {
        obj[i].addData();
        obj[i].display();
    }

    return 0;
}