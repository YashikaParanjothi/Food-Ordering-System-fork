#include"user.h"
#include<fstream>
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
void user::getdata()
{
    //char pass[20];
    cout<<"\n\t\tEnter Your Name : ";
    cin>>name;
    cout<<"\t\tCreate a User_Id for Your Account:\n";
    cout<<"\t\tEnter Your User_Id : ";
    cin>>user_id;
    cout<<"\t\tEnter Password : ";
    cin>>password;
    //password_hiding(pass);
    //strcpy(password,pass);
}
/*void user::password_hiding(char *pass)
{
START:
    cout<<"\n\t\tEnter Password  : ";
    int i = 0;
    char a;//a Temp char
    for(i=0;;)//infinite loop
    {
        a=getch();//stores char typed in a
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
            //check if a is numeric or alphabet
        {
            pass[i]=a;//stores a in pass
            ++i;
            cout<<"*";
        }
        if(a=='\b'&&i>=1)//if user typed backspace
            //i should be greater than 1.
        {
            cout<<"\b \b";//rub the character behind the cursor.
            --i;
        }
        if(a=='\r')//if enter is pressed
        {
            pass[i]='\0';//null means end of string.
            break;//break the loop
        }
    }
    if(i<=5)
    {
        cout<<"\n\t\tMinimum 6 digits needed.\n\t\tEnter Again : ";
        getch();//It was not pausing :p
        goto START;
    }
}*/


