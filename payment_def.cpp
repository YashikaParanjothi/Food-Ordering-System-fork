#include<iostream>
#include<cstdlib>
#include<ctime>
#include"payment.h"
using namespace std;
void payment::payment_method()
{
    ptr2.total=total;
    int n=1,ch;
    while(n!=0)
    {   cout<<"\t\tPAYMENT MODE"<<endl;
        cout<<"\t\t1.CASH ON DELIVERY"<<endl;
        cout<<"\t\t2.ONLINE PAYMENT"<<endl;
        cout<<"\t\tEnter your payment mode(1/2):";
        cin>>ch;
        switch(ch)
        {
            case 1: if(ptr1.address_conf())
                    {
                        cout<<"\t\tYour order #"<<order_id<<" was delivered under 30 minutes!"<<endl;
                        cout<<"\t\t*****Thanks for using Hideout-The cafe*****"<<endl;
                        cout<<"\t\t*****ENJOY THE TASTE!!! HAVE A BLAST!!!*****"<<endl;
                    }
                    else
                    {
                        ptr1.set_address();
                        cout<<"\t\tYour order #"<<order_id<<" was delivered under 30 minutes!"<<endl;
                        cout<<"\t\t*****Thanks for using Hideout-The cafe*****"<<endl;
                        cout<<"\t\t*****ENJOY THE TASTE!!! HAVE A BLAST!!!*****"<<endl;
                    }
                    n=0;
                    break;
            case 2: if(ptr2.account_conf())
                    {
                        ptr2.generate_otp();
                    }
                    else
                    {
                        ptr2.set_account();
                        ptr2.generate_otp();
                    }
                    n=0;
                    break;
            default:cout<<"\t\tINVALID INPUT!!"<<endl;
        }
    }
}

