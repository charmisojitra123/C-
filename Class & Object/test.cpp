#include <iostream>

using namespace std;

class test{
    private:
    int Testcode;
    char Description;
    int NoCandidate;
    float CenterReqd=0;
    float CALCNTR(){
        CenterReqd=NoCandidate/100+1;
        return CenterReqd;
    }

    public:
    void SCHEDULE()
    {
        cout <<  "Enter the Test Code: ";
        cin >> Testcode;
        cout <<  "Enter the Description: ";
        cin >> Description;
        cout <<  "Enter the number of Candidates: ";
        cin >> NoCandidate;
        CenterReqd=CALCNTR();
        cout <<  CenterReqd;
    }

    void DISPTEST()
    {
         cout << "\n\nDisplay Test: "<< endl;
        cout << "Testcode: " << Testcode << endl;
        cout <<  "Description: " << Description << endl;
        cout <<  "NoCandidate: " << NoCandidate << endl;
        cout <<  "CenterReqd: " << CenterReqd << endl;
    }

};

int main()
{
    test obj;
    obj.SCHEDULE();
    obj.DISPTEST();
    return 0;
}