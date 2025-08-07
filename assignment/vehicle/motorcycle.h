#pragma once
 
#include "Vehicle.h"
 
class Motorcycle : public Vehicle {
private:
    bool hasSidecar;
 
public:
    Motorcycle(const std::string &make, const std::string &model, int year, bool hasSidecar)
        : Vehicle(make, model, year), hasSidecar(hasSidecar) {
             std :: cout <<"constructing the motorcycle class" << std :: endl;
        }
 
    void display() const override {
        Vehicle::display();
        std::cout << ", Sidecar: " << (hasSidecar ? "Yes" : "No") << std::endl;
    }
    ~Motorcycle(){
        std :: cout << this << std :: endl;
        std :: cout <<"Destructing the motorcycle class" << std :: endl;
    }
};
 
