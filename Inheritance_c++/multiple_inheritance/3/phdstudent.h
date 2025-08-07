#pragma once

#include"graduatestudent.h"

class PhdStudent : public GraduateStudent{
    private:
        bool research_assistantship;
    public:
        bool has_research_assistantship() const;
        PhdStudent(string name, bool teaching_assistantship, bool research_assistantship);
        float compute_tuition() const override;
};