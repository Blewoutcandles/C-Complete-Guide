#include "student.h"
#include<iostream>


using std :: string;
using namespace std;

int main(){
    Student student1{"Gintoki", 27, "Chemistry"};
    Student student2{"shinsuke", 25, "Physics"};
    Student student3{"Oboro" ,32, "Chemistry"};
    // Student student4{"Katsura", 28, "Physics"};
    // // cout << student1.studentcount << endl;
    // cout << student1.get_major_count("Physics") << endl;
    // cout << student2.get_major_count("Chemistry") << endl;
    // cout << "The total number of the students in the classroom is " << student1.get_studentcount() << endl;
    //     /*Note you cannot access the private variable in a class however you could access it through get func
    //     -tion that is you cannot directly access the variables that defined in the private section of the class 
    //     but in public you can access whatever you want*/
    // cout << "The total number of student in the classroom through the  " << student1.get_studentcount()<<endl;
    // cout << "The total number of students in the classroom accessing through class" << Student :: get_major_count("Chemistry") << endl;

    // Student :: deregister_student(student1);
    // cout <<"The major count after deregistering accounts to" << Student :: get_major_count("Chemistry") << endl;
    //usage of pointer in the class structures
    // Student *robert = new Student {"Robert", 23, "Maths"};//allocating on the free store
    // cout << "Print the student count for the particular major" << endl;
    // delete robert;
    // robert = nullptr;

    // Student *studentarr = new Student[3] {};
    // delete []studentarr;//do not specify the size of the studentarr here
    // studentarr  = nullptr;

    
    return 0;
}


