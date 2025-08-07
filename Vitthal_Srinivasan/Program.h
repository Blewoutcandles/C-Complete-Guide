#pragma once
#include<string>

class Program{
    private:
        std :: string major;
    public:
        Program(std :: string major);
        std :: string get_major()const;
        ~Program();
};