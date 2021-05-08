#include"admin.h"
#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int admin::login()
{
    char pass[20];
    cout<<"\t\tEnter User_Id : ";
    cin>>user_id;
    cout<<"\t\tEnter Password : ";
    cin>>password;
    //password_hiding(pass);
    //strcpy(password,pass);
    admin a;
    int flag=0;
    ifstream f("Admin.dat",ios::in|ios::binary);
    while(!f.eof())
    {
        f.read((char*)&a,sizeof(a));
        if(strcmp(a.user_id,user_id)==0 && strcmp(a.password,password)==0)
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



