#include"card.h"
#include"cod.h"
#ifndef payment_h
#define payment_h

class payment
{

        cod ptr1;
        card ptr2;
    public:
         float total;
        long int order_id;
        void payment_method();
};
#endif // payment_h

