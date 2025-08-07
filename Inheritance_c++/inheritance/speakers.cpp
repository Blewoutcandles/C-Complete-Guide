#include "speakers.h"
using namespace std;

Speakers :: Speakers(string brand, float price, string dimensions):
    AudioDevice(brand,price),dimensions(dimensions){

    }
string Speakers :: get_dimensions()const{
    return dimensions;
}