#include"menu.h"
#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;

void menu::getdata()
{
    cout<<"\t\tEnter the Food Name(without space) : ";
    cin>>name;
    cout<<"\t\tEnter the Food Price : ";
    cin>>price;
    cout<<"\t\tEnter the Food Stock Available : ";
    cin>>stock;
}
void menu::display()
{
    cout<<"|       "<<name<<"       |\t|   "<<price<<"   |\n";
}



