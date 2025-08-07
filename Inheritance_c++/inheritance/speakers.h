#pragma once

#include"audiodevice.h"

class Speakers : public AudioDevice{
    private:
        std :: string dimensions;
    public:
        Speakers(std :: string brand, float price ,std :: string dimensions);
        std :: string get_dimensions()const;

};