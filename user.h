#ifndef user_h
#define user_h
#include<string.h>
class user
{
protected:
    string name;
    string user_id;
    string password;
public:
    void getdata();
    void password_hiding(char *pass);
    virtual int login() = 0;
};
#endif // user_h

