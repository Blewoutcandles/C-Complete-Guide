#include"classCar.h"

Car :: Car(string make, string model, float vehicle_price, string accessories, float accessories_price):
    make(make), model(model), Vehicle("car", vehicle_price), Accessories(accessories, accessories_price){

    }

string Car :: get_make() const{
    return make;
}

string Car :: get_model() const{
    return model;
}


float Car :: get_price() const{
    return Vehicle::get_price() + Accessories :: get_price();
}