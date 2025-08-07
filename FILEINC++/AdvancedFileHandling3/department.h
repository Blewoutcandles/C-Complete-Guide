#pragma once

#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using std :: string;
using std :: cout;
using std :: cin;
using std :: endl;
using std :: ostream;
using std :: istream;

class department{
    private:
        string name;
        int number_of_employees;
        float salary_budget;
    public:
        department(string name, int n_emp, float salary_b);
        department() = default;
        string get_name()const{
            return name;
        }
        int get_total_employees() const{
            return number_of_employees;
        }
        float get_salary_budget() const{
            return salary_budget;
        }
        // friend inline istream& operator>>(istream& other,  department& dept);
        // friend inline ostream& operator<<(ostream&other, const department& dept);
        
};

// inline ostream& operator<<(ostream&other, const department& dept){
//     other<< dept.name << endl;
//     other << dept.salary_budget << " " << dept.number_of_employees << endl;
//     return other; 
// }
// inline istream& operator>>(istream& other,  department& dept){
//     other.read(reinterpret_cast<char*>(&dept.name), sizeof(dept.name));
//     other.read(reinterpret_cast<char*>(&dept.salary_budget), sizeof(dept.salary_budget));
//     other.read(reinterpret_cast<char*>(&dept.number_of_employees),sizeof(dept.number_of_employees));
//     // other.ignore();
//     return other;
// }

