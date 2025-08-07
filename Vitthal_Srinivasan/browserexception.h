#pragma once

#include<string>
#include<exception>
#include<iostream>
// class BrowserException: public std :: exception{//public inheritance

//     private : 
//         std :: string message;
//     public :
//         BrowserException(std :: string message = "A browser exception has occured"):
//             message(message){
//         }
//         //std :: exception::what() returns a const char*, so we must as well 
//         const char*what() const noexcept override{
//             std :: cout << "Browserexception :: what()"<< std :: endl;
//             return message.c_str();//to convert the string into the c style string
//             //The above "noexcept" says that no further exceptions will be thrown by the method.
//             //"override" specifies that the we are overriding the same name and signature 
//             //function in the name class

//         }
// };


class BrowserException: public std :: exception{//public inheritance

    private : 
        std :: string message;
    public :
        BrowserException(std :: string message = "A browser exception has occured"):
            message(message){
        }
        const char*what() const noexcept override{
            std :: cout << "Browserexception :: what()"<< std :: endl;
            return message.c_str();

        }
};