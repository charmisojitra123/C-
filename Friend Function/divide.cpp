#include <iostream>

using namespace std;

class complex
{
    int x,y;

    public:
    friend complex sumnumber(complex o1,complex o3);
    void setdata(int a,int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "Value of a is :- " << x << endl;
        cout << "Value of b is :- " << y << endl;
    }

    void displayyyy()
    {
        cout << "\nDivide of a is :- " << x << endl;
        cout << "Divide of b is :- " << y << endl;
    }
};

complex sumnumber(complex o1,complex o2)
{
    complex o3;
    o3.setdata((o1.x / o2.x),(o1.y / o2.y));
    return o3;
}

int main()
{
    complex o1,o2,o3;
    o1.setdata(27,40);
    o1.display();

    o2.setdata(3,5);
    o2.display();

    o3 = sumnumber(o1,o2);
    o3.displayyyy();
    return 0;
}