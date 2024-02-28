#include <iostream>

using namespace std;

class base1
{
    protected:
    int a1;

    public:
    void setnumber1(int x1)
    {
        a1 = x1;
    }
};

class base2
{
    protected:
    int a2;

    public:
    void setnumber2(int x2)
    {
        a2 = x2;
    }
};

class derived: public base1, public base2
{
    public:
    void show()
    {
        cout << "The value of base1 is :- " << a1 << endl;
        cout << "The value of base2 is :- " << a2 << endl;
        cout << "The value of sum is :- " << a1 + a2 << endl;
    }
};

int main()
{
    derived obj;
    obj.setnumber1(10);
    obj.setnumber2(20);
    obj.show();

    return 0;
}