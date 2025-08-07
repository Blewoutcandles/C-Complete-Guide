#ifndef CAR_H
#define CAR_H
 
#include "Vehicle.h"
 
class Car : public Vehicle {
private:
    int numberOfDoors;
 
public:
    Car(const std::string &make, const std::string &model, int year, int numberOfDoors)
        : Vehicle(make, model, year), numberOfDoors(numberOfDoors) {
             std :: cout <<"constructing the car class" << std :: endl;
        }
 
    void display() const override {
        Vehicle::display();
        std::cout << ", Doors: " << numberOfDoors << std::endl;
    }
    ~Car(){
        std :: cout << this << std :: endl;
        std :: cout <<"Destructing the car class" << std :: endl;
    }
};
 
#endif