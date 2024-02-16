#include <iostream>

using namespace std;

void sum(int a, int b)
{
    cout << a + b << endl;
}

void sum(double a, int b)
{
    cout << a + b;
}

int main()
{
    sum(10,20);
    sum(20.0,30);

    return 0;
}