#include<fstream>
#include<iostream>
#include<string.h>
#include<conio.h>
#include<ctime>
#include<cstdlib>
#include"user.h"
#include"admin.h"
#include"customer.h"
#include"menu.h"
#include"bill.h"
#include"payment.h"
#include"orders.h"
#include"card.h"
#include"cod.h"

using namespace std;

int main()
{
    int flag=0,ret,choice,c,quant;
    char ch='y';
    admin A;customer C;menu M,m;
    cout<<"\n\n\n\t\t===================HIDEOUT---THE CAFE===================\n\n";
    cout<<"\t\t[1]Admin\n\t\t[2]Customer\n\t\t=> ";
    cin>>choice;
    if(choice==1)
    {
         cout<<"\n\t\t[1]New User\n\t\t[2]Existing User\n\t\t=> ";
         cin>>c;
         system("cls");
         if(c==1)
         {
             A.getdata();
             ofstream f("Admin.dat",ios::app|ios::binary);
             f.write((char*)&A,sizeof(A));
             f.close();
             c=2;
         }
         system("cls");
         if(c==2)
         {
             while(flag==0)
             {
                 ret=A.login();
                 if(ret==1)
                 {
                     cout<<"\n\t\tYou are Logged In...\n";
                     flag=1;
                 }
                 else
                 {
                     cout<<"\n\t\tIncorrect User_Id or Password...\n\t\tRe-Enter...\n";
                     flag=0;
                 }
             }
         }
         cout<<"\t\t";
         system("pause");
         system("cls");
         char opt='y';
         while(ch=='y')
         {
            cout<<"\n\n\t\t[1]Add Food Items\n\t\t[2]Delete Food Items\n\t\t[3]Update Food Items\n\t\t[4]View Food Menu\n\t\t[5]Exit\n\t\t=> ";
            cin>>choice;
            system("cls");
            switch(choice)
            {
                case 1 :  {
                          opt='y';
                          ofstream f("Menu.dat",ios::app|ios::binary);
                          while(opt=='y')
                          {
                              cout<<endl;
                              M.getdata();
                              f.write((char*)&M,sizeof(M));
                              cout<<"\n\t\tDo you want to continue(y/n) : ";
                              cin>>opt;
                              system("cls");
                          }
                          f.close();
                          }
                          break;
                case 2: {
                        opt='y';
                        char p[20];
                        ifstream f1("Menu.dat",ios::in|ios::binary);
                        ofstream f2("New.dat",ios::app|ios::binary);
                        while(opt=='y')
                        {
                        cout<<"Enter the name of the food item that is to be deleted : ";
                        cin>>p;
                        while(f1.read((char*)&M,sizeof(M)))
                        {
                            if(strcmp(p,M.name)!=0)
                            {
                                f2.write((char*)&M,sizeof(M));
                            }
                        }
                        f1.close();
                        f2.close();
                        remove("Menu.dat");
                        rename("New.dat","Menu.dat");
                        cout<<"\n\t\tDo you want to continue(y/n) : ";
                        cin>>opt;
                        system("cls");
                        }
                        }
                        break;
                case 3: {
                        opt='y';
                        char p[20];
                        fstream f1("Menu.dat",ios::in|ios::out|ios::binary);
                        while(opt=='y')
                        {
                            cout<<"Enter the name of the food that is to be Modified : ";
                            cin>>p;
                            while(f1.read((char*)&M,sizeof(M)))
                            {
                                if(strcmp(p,M.name)==0)
                                {
                                    m.getdata();
                                    f1.seekg(f1.tellg()-sizeof(m));
                                    f1.write((char*)&m,sizeof(m));
                                }
                            }
                            cout<<"\n\t\tDo you want to continue(y/n)? ";
                            cin>>opt;
                        }
                        f1.close();
                        }
                        break;
                case 4: {
                            int j=1;
                            cout<<"\n\t\t|Sl.No|\t|             Name             |\t|   Price   |\n";
                            cout<<endl;
                            ifstream f("Menu.dat",ios::in|ios::binary);
                            while(f.read((char*)&M,sizeof(M)))
                            {
                                cout<<"\t\t|"<<j<<" |\t";
                                M.display();
                                j++;
                            }
                            f.close();
                            getch();
                        }
                        break;
                case 5: exit(0);
                        break;
                default:cout<<"\n\t\tWrong choice...\n";
            }
            system("cls");
        cout<<"\t\tDo you want to continue(y/n)? ";
        cin>>ch;
        }
        cout<<"\n\t\tYou are logged out...\n\t\t";
        getch();

    }
    else if(choice==2)
    {
        flag=0;
        cout<<"\n\t\t[1]New User\n\t\t[2]Existing User\n\t\t=> ";
        cin>>c;
        if(c==1)
        {
            C.getdetails();
            //C.display();
            ofstream fp("Customer.dat",ios::app|ios::binary);
            fp.write((char*)&C,sizeof(C));
            fp.close();
            c=2;
        }
        if(c==2)
        {
            while(flag==0)
             {
                 ret=C.login();
                 if(ret==1)
                 {
                     cout<<"\n\t\tYou are Logged In...\n";
                     flag=1;
                 }
                 else
                 {
                     cout<<"\n\t\tIncorrect User_Id or Password...\n\t\tRe-Enter...\n";
                     flag=0;
                 }
             }
        }
        cout<<"\t\t";
        system("pause");
        system("cls");
        char ex='y';
        //from this should be repeated. have a while loop.
        int x=0;
        while(ex=='y')
        {
        cout<<"\n\n\t\tMake your order...\n\t\t";
        cout<<"\n\t\t|Sl.No|\t|             Name             |\t|   Price   |\n";
        int i=1;
        cout<<endl;
        ifstream f("Menu.dat",ios::in|ios::binary);
        while(f.read((char*)&M,sizeof(M)))
        {
            cout<<"\t\t|"<<i<<" |\t";
            M.display();
            i++;
        }
        f.close();
        cout<<"\n\t\tSelect the food item that you want to order...\n\t\t=> ";
        cin>>c;
        i=1;
        srand(time(0));

       C.obj.b.p.order_id=C.obj.b.order_id=C.obj.order_id=rand()%1000000;
        ifstream f3("Menu.dat",ios::in|ios::binary);
        while(f3.read((char*)&M,sizeof(M)))
        {
            if(i==c)
            {
                strcpy(C.obj.ord[x].name,M.name);
                C.obj.ord[x].price=M.price;
                cout<<"\t\tEnter the quantity : ";
                cin>>quant;
                C.obj.ord[x].no=quant;
                x++;
                break;
            }
            else
            {
                i++;
            }
        }
        f3.close();
        cout<<"\n\t\tDo you want to order more(y/n)? ";
        cin>>ex;
        system("cls");
        }
        C.obj.calc_amt();
        C.obj.b.total_cal();
        C.obj.b.generate_billID();
        cout<<"\t\t";
        system("pause");
        system("cls");
        C.obj.b.display_bill();
        C.obj.b.p.payment_method();
        //Customer works to be done here(order food).
    }
}

