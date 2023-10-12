#ifndef card_h
#define card_h
#include<string.h>
class card
{

        long long int card_no;
        string name;
        string expiry_date;
        int cvv;
    public:
         float total;
        bool account_conf();
        void set_account();
        void generate_otp();
};
#endif // card_h
