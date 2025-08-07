#include "audiodevice.h"

AudioDevice :: AudioDevice(string brand, float price):
    brand(brand), price(price){
        
    }

string AudioDevice :: get_brand()const{
    return brand;
}

float AudioDevice :: get_price() const{
    return price;
}

void AudioDevice :: display_price()const{
    cout << "Brand : " << brand << "\nprice : " << get_price() << endl;
}