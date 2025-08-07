#pragma once
#include<map>

#include"program.h"
using std :: map;
using std :: string;

class Student {
    private:
        int age;
        string name;
        string major;
        static  inline unsigned int studentcount {0};//static means global access wiht the student class
        static inline map<string,int> student_major_map{};
        Program *prgpointer;//declaring the Program class pointer here \
        after allocation and deallocation of the memory takes place
      
    public:
    
        // static unsigned int studentcount;
        //in student.cpp file declaration should be there
        // static inline unsigned int studentcount {0};//for this no need of a declaration in the student .cpp file
        //as it is a inline which allows the variable to be expanded in the calling function or where it is used 
        //implicitly or explicitly
        Student ();//no argument constructor
        Student(string n, int a, string b);
        int get_studentcount() const;
        string get_name() const;
        float get_age() const;
        string get_major_name() const;
       static int get_major_count(string major) ;//const and static cannot be used in the same statement
        static void deregister_student(const Student & student);
        ~Student();
        
};