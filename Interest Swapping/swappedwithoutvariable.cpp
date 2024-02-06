#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value of a :- ";
    cin>>a;
    cout<<"Enter value of b :- ";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"Swapped value of a :- "<<a<<endl;
    cout<<"Swapped value of b :- "<<b<<endl;

    return 0;
}