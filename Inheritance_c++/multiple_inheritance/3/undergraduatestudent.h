#pragma once
#include"student.h"

class UndergraduateStudent : public Student{
    private:
        string major;
    public:
        UndergraduateStudent(string name, string major);
        string get_major() const;
        float compute_tuition() const override;
};