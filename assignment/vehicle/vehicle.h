#ifndef VEHICLE_H
#define VEHICLE_H
 
#include <iostream>
#include <string>
 
class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;
 
public:
    Vehicle(const std::string &make, const std::string &model, int year)
        : make(make), model(model), year(year) {
             std :: cout <<"constructing the vehicle class" << std :: endl;
        }
 
    virtual ~Vehicle(){
        std :: cout << this << std :: endl;
        std ::cout <<"destructing the vehicle class" << std :: endl;
    }
 
    virtual void display() const {
        std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year;
    }
 
    friend std::ostream& operator<<(std::ostream& stream, const Vehicle& vehicle) {
        vehicle.display();
        return stream;
    }
    
};
 
#endif 