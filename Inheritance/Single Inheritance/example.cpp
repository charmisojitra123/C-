#include <iostream>

using namespace std;

class base
{
    public:
    int a,b,total=0;
};

class derived:public base
{
    public:
    void totaldata()
    {
        a = 10;
        total = a + b;
    }
};

int main()
{
    derived obj;
    obj.b = 20;
    obj.totaldata();
    cout << "Total is :- " << obj.total << endl;
    return 0;
}