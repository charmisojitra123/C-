#include <iostream>
using namespace std;
int main()
{
    int a,b,c;

    cin>>a;  
    cout<<"Value of a :- "<<a<<endl;

    cin>>b; 
    cout<<"Value of b :- "<<b<<endl;

    c=a;
    a=b;
    b=c;
    
    cout<<"Swapped value of a :- "<<a<<endl;
    cout<<"Swapped value of b :- "<<b;

    return 0;

}