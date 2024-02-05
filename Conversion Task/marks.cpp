#include <iostream>
using namespace std;
int main ()
{
    int eng,hindi,guj,total;
    float per;

    cout << "Enter marks in English: "; 
    cin >> eng;
    cout << "Enter marks in Hindi: "; 
    cin >> hindi;
    cout << "Enter marks in Gujarati: ";
    cin >> guj;

    total = eng + hindi + guj;
    per = total*100 / 300;
    cout << "Total: " << total << endl;
    cout << "Percentage: " << per << endl;
    return 0;
}