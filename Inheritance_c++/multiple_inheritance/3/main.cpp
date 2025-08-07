
#include"undergraduatestudent.h"
#include"phdstudent.h"

using std :: cout;
using std :: endl;

void display_grad_student_details(const Student& student){
    const GraduateStudent& grad_student = (GraduateStudent&)student;

    cout <<"*********************************" << endl;
    cout <<"Name: " << grad_student.get_name() <<", has_teaching assistantship : "\
     << std :: boolalpha << grad_student.has_teaching_assistantship()<<", tuition : " << grad_student.compute_tuition() << endl;
     cout << endl;
}

int main(){
    GraduateStudent linda{"linda", true};
    GraduateStudent terry{"Terry", false};

    PhdStudent brandon{"brandon", false, true};
    PhdStudent mckezengie{"mcz", true, false};
    display_grad_student_details(linda);
    display_grad_student_details(terry);
    return 0;
}