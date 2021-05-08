#ifndef user_h
#define user_h
class user
{
protected:
    char name[20];
    char user_id[20];
    char password[20];
public:
    void getdata();
    void password_hiding(char *pass);
    virtual int login() = 0;
};
#endif // user_h

