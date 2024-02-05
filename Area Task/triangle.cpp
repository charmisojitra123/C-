#include <iostream>

using namespace std;

int main()
{
    int base,height;
    float area;

    cout<<"Enter the base of the triangle: ";
    cin>>base;
    cout<<"Enter the height of the triangle: ";
    cin>>height;

    area=base*height/2;
    cout<<"The area of the triangle is: "<<area;
}