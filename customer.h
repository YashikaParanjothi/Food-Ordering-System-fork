#include"user.h"
#include"orders.h"
#include"card.h"

class customer : public user
{
    char address[40];
    long long int phone;
    char email[20];

public:
    orders obj;
    card cd;
    void getdetails();
    void display();
    int login();
};

