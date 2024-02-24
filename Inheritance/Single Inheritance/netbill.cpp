#include <iostream>

using namespace std;

class base
{
    public:
    int qty,rate,amt,dis,billamt,gst,netbill;
    void getdata()
    {
        cout << "Enter the quantity of the item: ";
        cin >> qty;
        cout << "Enter the rate of the item: ";
        cin >> rate;
    }
};

class derived : public base
{
    public:
    void totalAmt()
    {
        amt =  qty * rate;
        dis = amt * 5/100;
        billamt = amt - dis;
        gst = billamt * 18 / 100;
        netbill = billamt + gst;
    }
    void display()
    {
        cout << "\nQuantity is :- " << qty << endl;
        cout << "Rate is :- " << rate << endl;
        cout << "Amount is :- " << amt << endl;
        cout << "Discount is :- " << dis << endl;
        cout << "Bill amount is :- " << billamt << endl;
        cout << "GST is :- " << gst << endl;
        cout << "Netbill amount is :- " << netbill << endl;
    }
};

int main()
{
    derived obj;
    obj.getdata();
    obj.totalAmt();
    obj.display();
    return 0;
}