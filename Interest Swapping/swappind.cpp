#include <iostream>
using namespace std;
int main()
{
    int a,b,c;

    cin>>a;  
    cout<<a<<endl;

    cin>>b; 
    cout<<endl;

    c=a;
    a=b;
    b=c;
    
    cout<<"Swapped value of a :- "<<a<<endl;
    cout<<"Swapped value of b :- "<<b;

    return 0;

}