#include <iostream>

using namespace std;

class marksheet
{
    int id,marks;
    char name[20];

    public:
    void addData()
    {
        cout<<"\nEnter the id of the student: ";
        cin>>id;
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the marks of the student: ";
        cin>>marks;
    }
    void display()
    {
        cout << "\nStudent ID is :- " << id <<endl;
        cout << "Student Name is :- " << name <<endl;
        cout << "Student Marks is :- " << marks <<endl;
    }
};

int main()
{
    marksheet obj[3];
    for(int i=0;i<3;i++)
    {
        obj[i].addData();
    }

    for(int i=0;i<3;i++)
    {
        obj[i].display();
    }

    return 0;
}