#include"Accessory.h"

using std :: cout;
using std :: cin;
using std :: endl;

Accessory :: Accessory(float price):
price(price){
    }

float Accessory :: get_price() const{
    return price;
}

