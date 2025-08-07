#pragma once

#include"classsvehicle.h"
#include"ClassAccessories.h"

class Car : public Vehicle,public Accessories{
    private:
        string make;
        string model;
    public:
        Car(string make, string model, float vehicle_price, string accessories, float accessories_price);
        string get_make() const;
        string get_model() const;   

        using Vehicle :: get_price;//functions of the vehicle class being used in the main without individual class
        //with scope resolution operator
        using Vehicle :: taxes;

        //here inheriting two same virtual functions like vehicle and accessories class
        //as there can be only one overriding function with specific name
        float get_price() const override final;/*final is used that further child classes will not inherit */
        
};