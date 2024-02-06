#include <iostream>

using namespace std;

class batsman
{
    private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg=0;
    float calcavg()
    {
        batavg=runs/(innings-notout);
        return batavg;
    }

    public:
    void readdata()
    {
        cout<<"Enter the batsman code: ";
        cin>>bcode;
        cout<<"Enter the batsman name: ";
        cin>>bname;
        cout<<"Enter the number of innings: ";
        cin>>innings;
        cout<<"Enter the number of not outs: ";
        cin>>notout;
        cout<<"Enter the number of runs: ";
        cin>>runs;
        batavg=calcavg();  
    }
    void displaydata()
    {
        cout << "\n\nShowdata:- ";
        cout << "\nBatsman Code: "<<bcode<<endl;
        cout << "Batsman Name: "<<bname<<endl;
        cout << "Number of Innings: "<<innings<<endl;
        cout << "Number of Not Outs: "<<notout<<endl;
        cout << "Number of Runs: "<<runs<<endl;
        cout << "Batsman Average: "<<batavg<<endl;
    }
};

int main()
{
    batsman b1;
    b1.readdata();
    b1.displaydata();
    return 0;
}