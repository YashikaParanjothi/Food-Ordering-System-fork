#include<iostream>
#include<string.h>
#include"cod.h"
using namespace std;
cod::cod()
{
    strcpy(save_as,"\0");
}
bool cod::address_conf()
{
    int ch;
    cout<<"\t\tDo you want to continue with the previous address(yes=1/no=0)?";
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
void cod::set_address()
{
    int ch;
    cout<<"\t\tEnter the following:"<<endl;
    cout<<"\t\tADDRESS:";
    cin>>address1;
    cout<<"\t\tLANDMARK:";
    cin>>landmark;
    cout<<"\t\tSAVE AS:"<<endl;
    cout<<"\t\t1.Home"<<endl;
    cout<<"\t\t2.Work"<<endl;
    cout<<"\t\t3.Other"<<endl;
    cout<<"\t\tEnter your choice(1/2/3):";
    cin>>ch;
    switch(ch)
    {
        case 1: strcpy(save_as,"Home");
                break;
        case 2: strcpy(save_as,"Work");
                break;
        case 3: cout<<"\t\tEnter(e,g,:Dad'sPlace ,John'sHome):";
                cin>>save_as;
                break;
    }
}


