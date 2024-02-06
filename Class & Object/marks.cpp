#include <iostream>

using namespace std;

class student
{
    private:
    int admno;
    char sname[20];
    float eng,math,science,total;
    float ctotal()
    {
        total  = eng + math + science;
        return total;
    }

    public:
    void Takedata()
    {      
        cout<<"Enter the admno: ";
        cin>>admno;
        cout<<"Enter the sname: ";
        cin>>sname;
        cout<<"Enter the marks of english: ";
        cin>>eng;
        cout<<"Enter the marks of math: ";
        cin>>math;
        cout<<"Enter the marks of science: ";
        cin>>science;

        total=ctotal();
        cout<<"Total marks: "<<total<<endl;
    }
    void Showdata()
    {
        cout<<"\n\nShow Data:- ";
        cout<<"\nAdmno: "<<admno<<endl;
        cout<<"Sname: "<<sname<<endl;
        cout<<"English: "<<eng<<endl;
        cout<<"Math: "<<math<<endl;
        cout<<"Science: "<<science<<endl;
        cout<<"Total marks obtained: "<<total<<endl;
    }
};

int main()
{
    student details;
    details.Takedata();
    details.Showdata();

    return 0;
}