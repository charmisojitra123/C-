#include <iostream>

using namespace std;

class test
{
    int testcode;
    char Description[20];
    int NoCandidates;
    int CenterReqd;
    int CALCNTR()
    {
        CenterReqd = NoCandidates/(100+1);
        return CenterReqd;
    }

    public:
    test();
    void SCHEDULE()
    {
        cout << "Test code: " << testcode << endl;
        cout << "Description: " << Description << endl;
        cout << "No of Candidate: " << NoCandidates << endl;
        cout << "CenterReqd: ";
        CenterReqd=CALCNTR();
        cout << CenterReqd << endl;
    }
};

test::test()
{
    cout << "Enter the Test code: ";
    cin >> testcode;
    cout << "Enter the Description: ";
    cin >> Description;
    cout << "Enter the No of Candidate: ";
    cin >> NoCandidates;
}

int main()
{
    test test;
    test.SCHEDULE();
    return 0;
}
