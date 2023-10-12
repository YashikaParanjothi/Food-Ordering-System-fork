#include"user.h"
#include<fstream>
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
void user::getdata()
{
    cout<<"\n\t\tEnter Your Name : ";
    cin>>name;
    cout<<"\t\tCreate a User_Id for Your Account:\n";
    cout<<"\t\tEnter Your User_Id : ";
    cin>>user_id;
    cout<<"\t\tEnter Password : ";
    cin>>password;
}


