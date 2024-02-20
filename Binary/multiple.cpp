#include <iostream>

using namespace std;

class complex
{
    private:
    int x,y;

    public:
    complex()
    {
        x = 0;
        y = 0;
    }

    complex(int a,int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "The real part is :- " << x << endl;
        cout << "The imaginary part is :- " << y << endl;
        cout << "Total is :- " << x*y << endl;
        
    }

    complex operator*(complex c)
    {
        complex temp;
        temp.x = x*c.x;
        temp.y = y*c.y;

        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1 = complex(2,4);
    c2 = complex(3,5);

    cout << "\nFirst Ouptup is" << endl;
    c1.display();

    cout << "\nSecond Ouptup is" << endl;
    c2.display();

    cout << "\nFinal Ouptup is" << endl;
    c3 = c1*c2;
    c3.display();

    return 0;
}