#include <iostream>
#include <memory>
#include <vector>
#include "Car.h"
#include "Motorcycle.h"
 
int main() {
    std::vector<std::shared_ptr<Vehicle>> vehicles;
 
    vehicles.push_back(std::make_shared<Car>("Toyota", "Corolla", 2020, 4));
    std :: cout << vehicles[0] << std :: endl;
    vehicles.push_back(std::make_shared<Motorcycle>("Harley-Davidson", "Street 750", 2019, false));
    std :: cout << vehicles[1] << std :: endl;
    vehicles.push_back(std::make_shared<Motorcycle>("Harley-Davidson", "Electra Glide", 2021, true));
    std :: cout << vehicles[2] << std :: endl;
    vehicles.push_back(std::make_shared<Car>("Honda", "Civic", 2018, 2));
    std :: cout << vehicles[3] << std :: endl;
 
    std::cout << "Vehicle Details:\n";
    for (const auto& vehicle : vehicles) {
        printf("%p\n", vehicle.get());
        std::cout << *vehicle;
    }
 
    return 0;
}