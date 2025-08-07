#pragma once

#include<string>

#include "InvalidInputException.h"

class MalformedUrlException : public InvalidInputException{
    public:
        MalformedUrlException(std :: string message):
            InvalidInputException(message){
    }
};

