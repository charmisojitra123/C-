#include <iostream>

using namespace std;

class base
{
    public:
    int a,b,sum;

    void addData()
    {
        cout << "Enter the value of a :- ";
        cin >> a;
        cout << "Enter the value of b :- ";
        cin >> b;
    }
};

class derived : public base
{
    public:
    void sumdata()
    {
        sum = a + b;
    }
};

class base2
{
    public:
    int c,d;
    void getdata()
    {
        cout << "Enter the value of c :- ";
        cin >> c;
        cout << "Enter the value of d :- ";
        cin >> d;
    }
};

class mainderived : public base2, public derived
{
    public:
    void multiple()
    {
        cout << endl;
        cout << "Value of a is :- " << a << endl;
        cout << "Value of b is :- " << b << endl;
        cout << "Sum of the value is :- " << sum << endl;
        cout << "Value of c is :- " << c << endl;
        cout << "Value of d is :- " << d << endl;
        cout << "Multiple of the value is :- " << c*d << endl;
    }
};

int main()
{
    mainderived obj;
    obj.addData();
    obj.getdata();
    obj.sumdata();
    obj.multiple();

    return 0;
}