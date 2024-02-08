#include <iostream>

using namespace std;

class report
{
    private:
    int adno;
    char name[20];
    float marks[5];
    float average=0;
    void GETAVG()
    {
        for(int i=0;i<5;i++)
        {
            average=average+marks[i];
        }
        average=average*100/500;
    }
    
    public:
    void READINFO() 
    {
        cout<<"Enter the adno: ";
        cin>>adno;
        cout<<"Enter the name: ";
        cin>>name;
        for(int i=0;i<5;i++)
        {
            cout << "Enter the marks of subject " << i+1 << " :- ";
            cin>>marks[i];
        }
        GETAVG();
    }

    DISPLAYINFO()
    {
        cout << "\n\nDisplay Info" << endl;
        cout << "Admin No: " << adno << endl;
        cout << "Name: " << name << endl;
        for(int i=0;i<5;i++)
        {
            cout << "Marks of subject " << i+1 << " :- " << marks[i] << endl;
        }
        cout << "Average: " << average << endl;
    }
};

int main()
{
    report r;
    r.READINFO();
    r.DISPLAYINFO();
    return 0;
}