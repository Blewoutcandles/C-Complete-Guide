using namespace std;
#include"audiodevice.h"



AudioDevice :: AudioDevice(std :: string brand, float price):
    brand(brand), price(price){

}

string AudioDevice :: get_brand_name() const{
    return brand;
}

float AudioDevice :: get_price() const{
    return price;
}