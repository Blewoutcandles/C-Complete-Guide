#include"graduatestudent.h"

GraduateStudent::GraduateStudent(string name, bool teaching_assistantship):
    Student(name), teaching_assistantship(teaching_assistantship){

    }

bool GraduateStudent::has_teaching_assistantship() const{
    return teaching_assistantship;
}
float GraduateStudent::compute_tuition() const{
    float tuition = 45000 * 2;
    if(teaching_assistantship){
        tuition *= 0.2;
    }
    return tuition;
}