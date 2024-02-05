#include <iostream>

using namespace std;

int main()
{
    int rate,qty,amt,dis,billamt,gst,netbill;
    cout<<"Enter the rate of the item: ";
    cin>>rate;
    cout<<"Enter the quantity of the item: ";
    cin>>qty;

    amt=rate*qty;
    //cout<<"The amount is: "<<rate*qty<<endl;

    dis=amt*5/100;
    billamt=amt-dis;
    //cout<<"The discount is: "<<billamt;

    gst=billamt*18/100;
    netbill=billamt+gst;

    cout<<"Rate\tQty\tAmount\tDis\tBillamt\tGst\tNetbill"<<endl;
    cout<<"\t"<<rate"\t"<<qty"\t"<<amt"\t"<<dis"\t"<<billamt"\t"<<gst"\t"<<netbill;

    return 0;
}