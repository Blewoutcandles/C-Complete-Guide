#include "speakers.h"

Speakers :: Speakers(string brand, float price, string dimensions):
    AudioDevice(brand, price), dimensions(dimensions){

    }

string Speakers :: get_dimensions() const{
    return dimensions;
}


float Speakers :: get_price()const{
    return AudioDevice :: get_price()-
            AudioDevice :: get_price()*9.99*0.01;
}

// float Speakers :: get_price(float discount_in_percent)const{
//     return get_price()-
//             get_price()*discount_in_percent*0.01;
// }


    
