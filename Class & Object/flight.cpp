#include <iostream>

using namespace std;

class flight{
    private:
    int flightNo;
    char destination[20];
    float distance;
    float fuel;
    float  CALFUEL()
    {
        if(distance <= 1000){
            fuel = 500 * distance/1000;
        }
        else if(distance <= 2000){
            fuel = 1100 * distance/1000;
        }
        else {
            fuel = 2200 * distance/1000;
        }
    }

    public:
    void FEEDINFO()
    {
        cout << "Flight No: ";
        cin >> flightNo;
        cout << "Destination: ";
        cin >> destination;
        cout << "Distance: ";
        cin >> distance;
        CALFUEL();
        cout << fuel;
    }
};

int main()
{
    flight info;
    info.FEEDINFO();
    return 0;
}