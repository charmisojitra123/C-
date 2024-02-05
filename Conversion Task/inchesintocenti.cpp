#include <iostream>

using namespace std;

int main()
{
    int inches;
    float centi=2.54,total=0;

    cout<<"Enter inches: ";
    cin>>inches;

    total = inches*centi;
    cout<<"Total centimeter is : "<< total;
}