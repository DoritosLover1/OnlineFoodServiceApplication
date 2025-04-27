#ifndef FOODS_H
#define FOODS_H

class Foods
{
private:
    int f_id = 0;

public:
    Foods();
    char f_name[32];
    char f_ingredients[256];
    char f_otherinformation[256];
    unsigned short int f_price;

};

#endif // FOODS_H
