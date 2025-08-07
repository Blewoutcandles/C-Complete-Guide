#include "Department2.h"

Department :: Department(std::string organization, std :: string name, float salary_budget, int num_emp):
    organization(organization), name(name), salary_budget(salary_budget), num_emp(num_emp){
}    

Department :: Department(const Department& other):
    organization(other.organization), name(other.name), salary_budget(other.salary_budget), num_emp(other.num_emp){
        std :: cout << "Invoking the copy constructor for " << name << std :: endl;
}

std :: string Department :: get_name() const{
    return name;
}
float Department :: get_salary()const{
    return salary_budget;
}
std :: string Department :: get_organization()const{
    return organization;
}
int Department :: get_num_emp()const{
    return num_emp;
}


Department& Department :: operator +=(const Department& other){
    if(this-> organization != other.get_organization()){
        throw std :: invalid_argument("Only Departments with in the same organization can be merged");
    }
    this -> name = this -> name + " + "  + other.name;
    this -> num_emp = this->num_emp + other.num_emp;
    this -> salary_budget = this->salary_budget + other.salary_budget;
    return *this;//return the l value of the operator calling
}

Department  Department :: operator +(const Department& other) const{
    //copy the this operator and create a separate Department object
    Department ECE_copy{*this};
    ECE_copy += other;
    return ECE_copy;
}

Department&  Department ::  operator++(){
    //prefix increment
    std :: cout << "Prefix increment : called" <<  std :: endl;
    float avg_salary = salary_budget /num_emp;
    ++num_emp;
    salary_budget += avg_salary;
    return *this;
}

const Department Department :: operator++(int){
    std :: cout << "Postfix increment called " <<  std :: endl;
    float avg_salary = salary_budget /num_emp;
    Department dept_copy{*this};
    ++num_emp;
    salary_budget += avg_salary;
    return dept_copy;
//consider example : b =a++;
/*in this case b should hold a and then increment the a value, incrementing changes to the a value should not reflect to the b
so returning a const object is important can be implemented through having a copy of a and store it to the b object and then increment the 
a object bu this we could avoid making changes to a after b have saved the a value*/
}