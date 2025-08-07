#pragma once

#include<string>

#include"browserexception.h"

// class NavigationException {
//     private:
//         std :: string lasturl;
//     public:
//         NavigationException(std :: string message):
//             BrowserException(message), lasturl(lasturl){
//         }

//         NavigationException(const  NavigationException & other):
//         BrowserException(other.BrowserException::what()){
//             std ::cout << "Invoking the copy constructor of the navigation exception" << std :: endl;
//         }
//         const char* what() const noexcept override{
//             std :: cout  << "Navigation::what()" << endl;
//             return lasturl.c_str();
//         }
// };
class NavigationException : public BrowserException{
    private:
        std :: string lasturl;
    public:
        NavigationException(std :: string message, std :: string lasturl):
            BrowserException(message), lasturl(lasturl){
        }

        // NavigationException(const  NavigationException & other):
        // BrowserException(other.BrowserException::what()){
        //     std ::cout << "Invoking the copy constructor of the navigation exception" << std :: endl;
        // }
        // const char* what() const noexcept override{
        //     std :: cout  << "Navigation::what()" << std :: endl;
        //     return lasturl.c_str();
        // }
};