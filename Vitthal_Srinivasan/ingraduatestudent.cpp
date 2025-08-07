#pragma once

#include "ingraduatestudent.h"


// graduatestudent :: graduatestudent(std ::string name, int gpa, std :: string major, bool scholarship):
//     student(name,gpa,major),scholarship(scholarship){
//     std :: cout << "graduatestudent : argument based constructor" << std :: endl;
// }
/*Instead of doing like the above code we can also make use aof the this keyword to initialize the name, gpa, major fields of the 
student constructor as you can seee the student is the inherited class which is the base class indeed ot the  graduate class
when initializing the graduatestudent ethan("ethan",9, "physics",false); this statement student constructor will get constructed
note: the parent class is always created first then the child class, after constructing of the student class "this" pointer will basically 
points to the object that is being invoked see the below constructor definition for example */


graduatestudent :: graduatestudent(std ::string name, int gpa, std :: string major, bool scholarship):
    scholarship(scholarship){
        this->gpa = gpa;//here the variables should be in teh protected class rather than private note we could not do anything in the 
        //private sectino of the class if we do want to do something like accessing the private variables of the class then use 
        //using student::student above the private section see line 5 of the ingraduatestudent.h
        this->major = major;
        this -> name = name;
    std :: cout << "graduatestudent : argument based constructor" << std :: endl;
}

graduatestudent :: graduatestudent(const graduatestudent& st):
    student(st){
    std :: cout << "graduatestudent : argument based copy constructor invoked" << std :: endl;
}

bool graduatestudent  :: get_scholarship()const{
    return scholarship;
}

void graduatestudent :: display(){
    std :: cout << "Name : " << get_name() << std ::endl;
    std :: cout << "gpa : " << get_gpa() << std ::endl;
    std :: cout << "major : " << get_major() << std ::endl;
    std :: cout << "has scholarship : " << std :: boolalpha << get_scholarship() << std ::endl;
}

graduatestudent :: ~graduatestudent(){
    std :: cout << "Invoking the destructor of the graduate student" << std :: endl;
}

// graduatestudent :: graduatestudent(std ::string name, int gpa, std :: string major, bool scholarship):
//     student(name,gpa,major),scholarship(scholarship){
//     std :: cout << "graduatestudent : argument based constructor" << std :: endl;
// }
/*in the above case the student class variables even in protected section (accessmodifier) could be instantiated from here like:
/ graduatestudent :: graduatestudent(std ::string name, int gpa, std :: string major, bool scholarship):
//     name(name), gpa(gpa), major(major),scholarship(scholarship){
//     std :: cout << "graduatestudent : argument based constructor" << std :: endl;
// }

using initialization list could not be done. this will return an error if we inherited the base student class mind it
*/
/*note :
student : invoking the no argument constructor
graduatestudent : argument based constructor
---------------------
Name : ethan
gpa : 9
major : physics
has scholarship : false
Student paramaterized constructor
---------------------
Name : BladeofMiquella
gpa : 9
major : WarArt
has scholarship : false
student : invoking the no argument constructor
---------------------
Name :
gpa : -855637556
major :
has scholarship : false
copyconstructor based invoking
************************
copy constructor of the student class
graduatestudent : argument based copy constructor invoked
Name : ethan
gpa : 9
major : physics
has scholarship : true
*/