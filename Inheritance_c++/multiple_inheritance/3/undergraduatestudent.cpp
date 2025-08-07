#include"undergraduatestudent.h"

UndergraduateStudent :: UndergraduateStudent(string name, string major):
    Student(name), major(major){
}
string UndergraduateStudent ::get_major() const{
    return major;
}
        
float UndergraduateStudent ::compute_tuition() const{
    return 60000*4;
}