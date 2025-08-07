#include"graduatestudent.h"

bool GraduateStudent :: get_scholarship(){
    return scholarship;
}
void GraduateStudent :: set_scholarship(bool s){
    scholarship = s;
}

void GraduateStudent :: display_info(){
    cout <<"Graduate Name : " << get_name() << "\nGrade : " << grade/*protected field of the base class 
    could be accessed within the inheritance hierarchy and not outside it consider the inheritacne hierarchy as the 
    member function of the graduatestudent class that could access the student base  class*/\
     << "\nScholarship : " << scholarship << "\n" << get_name()<<"'s Major : " << major<<endl;
}