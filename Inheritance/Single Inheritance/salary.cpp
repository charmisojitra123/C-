#include <iostream>

using namespace std;

class base
{
    int salary;

    public:
    int bonus,total=0;
    void setsalary(int salary1)
    {
        salary = salary1;
        cout << "Salary is :- " << salary << endl;
    }
    void totalsalary()
    {
        total = salary + bonus;
    }
};

class derived: public base
{
    public:
    
    void setbonus(int bonus1)
    {
        bonus = bonus1;
    }
};

int main()
{
    derived obj;
    obj.setsalary(10000);
    obj.setbonus(1500);
    obj.totalsalary();
   // cout << "Salary is :- " << obj.salary<< endl;
    cout << "Bonus is :- " << obj.bonus << endl;
    cout << "Total Salary is :- " << obj.total << endl;

    return 0;
}