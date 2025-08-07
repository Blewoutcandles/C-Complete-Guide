#pragma once

#include<string>

#include"browserexception.h"

class InvalidInputException : public BrowserException{//this is known as the inheritance of the class

    private :
        std :: string invalid_var_name;
    public :
        InvalidInputException(std :: string  message, std :: string invalid_var_name)://constructor
            BrowserException(message),invalid_var_name(invalid_var_name){

        }
        // InvalidInputException(const InvalidInputException* other):
        // BrowserException(other.BrowserException::what()),invalid_var_name(other.invalid_var_name){
        //     std  :: cout << "copy constructor of the invalid input exception" << endl;
        // }

        // const char *what() const noexcept override{
        //     std :: cout << "invalid input exception:: what()"<<std :: endl;
        //     return invalid_var_name.c_str();
        // }
        
};