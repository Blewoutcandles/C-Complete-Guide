#include "Department.h"



Department :: Department(std::string organization, std :: string name, float salary_budget, int num_emp):
    organization(organization), name(name), salary_budget(salary_budget), num_emp(num_emp){
}    

Department :: Department(const Department& other):
    organization(other.organization), name(other.name), salary_budget(other.salary_budget), num_emp(other.num_emp){
        std :: cout << "Invoking the copy constructor for" << name << std :: endl;
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

// Department*  Department :: operator +(const Department& other) const{
//     if(this-> organization != other.get_organization()){
//         throw std :: invalid_argument("Only Departments with in the same organization can be merged");
//     }
//     Department *dept = new Department(
//     this -> organization, 
//     this->get_name()+"+"+other.get_name(),
//     this -> get_num_emp() + other.get_num_emp(), 
//     this-> get_salary()+other.get_salary()
//     );
//     return dept;
// }
// Department  Department :: operator +(const Department& other) const{
//     if(this-> organization != other.get_organization()){
//         throw std :: invalid_argument("Only Departments with in the same organization can be merged");
//     }
//     Department dept(
//     this -> organization, 
//     this->get_name()+"+"+other.get_name(),
//     this -> get_num_emp() + other.get_num_emp(), 
//     this-> get_salary()+other.get_salary()
//     );
//     return dept;
// }
    //output for the above:
    /*
    **********************
Organization : Mint
Department :cloud
Total Number of Employees : 2000000
Salary Budget : 50
**********************
Organization : Mint
Department :computing
Total Number of Employees : 500000
Salary Budget : 23
**********************
Organization : Mint
Department :cloud+computing
Total Number of Employees : 73
Salary Budget : 2.5e+06*/
//implementing the += operator

/*Note : the Department +operator cannot return Department reference type*/

// Department& Department :: operator +=(const Department& other){
//     if(this-> organization != other.get_organization()){
//         throw std :: invalid_argument("Only Departments with in the same organization can be merged");
//     }
//     this -> name = this -> name + " + "  + other.name;
//     this -> num_emp = this->num_emp + other.num_emp;
//     this -> salary_budget = this->salary_budget + other.salary_budget;
//     return *this;//return the l value of the operator calling
// }

Department& Department :: operator +=(const Department& other){
    if(this-> organization != other.get_organization()){
        throw std :: invalid_argument("Only Departments with in the same organization can be merged");
    }
    this -> name = this -> name + " + "  + other.name;
    this -> num_emp = this->num_emp + other.num_emp;
    this -> salary_budget = this->salary_budget + other.salary_budget;
    return *this;//return the l value of the operator calling
}
//the above function for the operator overloading should not be used since it returns of value type thus invoking the copy 
//constructors and wastage memory though it is created it vanishes as soon as the function call ends
//so no need to have this functino instead have function that returns of reference type.

/*invoking the other operator overloading from the another*/
Department  Department :: operator +(const Department& other) const{
    //copy the this operator and create a separate Department object
    Department ECE_copy{*this};
    ECE_copy += other;//changes in this function call will reflect to teh ECE_copy
    return ECE_copy;//now this ECE_copy is created through copy constructor
}
    