#include"rectangle.h"

rectangle :: rectangle(float length, float width):
    length(length), width(width){

    }
rectangle ::rectangle(const rectangle& rect):
length(rect.length), width(rect.width){

}
float rectangle :: get_perimeter() const{
    return 2*(length + width);
}
float rectangle :: get_area() const{
    return length * width;
}