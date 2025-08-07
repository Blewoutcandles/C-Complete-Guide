#pragma once

#include<iostream>
#include<string>
#include<utility>
#include<exception>

class Department{
    private:
        std :: string organization;
        std :: string name;
        float salary_budget;
        int num_emp;
    public:
        Department(std::string organization, std :: string name, float salary_budget, int num_emp);
        Department(const Department& other);
        int get_num_emp()const;
        std :: string get_name() const;
        float get_salary()const;
        std :: string get_organization()const;
        Department  operator +(const Department& other) const;
        //condition for the prefix 
        Department& operator++();
        //function for the postfix how it is different from the prefix 
        //see the dummy variable it is additional for the postfix for the compiler to differentiate between 2
        const Department operator++(int dummy);

        Department& operator +=(const Department& other);
          void show(){
            std :: cout <<"**********************\n" << "Organization : " << organization << "\nDepartment :" << name << "\nTotal Number of Employees : " << num_emp << \
            "\nSalary Budget : " << salary_budget << std :: endl;        
    }
};