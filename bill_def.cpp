#include<iostream>
#include<ctime>
#include<cstdlib>
#include"bill.h"
using namespace std;
bill::bill()
{
    delivery_fee=19;
    tax=14.92;
    coupon_amt=0;
}
void bill::generate_billID()
{
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generator;
    generator.seed(seed);
    billID=generator()%10000000;
}
void bill::total_cal()
{
    int ch;
    cout<<"\n\t\tCoupon will be applicable on orders above 400"<<endl;
    cout<<"\t\tDo you want to apply coupon(yes=1/no=0)?";
    cin>>ch;
    if(ch==1)
    {
        if(amount>=400)
        {
            coupon_amt=100;
        }
        else
        {
            coupon_amt=0;
        }
    }
    else
    {
        coupon_amt=0;
    }
    total=amount+delivery_fee+tax-coupon_amt;
    p.total=total;
}
void bill::display_bill()
{
    cout<<"\t\t________________________________________________"<<endl;
    cout<<"\t\t             BILL DETAILS                       "<<endl;
    cout<<"\t\tOrder ID:                        "<<order_id<<endl;
    cout<<"\t\tBill ID:                         "<<billID<<endl;
    cout<<"\t\tItem Total:                      Rs."<<amount<<endl;
    cout<<"\t\tDelivery Fee:                    Rs."<<delivery_fee<<endl;
    cout<<"\t\tTaxes and Charges:               Rs."<<tax<<endl;
    cout<<"\t\tTo Pay:                          Rs."<<total<<endl;
    cout<<"\t\t________________________________________________"<<endl;
    if(coupon_amt!=0)
    {
        cout<<"\t\tCOUPON APPLIED!"<<endl;
    }
}

