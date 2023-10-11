#include"customer.h"
#include<fstream>
#include<iostream>
#include<string.h>
#include"card.h"
using namespace std;
void customer::getdetails()
{
    char choice='y';
    getdata();
    cout<<"\n\t\tEnter Your Address(without space) : ";
    cin>>address;
    do
    {
    cout<<"\t\tEnter Your phone Number : ";
    cin>>phone;
    }while(phone%10000000000>=0 && phone%10000000000<=9);
    cout<<"\t\tEnter Your Email Id : ";
    cin>>email;
    cout<<"\t\tDo you want to add account details(y/n)? ";
    cin>>choice;
    if(choice=='y')
    {
        cd.set_account();
    }
    else
    {
        cout<<"\t\tOk...\n";
    }
}
void customer::display()
{
    cout<<"\n\n\t\tYour User_Id is : ";
    cout<<user_id;
    cout<<"\n\t\tYour Password is : ";
    cout<<password<<endl;
}
int customer::login()
{
    cout<<"\t\tEnter User_Id : ";
    cin>>user_id;
    cout<<"\t\tEnter Password : ";
    cin>>password;
    customer c;
    int flag=0;
    ifstream f("Customer.dat",ios::in|ios::binary);
    while(f.read((char*)&c,sizeof(c)))
    {


        if(strcmp(c.user_id,user_id)==0 && strcmp(c.password,password)==0)
        {

            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    f.close();

    return flag;
}
