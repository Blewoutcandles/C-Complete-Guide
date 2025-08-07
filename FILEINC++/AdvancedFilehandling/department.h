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
        friend istream& operator>> (istream&stream, department& dept);
};

inline std :: ostream& operator<< (ostream& stream,  const department& dept){
    stream << dept.get_name() << endl << dept.get_total_employees() << " " << \
    dept.get_salary_budget() << endl;
    return stream;
}

inline std :: istream& operator>>(istream& stream, department& dept){
    std :: getline(stream >> std :: ws, dept.name);
    //stream >> dept.numberofemployees will ignore the \n and whitespaces
    //meanwhile the getline function will not accept the white space or the new line
    //if there is value(newline or whitespace with the input) in stdin or the input file source it 
    //will take the new line
    //or the white space character as input and continue to skip the next input 
    //due to the intake of the current character(newline).
    //note: if newline character is entered at the end of the previous input getline
    //function will accept the new line character and skips the next input
    //to mitigate the issue use ignore function
    stream >> dept.number_of_employees >> dept.salary_budget;
    //after this statement again from the main menu getline function will ne called so
    //newline will be get into the dept.name so use the ignore function after
    //accepting the number of employees and the salary budget
    stream.ignore();
    //successfully ignore the newline character from the end of the last input
    return stream;
}
