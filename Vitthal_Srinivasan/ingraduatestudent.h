#pragma once
#include "instudent.h"

class graduatestudent: public student{
    using student::student;//this is used to pul in all the overloaded methods in its name Student i.e., constructor in 
    //in this case
    private:
        bool scholarship;
    public:
        graduatestudent(std ::string name, int gpa, std :: string major, bool scholarship);
        graduatestudent(const graduatestudent& st);
        bool get_scholarship()const;
        void display();
        ~graduatestudent();
};