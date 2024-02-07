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
            1000-distance;
            fuel = 500 * distance;
        }
        else if(distance <= 2000){
            fuel = 1100 * distance;
        }
        else {
            fuel = 2200 * distance;
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
        fuel=CALFUEL();
        cout << fuel;
    }
};

int main()
{
    flight info;
    info.FEEDINFO();
    return 0;
}