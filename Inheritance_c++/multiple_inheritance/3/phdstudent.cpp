#include"phdstudent.h"

bool PhdStudent :: has_research_assistantship() const{
    return research_assistantship;
}

PhdStudent::PhdStudent(string name, bool teaching_assistantship, bool research_assistantship):
    GraduateStudent(name, teaching_assistantship), research_assistantship(research_assistantship){

    }
        
float PhdStudent::compute_tuition() const{
    float tuition = 35000 * 6;
    if(has_teaching_assistantship()){
        tuition *=  0.7;
    }
    return tuition;
}