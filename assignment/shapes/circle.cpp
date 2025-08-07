#include"circle.h"

Circle :: Circle(float radius):
    radius(radius){

}

Circle :: Circle(const Circle& other):
    radius(other.radius){

}

float Circle:: get_radius() const{
    return radius;
}

float Circle::get_area() const{
    return M_PI*radius*radius;
}

float Circle :: get_perimeter() const{
    return 2*M_PI*radius;
}