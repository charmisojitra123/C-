#include <iostream>

using namespace std;

void area(double pie,int radius)
{
    double area = pie * radius * radius;
    cout << "Area of Circle is :- " << area << endl;
}

void area(int side)
{
    int area = side*side;
    cout << "Area of Square is :- " << area << endl;
}

void area(int length,int width)
{
    int area = length*width;
    cout << "Area of Rectangle is :- " << area << endl;
}

void area(double height,double base)
{
    double area = height*base/2;
    cout << "Area of Triangle is :- " << area << endl;
}

int main()
{
    area(3.14,20);
    area(20);
    area(30,10);
    area(26.0,37.0);
    
    return 0;
}