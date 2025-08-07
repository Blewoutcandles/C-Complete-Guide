#pragma once
#include "audiodevice.h"

class Speakers : public AudioDevice{
    private:
        string dimensions;
    public:
        Speakers(string brand, float price, string dimensions);
        string get_dimensions() const;
        // float get_price(float discount_in_percent) const;
        float get_price() const;
        using AudioDevice :: get_price;//no need of the parenthesis, now no need of scope resolution operator 
        //so if get_price() with no parameter is callled using speaker object then compiler considers the 
        //get_price() in audiodevice class
        
};