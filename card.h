#ifndef card_h
#define card_h
class card
{

        long long int card_no;
        char name[30];
        char expiry_date[5];
        int cvv;
    public:
         float total;
        bool account_conf();
        void set_account();
        void generate_otp();
};
#endif // card_h
