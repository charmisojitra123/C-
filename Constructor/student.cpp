#include <iostream>

using namespace std;

class student
{
    int admno;
    char sname[20];
    float eng,math,science;
    float total;
    float ctotal()
    {
        total = eng + math  + science;
        return total;
    }

    public:
    student();
    void TakeData()
    {
        cout << "Student's Admission Number: " << admno << endl;
        cout << "Student's Name: " << sname << endl;
        cout << "Student's English Marks: " << eng << endl;
        cout << "Student's Math Marks: " << math << endl;
        cout << "Student's Science Marks: " << science << endl;
        cout << "Student's Total Marks: ";
        total=ctotal();
        cout << total << endl;
    }
};

student::student()
{
    cout << "Enter the Student's Admission Number: ";
    cin >> admno;
    cout << "Enter the Student's Name: ";
    cin >> sname;
    cout << "Enter the Student's English Marks: ";
    cin >> eng;
    cout << "Enter the Student's Math Marks: ";
    cin >> math;
    cout << "Enter the Student's Science Marks: ";
    cin >> science;
}

int main()
{
    student student;
    student.TakeData();
    return 0;
}



















