#include <iostream>

using namespace std;

class complex
{
    int x,y;

    public:
    complex(int a,int b)
    {
        x=a;
        y=b;
    }

    void display()
    {
        cout << "The real part :- " << x << endl;
        cout << "The imaginary part :- " << y << endl;
    }

    complex operator+()
    {
        x++;
        y++;
    }
};

int main()
{
    complex c1(10,20);
    +c1;
    c1.display();
    return 0;
}