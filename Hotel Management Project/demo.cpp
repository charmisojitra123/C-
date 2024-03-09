
#include <iostream>
using namespace std;

class cafe
{

public:
    string name;
    double number;

    int info()
    {
        cout << "\nEnter Customer name :- ";
        cin >> name;
        cout << "Mobile Number :- ";
        cin >> number;
    }
};

int calc(int p)
{

    float discount;
    float sgst, cgst;
    float bill;

    discount = (p * 10) / 100;
    sgst = (p * 2.5) / 100;
    cgst = (p * 2.5) / 100;
    bill = p - discount + sgst + cgst;
    cout << "\nTotal bill = " << p << endl;
    cout << "Discount = " << discount << endl;
    cout << "SGST = " << sgst << endl;
    cout << "CGST = " << cgst << endl;
    cout << "Payable Amount = " << bill << endl;
    cout << "\nThank you visit again." << endl;
}

int main()
{
    cafe b;
    int ch;
    int qty[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int price;
    int amount;
    int total = 0;

    cout << "\nWhat you want to order --------->" << endl;
    cout << "\n1.Soup ...........................120 Rs" << endl;
    cout << "\n2.Pizza ..........................260 Rs" << endl;
    cout << "\n3.Burger .........................230 Rs" << endl;
    cout << "\n4.Ramen Noodels ..................340 Rs" << endl;
    cout << "\n5.Rice ...........................210 Rs" << endl;
    cout << "\n6.Mocktail .......................130 Rs" << endl;
    cout << "\n7.Ice Cream ......................110 Rs" << endl;
    cout << "\n8.Cheesecake .....................240 Rs" << endl;
    cout << "\nConfirm Order press 0" << endl;
    b.info();
    do
    {

        cout << "\nEnter your order: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter qty: ";
            cin >> n[0];
            amount = 120 * n[0];
            total += amount;
            qty[0] += n[0];
            break;

        case 2:
            cout << "Enter qty: ";
            cin >> n[1];
            amount = 260 * n[1];
            total += amount;
            qty[1] += n[1];
            break;

        case 3:
            cout << "Enter qty: ";
            cin >> n[2];
            amount = 230 * n[2];
            total += amount;
            qty[2] += n[2];
            break;

        case 4:
            cout << "Enter qty: ";
            cin >> n[3];
            amount = 340 * n[3];
            total += amount;
            qty[3] += n[3];
            break;

        case 5:
            cout << "Enter qty: ";
            cin >> n[4];
            amount = 210 * n[4];
            total += amount;
            qty[4] += n[4];
            break;

        case 6:
            cout << "Enter qty: ";
            cin >> n[5];
            amount = 140 * n[5];
            total += amount;
            qty[5] += n[5];
            break;

        case 7:
            cout << "Enter qty: ";
            cin >> n[6];
            amount = 110 * n[6];
            total += amount;
            qty[6] += n[6];
            break;

        case 8:
            cout << "Enter qty: ";
            cin >> n[7];
            amount = 240 * n[7];
            total += amount;
            qty[7] += n[7];
            break;

        case 0:
            cout << "\nBill Please." << endl;

            break;

        default:
            cout << "Wrong choice" << endl;
            break;
        }

    } while (ch != 0);

    cout << "\nItem......" << "\t" << "Qty" << "\t" << "Price" << "\t" << "total" << endl;
    if (qty[0] != 0)
        cout << "\n1.Soup" << "\t\t" << qty[0] << "\t" << "120" << "\t" << 120 * qty[0] << endl;
    if (qty[1] != 0)
        cout << "\n2.Pizza" << "\t\t" << qty[1] << "\t" << "130" << "\t" << 130 * qty[1] << endl;
    if (qty[2] != 0)
        cout << "\n3.Burger" << "\t" << qty[2] << "\t" << "120" << "\t" << 120 * qty[2] << endl;
    if (qty[3] != 0)
        cout << "\n4.Ramen Noodels" << "\t" << qty[3] << "\t" << "140" << "\t" << 140 * qty[3] << endl;
    if (qty[4] != 0)
        cout << "\n5.Rice" << "\t\t" << qty[4] << "\t" << "130" << "\t" << 130 * qty[4] << endl;
    if (qty[5] != 0)
        cout << "\n6.Mocktail" << "\t" << qty[5] << "\t" << "120 " << "\t" << 120 * qty[5] << endl;
    if (qty[6] != 0)
        cout << "\n7.Ice Cream" << "\t" << qty[6] << "\t" << "130" << "\t" << 130 * qty[6] << endl;
    if (qty[7] != 0)
        cout << "\n8.Cheesecake" << "\t" << qty[7] << "\t" << "130" << "\t" << 130 * qty[7] << endl;

    calc(total);
}