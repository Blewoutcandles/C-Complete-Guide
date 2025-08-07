#include"LeatherSeats.h"

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

LeatherSeats :: LeatherSeats(float price, string color):
    Accessory(price),color(color){

    }
string LeatherSeats::get_color() const{
    return color;
}