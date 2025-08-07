#pragma once
#include<iostream>
#include<string>
#include "Nodues.h"


class department{
    private:
        std :: string name;
        float salary;
        Noduesform *nodue;
    public:
        std :: string get_name() const;
        float get_salary()const;
        department(std :: string name,float salary);
        department(const department &other);
        department() = default;
        friend inline std :: istream& operator >> (std :: istream& stream, department&dep);
        friend inline std :: ostream& operator<<(std :: ostream& stream, const department& dep);
        ~department();
        department& operator=(department other);
        void swap(department& other) noexcept;
};

inline std :: ostream& operator<<(std :: ostream& stream, const department& dep){
    stream << "The name of the customer is " << dep.get_name() << " And the salary of the person is " \
     << dep.get_salary()  << std :: endl;
     stream << *dep.nodue << std :: endl;//this one is similar to the cout << nodue(class) << endl;
    //  operator<<(cout , *(dep.nodue));this should not be called like this 
     return stream;
}

inline std :: istream& operator >> (std :: istream& stream, department&dep){
    stream >> dep.name >> dep.salary;
    return stream;
}

/*older implementation
#pragma once
#include<iostream>
#include<string>


class department{
    private:
        float salary;
        std :: string name;
    public:
        std :: string get_name() const;
        float get_salary()const;
        department(std :: string name,float salary);
        department(const department &other);
        department() = default;
        //iimplementation of teh input stream as a friend function since need to access the 
        //private variables of the function
        friend inline std :: istream& operator >> (std :: istream& stream, department&dep);
    

        // department& operator=(const department& rhs) = default;//custom implementation of the copy asssignment operator
        //custom implementation without tjhe compiler help
        department& operator=(const department& rhs){
            std :: cout << "Operator = has been invoked" << std :: endl;
            this -> name = rhs.name;
            this -> salary = rhs.get_salary();
            return *this;
        }
        ~department();
};

//creating thenseparate the inline functino forthe cout operation

inline std :: ostream& operator<<(std :: ostream& stream, const department& dep){
    stream << "The name of the customer is " << dep.get_name() << " And the salary of the person is " \
     << dep.get_salary() << std :: endl;
     return stream;
}

//implementing the friend function for the input stream
inline std :: istream& operator >> (std :: istream& stream, department&dep){
    stream >> dep.name >> dep.salary;
    return stream;
}*/

