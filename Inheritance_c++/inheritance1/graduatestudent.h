#pragma once

#include"student.h"

class GraduateStudent : private Student{
    
    private:
        bool scholarship;
    public:
        using Student :: get_name;
        using Student :: get_grade;
        using Student :: set_name;
        using Student :: set_grade;
        using Student :: major;
        GraduateStudent() = default;
        void set_scholarship(bool s);
        bool get_scholarship();
        void display_info();
};