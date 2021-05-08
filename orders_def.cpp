#include"orders.h"
#include<string.h>
using namespace std;

orders::orders()
{
    int i;
    for(i=0;i<5;i++)
    {
        strcpy(ord[i].name,"\0");
        ord[i].price=0;
        ord[i].no=0;
    }
    order_id=0;
    amount=0;
}

void orders::calc_amt()
{
    float sum=0;
    int i;
    for(i=0;i<5;i++)
    {
        sum=sum + ord[i].no*ord[i].price;
    }
    amount=sum;
    b.amount=amount;
}

