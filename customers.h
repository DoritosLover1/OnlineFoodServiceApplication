#ifndef CUSTOMERS_H
#define CUSTOMERS_H

class Customers
{
private:
    int c_id = 0;
    char address[256];
    char c_fname[32];
    char c_sname[32];

protected:
    bool customerCanOrder = false;

public:
    Customers();

    bool addFoodToBasket();
    void orderTheBasket();
    void requestRefund();
    void viewBasket();
    void changeBasket();
    bool removeFoodAtBasket();
};

#endif // CUSTOMERS_H
