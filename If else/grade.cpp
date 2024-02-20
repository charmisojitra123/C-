#include <iostream>

using namespace std;

int main()
{
    float eng,hindi,guj,total,per;
    cout << "Enter the marks of english :- ";
    cin >> eng;
    cout << "Enter the marks of hindi :- ";
    cin >> hindi;
    cout << "Enter the marks of gujarati :- ";
    cin >> guj;

    total = eng + hindi + guj;
    cout << "Total Marks obtained is :- " << total << endl;

    per = total*100/300;
    cout << "Percentage obtained :- " << per << endl;

    if(per > 75)
    {
        cout << "Grade A";
    }
    else if(per > 60)
    {
        cout << "Grade B";
    }
    else if(per > 45)
    {
        cout << "Grade C";
    }
    else if(per > 35)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}