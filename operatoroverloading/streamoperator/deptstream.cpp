#include"deptstream.h"

using std :: cout;
using std :: endl;
using std :: cin;

std :: string department :: get_name() const{
    return name;
  }
float department :: get_salary()const{
    return salary;
}
department :: department(std :: string name, float salary):
    name(name), salary(salary){
        //creating the nodueform pointer that points to the class Nodueform
        nodue = new Noduesform(name, 1200);
        std :: cout << "Copy constructor department" << std :: endl;
}

department ::department (const department &other):
    name(other.name), salary(other.salary){
    nodue = new Noduesform(other.name, other.salary); 
    cout << "*Constuction department " << name << ' ' << salary << endl;
}



//the below operator = can be implemented in the other way by having 
//value type parameter passing rather than the copy constructor
// department& department :: operator=(const department& other){
//     cout << "invoking assignment operator" << endl;
//     department copy{other};
//     swap(copy);
//     return *this;
// }
//new implementation
department& department :: operator=(department other){
    cout << "**invoking assignment operator**" << endl;
    swap(other);
    return *this;
}
//the combination of the above and below method are more similar to the
//swaping of the temporary variable
//create a class copy to have the values of the destined class
//department class ---------department local class copy
//copying_to_class.swap(department local class copy)
//stack will clear the local class variable
//we have our copying_to_class to have the values from the original class
void department :: swap(department& other) noexcept{
    std :: swap(nodue, other.nodue);
    std :: swap(name, other.name);
    std :: swap(salary, other.salary);
}

// department& department :: operator=(const department& other){//this function is not
// //exception safe 
//     cout <<  "Assignment operator=() invoked" << endl;
//     if(this!=&other){
//         /*explanation: while creating the this pointer class the nodue is being created so when we 
//         are copying the other department class nodue we might need the details of those and not us
//         so here we aer deleting the pervious creation of the creditcard and created a newone
//         with parameter of the *(other.nodue) = Noduesfrom class see the copy constructor of the 
//         Noduesform*/
//         delete nodue;
//         nodue = nullptr;

//         this -> name = other.name;
//         this -> salary =  other.salary;

//         nodue = new Noduesform(*(other.nodue));
//         // nodue = new Noduesform((other.nodue)->name, (other.nodue)->amount);
//         //see dot . has more precedance then the star*operator
//     }
//     return *this;
// } 

department :: ~department(){
    //deleting the noduesfrom class pointer
    delete nodue;
    nodue = nullptr;
    cout << "Invokingthe destructor of the department class " << name<< " "<<salary<<  endl;
}
