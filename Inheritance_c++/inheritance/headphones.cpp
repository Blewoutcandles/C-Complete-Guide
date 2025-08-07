#include"headphones.h"
using namespace std;


HeadPhones :: HeadPhones(string brand, float price, float cord_length):
    AudioDevice(brand,price), cord_length(cord_length){

    }

float HeadPhones :: get_cord_length() const{
    return cord_length;
}