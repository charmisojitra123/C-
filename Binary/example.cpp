#include <iostream>

using namespace std;

class complex
{
    private:
    int x,y;

    public:
    complex()
    {  
        x=0;
        y=0;
    }

    complex(int a,int b)
    {
        x=a;
        y=b;
    }

    void display()
    {
        cout << "The real part :- " << x << endl;
        cout << "The imaginary part :- " << y << endl;
        cout << "Sum is :- " << x+y << endl;
    }

    complex operator+(complex c)
    {
        complex temp;
        temp.x = x+c.x;
        temp.y = y+c.y;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1=complex(3,6);
    c2=complex(2,4);

    cout << "First Input is " << endl;
    c1.display();

    cout << "\nSecond Input is " << endl;
    c2.display();

    cout << "\nFinal Output " << endl;
    c3 = c1+c2;
    c3.display();

    return 0;
}