#include"payment.h"
#ifndef bill_h
#define bill_h

class bill
{
        long int billID;
        float delivery_fee;
        float tax;
        float total;
        float coupon_amt;
    public:
        long int order_id;
        float amount;
        bill();
        void generate_billID();
        void total_cal();
        void display_bill();
        payment p;
};
#endif // bill_h

