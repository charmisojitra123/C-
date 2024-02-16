#include <iostream>

using namespace std;

class batsman
{
    int bcode;
    char bname[20];
    float innings,notout,runs;
    float batavg;
    float calcavg()
    {
        batavg = runs/(innings-notout);
        return batavg;
    }

    public:
    batsman();
    void readdata()
    {
        cout << "Batsman's code: " << bcode << endl;
        cout << "Batsman's Name: " << bname << endl;
        cout << "Batsman's Innings: " << innings << endl;
        cout << "Batsman's Notout: " << notout << endl;
        cout << "Batsman's Runs: " << runs << endl;
        cout << "Batsman's Batavg: ";
        batavg=calcavg();
        cout << batavg << endl;
    }
};

batsman::batsman()
{
    cout << "Enter the Batsman's code: ";
    cin >> bcode;
    cout << "Enter the Batsman's Name: ";
    cin >> bname;
    cout << "Enter the Batsman's Innings: ";
    cin >> innings;
    cout << "Enter the Batsman's Notout: ";
    cin >> notout;
    cout << "Enter the Batsman's Runs: ";
    cin >> runs;
}

int main()
{
    batsman batsman;
    batsman.readdata();
    return 0;
}
