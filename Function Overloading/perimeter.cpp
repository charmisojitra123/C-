#include <iostream>

using namespace std;

void perimeter(double pie,int radius)
{
    double perimeter = 2*pie*radius;
    cout << "Perimeter of circle is :- " << perimeter << endl;
}

void perimeter(int side)
{
    double perimeter = 4*side;
    cout << "Perimeter of square is :- " << perimeter << endl;
}

void perimeter(int length,int width)
{
    int perimeter = 2*(length + width);
    cout << "Perimeter of rectangle is :- " << perimeter << endl;
}

void perimeter(int a,int b,int c)
{
    int perimeter = a + b + c;
    cout << "Perimeter of triangle is :- " << perimeter << endl;
}

int main()
{
    perimeter(3.14,20);
    perimeter(20);
    perimeter(30,40);
    perimeter(35,40,25);
    return 0;
}