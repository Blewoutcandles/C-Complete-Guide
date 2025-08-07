#include "graduatestudent.h"

using std :: is_base_of_v;

int main(){
    Student sumaiya;
    GraduateStudent Asiya;

    sumaiya.set_name("Sumaiya");
    sumaiya.set_grade(12);
    sumaiya.major = "Science";

    Asiya.set_name("Asiya");
    Asiya.set_grade(5);//protected member should be accessed within the inheritance hierarchy and not outside
    Asiya.set_scholarship(true);
    Asiya.major = "Archaeology";

    cout << "**********************************" << endl;
    cout << "Student name : " << sumaiya.get_name() << endl;
    cout << sumaiya.get_name() << "'s grade : " << sumaiya.get_grade() << endl;
    cout << "\n**********************************" << endl;

    cout << "Graduate Student name : " << Asiya.get_name() << endl;
    cout << Asiya.get_name() << "'s grade : " << Asiya.get_grade() << endl;
    cout << "Scholarship status : " << std :: boolalpha << Asiya.get_scholarship()<< endl;
    cout << "\n**********************************" << endl;

    cout << "***************Information Dashboard****************" << endl;

    Asiya.display_info();

    cout <<"Student" << typeid(sumaiya).name() << endl;
    cout <<"Graduate Student " << typeid(Asiya).name() << endl;
    cout << std :: boolalpha <<"Student is a base/parent class of the Graduate Student" << is_base_of_v<Student, GraduateStudent> << endl;
    cout << std :: boolalpha << "Graduate Student is the base class of the Student" << is_base_of_v<GraduateStudent, Student > << endl;
   
    return 0;
}

