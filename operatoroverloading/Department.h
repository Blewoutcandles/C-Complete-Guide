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
        // Department* operator +(const Department& other)const;//focusing sessioh
        // Department operator +(const Department& other)const;
        // Department& operator +=(const Department& other);//not a const since the left hand value is modified durring the process
        Department& operator +=(const Department& other);

        /*output of the above functino
        Invoking the copy constructor forcloud + computing
Invoking the copy constructor forcloud + computing + Process
**********************
Organization : Mint
Department :cloud + computing
Total Number of Employees : 2500000
Salary Budget : 73
**********************
Organization : Mint
Department :computing
Total Number of Employees : 500000
Salary Budget : 23
**********************
Organization : Mint
Department :Process
Total Number of Employees : 20000
Salary Budget : 2 */
        void show(){
            std :: cout <<"**********************\n" << "Organization : " << organization << "\nDepartment :" << name << "\nTotal Number of Employees : " << num_emp << \
            "\nSalary Budget : " << salary_budget << std :: endl;        
    }


    Department operator +(const Department& other)const;
};