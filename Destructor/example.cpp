#include <iostream>

using namespace std;

class deploy
{
    public:
    
    deploy()
    {
        cout<<"Contructor Executed"<<endl;
    };

    ~deploy()
    {
        cout<<"Destructor Executed"<<endl;
    };
};

int main()
{
    deploy deploy;
    return 0;
}