#include<iostream>
#include<cstdlib>
#include<ctime>
#include"card.h"
using namespace std;
bool card::account_conf()
{
    int c,ch;
    cout<<"\t\tHave you already given your account details(yes=1/no=0)?";
    cin>>c;
    if(c==1)
    {
        cout<<"\t\tDo you want to continue with the previous account(yes=1/no=0)?";
        cin>>ch;
        if(ch==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {

        return false;
    }
}
void card::set_account()
{
    cout<<"\t\tENTER THE FLLOWING:"<<endl;
    do
    {
    cout<<"\t\tCARD NUMBER:";
    cin>>card_no;
    }while(card_no%10000000000000000>=0 && card_no%10000000000000000<=9);
    cout<<"\t\tNAME ON CARD:";
    cin>>name;
    cout<<"\t\tVALID THRU(MM/YY):";
    cin>>expiry_date;
    cout<<"\t\tWe will securely save this card for a faster payment experience(CVV will not be saved)."<<endl;
    do
    {
    cout<<"\t\tCVV:";
    cin>>cvv;
    }while(cvv%1000>=0 && cvv%1000<=9);
}
void card::generate_otp()
{
    int otp,randno,ch=1;
    while(ch!=0)
    {
        srand(time(0));
        randno=rand()%1000000;
        cout<<"\t\tOTP is "<<randno<<" for Rs."<<total<<". DO not share OTP for security reasons."<<endl;
        cout<<"\t\tPlease enter the correct 6-digit OTP to verify:";
        cin>>otp;
        if(otp==randno)
        {
            cout<<"\t\tPAYMENT APPROVED!!!!"<<endl;
            cout<<"\t\tYour order was delivered under 30 minutes!"<<endl;
            cout<<"\t\t*****Thanks for using Hideout-The cafe*****"<<endl;
            cout<<"\t\t*****ENJOY THE TASTE!!! HAVE A BLAST!!!*****"<<endl;
            ch=0;
        }
        else
        {
            cout<<"\t\tINVALID OTP,PAYMENT DECLINED!!!"<<endl;
            cout<<"\t\tDo you want to re-enter the OTP(yes=1/no=0)?";
            cin>>ch;
        }
    }
}

