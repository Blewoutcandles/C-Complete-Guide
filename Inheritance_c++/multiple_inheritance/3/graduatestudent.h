#pragma once
#include"student.h"

class GraduateStudent : public Student{
    private:
        bool teaching_assistantship;
    public:
        GraduateStudent(string name, bool teaching_assistantship);
        bool has_teaching_assistantship() const;
        float compute_tuition() const override;
};