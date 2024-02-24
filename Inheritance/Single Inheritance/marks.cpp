#include <iostream>

using namespace std;

class base
{
    public:
    float id,eng[3],hindi[3],guj[3],total[3],per[3];
    char name[20];

    void setdata()
    {
        for(int i=0;i<3;i++)
        {
            cout << "\nEnter the student ID :- ";
            cin >> id;
            cout << "Enter the name :- ";
            cin >> name;
            cout << "Enter the marks in English :- ";
            cin >> eng[i];
            cout << "Enter the marks in Hindi :- ";
            cin >> hindi[i];
            cout << "Enter the marks in Gujarati :- ";
            cin >> guj[i];
        }
    }
};

class derived : public base
{
    public:
    void totalData()
    {
        for(int i=0;i<3;i++)
        {
            cout << "\n";
            total[i] = eng[i] + hindi[i] + guj[i];   
            cout << "Total marks obtained is :-" << total[i] << endl;       
            per[i] = total[i]/3;
            cout << "Percentage obtained is :-" << per[i] << endl;
        }
    }

};

int main()
{
    derived obj;
    obj.setdata();
    obj.totalData();


    return 0;
}