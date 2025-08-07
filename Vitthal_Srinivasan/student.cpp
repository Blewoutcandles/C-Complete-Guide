#include"student.h"

#include<iostream>

using std :: endl;
using std :: cout ;
// unsigned int Student::studentcount{0};//enable if you donot use the static inline in the student.h file
//never use the above inside any consttuctor or the destructor since it is a global value
Student :: Student(){
    cout << "No argument constructor called " << endl;
}
Student :: Student(string name, int age, string major):
    name(name), age(age), major(major){
        //map.count will return only 0 or 1.
        if(student_major_map.count(major) == 0){
            student_major_map[major] = 0;
        }

        prgpointer = new Program(major);//allocating the memory during the starting of the student constructor
        student_major_map[major]++;
        studentcount++;
        // ++ studentcount;//for private accessing of the variable studentcount
}


string Student :: get_name() const{
    return name;
}
float Student :: get_age() const{
    return age;
}

string Student :: get_major_name() const{
    return major;
}

int Student :: get_major_count(string major) {
    return student_major_map[major];//when accessing the static members of the class we should specify the class nothing more needed
}

int Student :: get_studentcount() const{
    return  studentcount; 
}

/**Note important points to note:
 * The static and const cannot be simultaneously used
 * since const is a keyword that make sure that the bits that constitute the object does not change
 * For static methods the "this" pointer is not implicitly passed.
 * So whenever trying to access the function or the variables that are defined static, use Class :: and the scope resolution operator
 * Static variables tend to change throughout the program so usage of const produces error
 * eventhough static variables declared in the private section of the class, you could not access it modern c++ compilers
 * however in older version you could access the private section if you have declared it using the static keyword but operations are permitted
 * if you want to access the private variables of the class then use getter function 
*/

void Student :: deregister_student(const Student & student){
    //operations are permitted on the static variables 
    student_major_map[student.major]--;//student.major shows the accessing of the particular object major in the private which shows that the
    //static keyword or functions allows the privilege to access both the private or the public variables of the class
    //that's why we can  access the private variable of the class no need to specify the class name here when using the static variables
}

Student :: ~Student(){
    //no argument or parameters or the initialization list
    delete prgpointer;//deletino of the prgpointer where we allocate the memory for it

    cout << "Deleting the program pointer" << endl;
    prgpointer = nullptr;
    cout << "The destructor for the class student is called" << endl;
}