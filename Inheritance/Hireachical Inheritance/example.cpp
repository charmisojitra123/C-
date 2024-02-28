#include <iostream>

using namespace std;

class base
{
    public:
    int a,b;

    void addData()
    {
        cout << "Enter value of a :- ";
        cin >> a;
        cout << "Enter value of b :- ";
        cin >> b;
    }
};

class derived1 : public base
{
    public:
    void sum()
    {
        cout << "Sum of the value is :- " << a + b << endl;
    }
};

class derived2 : public base
{
    public:
    void multiple()
    {
        cout << "Multiple of the value is :- " << a * b << endl;
    }
};

int main()
{
    derived1 obj1;
    derived2 obj2;
    
    obj1.addData();
    obj1.sum();

    obj2.addData();
    obj2.multiple();

    return 0;
}