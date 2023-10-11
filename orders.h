#include"bill.h"
#ifndef orders_h
#define orders_h
#include<string.h>
struct order
{
    string name;
    float price;
    int no;
};
class orders
{
public:
    long int order_id;
    struct order ord[5];
    float amount;
    orders();
    void getdata();
    void calc_amt();
    void displaydata();
    bill b;
};
#endif // orders_h
