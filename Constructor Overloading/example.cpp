#include <iostream>

using namespace std;

class deploy
{
    int a,b;

    public:
    deploy(int a1,int a2)
    {   
        a=a1;
        b=a2;
    }

    deploy(int a1)
    {
        a=a1;
        b=0;
    }

    void printdata()
    {
        cout<<a<<" "<<b<<endl;
    }

};

int main()
{
    deploy dep(10,20);
    dep.printdata();
    
    deploy dep1(10);
    dep1.printdata();
    return 0;
}