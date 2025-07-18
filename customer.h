#include"user.h"
#include"orders.h"
#include"card.h"
#include<string.h>

class customer : public user
{
    string address;
    long long int phone;
    string email;

public:
    orders obj;
    card cd;
    void getdetails();
    void display();
    int login() override;
};



