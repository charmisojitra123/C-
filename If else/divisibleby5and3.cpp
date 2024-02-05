#include <iostream>

using namespace std;

int main()
{
    int num;
     cout << "Enter the number :- ";
     cin >> num;

     if(num%5==0 && num%3==0)
     {
        cout << "Number is divisible by 5 & 3." << endl;
     }
     else
     {
        cout << "Number is not divisible by 5 & 3." << endl;
     }

     return 0;
}