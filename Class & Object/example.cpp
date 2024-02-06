#include <iostream>

using namespace std;

class employee
{
    private:
    int c,d;

    public:
    int a,b;

    void showdata()
    {
        cout << a <<endl;
        cout << b <<endl;
        cout << c <<endl;
        cout << d <<endl;
    }

    void showint(int c1,int d1);

};

void employee::showint(int c1,int d1)
{
    c=c1;
    d=d1;
}

int main()
{
    employee details;
    details.a = 10;
    details.b = 20;

    details.showint(30,40);
    details.showdata();

    return 0;
}