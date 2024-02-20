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
    }

    complex operator-(complex c)
    {
        complex temp;
        temp.x = x-c.x;
        temp.y = y-c.y;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    c1=complex(30,40);
    c2=complex(10,20);

    cout << "\nFirst Output is " << endl;
    c1.display();

    cout << "\nSecond Output is " << endl;
    c2.display();    

    cout << "\nFinal Output is " << endl;
    c3 = c1-c2;
    c3.display();

    return 0;
}