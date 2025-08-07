#include"Engineeringemployee.h"

EngineeringEmployee :: EngineeringEmployee(std :: string name, float salary, float bonus_percent , int num_of_stocks, 
float stock_price):
FULLTIMEEMPLOYEE(name, salary,bonus_percent), num_of_stocks(num_of_stocks), stock_price(stock_price){}


float EngineeringEmployee :: get_total_salary() const{
    cout << "EngineeringEmployee : get_total_salary() " << get_name() << endl;
    return FULLTIMEEMPLOYEE :: get_total_salary() + num_of_stocks*stock_price;
}