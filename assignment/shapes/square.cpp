#include"square.h"

square :: square(float side):
rectangle(side, side), side(side){

}

square :: square(const square& other):
rectangle(other.side, other.side), side(other.side){

}

float square :: get_perimeter()const{//override no need to specify
    return this -> rectangle :: get_perimeter();
}

float square :: get_area()const{//override no need to specify
    return this->rectangle :: get_area();
}