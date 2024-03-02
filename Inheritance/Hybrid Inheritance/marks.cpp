#include <iostream>

using namespace std;

float eng,guj,hindi;

class info
{
    public:
    int id;
    char name[20];

    void studentinfo()
    {
        cout << "Enter the student ID :- ";
        cin >> id;
        cout << "Enter the student name :- ";
        cin >> name;
        cout << "Enter the student marks of English :- ";
        cin >> eng;
        cout << "Enter the student marks of Gujarati :- ";
        cin >> guj;
        cout << "Enter the student marks of Hindi :- ";
        cin >> hindi;
    }
};

class derivedinfo : public info
{
    public:
    void displayinfo()
    {
        cout << "\nStudent ID is :- " << id << endl;
        cout << "Student Name is :- " << name << endl;
        cout << "Student marks of English is :- " << eng << endl;
        cout << "Student marks of Gujarati is :- " << guj << endl;
        cout << "Student marks of Hindi is :- " << hindi << endl;
    }
};

class marks 
{
    public:
    float total,per;
    void studenttotal()
    {
        total = eng + guj + hindi;
        per = total / 3;
    }

};

class studentderived : public marks,public derivedinfo
{
    public:
    void displaytotal()
    {
        cout << "Student total is :- " << total << endl;
        cout << "Student percentage is :- " << per << endl;
    }
    
};

int main()
{
    studentderived obj[3];
    for(int i=0; i<3; i++)
    {
        obj[i].studentinfo();
        obj[i].studenttotal();
    }

    for(int i=0; i<3; i++)
    {
        obj[i].displayinfo();
        obj[i].displaytotal();
    }

    return 0;
}