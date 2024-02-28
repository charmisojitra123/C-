#include <iostream>

using namespace std;

int curbal;

class bankpin
{
    public:
    int pin=0;
    void getpin()
    {
        cout<<"Enter your pin :- ";
        cin >> pin;
    };

    void checkpin()
    {
        if(pin == 1111)
        {
            curbal = 20000;
            cout << "\nAccount Holder Name :- Charmi Sojitra" << endl;
            cout << "Account Number :- 123456" << endl;
            cout << "Current Balance :- Rs. " << curbal << endl;
        }
        else if(pin == 2222)
        {
            curbal = 15000;
            cout << "\nAccount Holder Name :- Darshan Dhameliya" << endl;
            cout << "Account Number :- 246810" << endl;
            cout << "Current Balance :- Rs. " << curbal << endl;
        }
        else if(pin == 3333)
        {
            curbal = 10000;
            cout << "\nAccount Holder Name :- Parth Malani" << endl;
            cout << "Account Number :- 135791" << endl;
            cout << "Current Balance :- Rs. " << curbal << endl;
        }
        else if(pin == 4444)
        {
            curbal = 5000;
            cout << "\nAccount Holder Name :- Anuj Rathor" << endl;
            cout << "Account Number :- 654321" << endl;
            cout << "Current Balance :- Rs. " << curbal << endl;
        }
        else
        {
            cout<<"Your pin is incorrect";
        }
    }

     void details()
     {
        int choice;
        cout << "\nSelect the No. to view the details ------->" << endl;
        cout << "1. Withdrawal" << endl;
        cout << "2. Deposite" << endl;
        cout << "3. Current Balance" << endl;
        cout << "4. Loan & EMI" << endl;
        cout << "0. Exit" << endl;     
     }
    
};


int main()
{
    bankpin obj;
    obj.getpin();
    obj.checkpin();
     
    int choice, withdraw, withdrawalbal=0, deposite, depositebal=0, dbal, wbal;
        do
        {
            obj.details();
            cout << "\n";
            cin >> choice;
            switch(choice)
            {
                case 1:
                cout << "\nEnter the amount you want to withdraw :- ";
                cin >> withdraw;

                withdrawalbal = curbal - withdraw;
                curbal = withdrawalbal;

                cout << "Balance after withdrawal is :- " << withdrawalbal << endl;
                cout << "\n";
                break;

                case 2:
                cout << "\nEnter the amount you want to Deposite :- ";
                cin >> deposite;

                depositebal = curbal + deposite;

                cout << "Balance after Deposite is :- " << depositebal << endl;
                cout << "\n";
                break;

                case 3:
                dbal = curbal + depositebal;
                wbal = curbal - withdrawalbal;

                
                cout << "\nYour Current Balance is :- " << curbal << endl;
                
                cout << "\n";
                break;

                 case 0:
                 break;
            }
        }

        while(choice != 0);
    cout << "hwyy";
    // bankinfo info;
    // info.getinfo();
    // info.checkinfo();

    return 0;
}



// class bankinfo
// {
//     public:
//     char name[20];
//     int accno;
//     void getinfo()
//     {
//         cout<<"Enter your name :- ";
//         cin >> name;
//         cout<<"Enter your account number :- ";
//         cin >> accno;
//     }

//     void checkinfo()
//     {
//         cout << "\nAccount Holder Name :- " << name << endl;
//         cout << "Account Number :- " << accno << endl;
//         cout << "Initial Balance :- Rs. 1" << endl;
//     }

// };