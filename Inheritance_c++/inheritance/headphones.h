#pragma once

#include"audiodevice.h"

class HeadPhones : public AudioDevice{
    private:
        float cord_length;
    public:
        HeadPhones(std :: string brand, float price, float cord_length);
        float get_cord_length() const;
        
};