#include <iostream>

using namespace std;

void conversion(int rupee,double dollor)
{
    double convert = rupee*dollor;
    cout << "Total of coverted dollor into rupee is :- " << convert << endl;
}

void conversion(int feet,int inches)
{
    double convert = feet*inches;
    cout << "Total of coverted feet into inches is :- " << convert << endl;
}

void conversion(double centimeter,int inches)
{
    double convert = centimeter*inches;
    cout << "Total of coverted inches into centimeter is :- " << convert << endl;
}

void conversion(float celsius)
{
    float convert = (celsius*9/5)+32;
    cout << "Total of coverted celsius into fahrenheit is :- " << convert << endl;
}

int main()
{
    conversion(38,82.5);
    conversion(5,12);
    conversion(2.54,10);
    conversion(101);
    return 0;
}