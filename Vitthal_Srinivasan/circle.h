#pragma once

namespace shapes{//namespace like global declaration without semicolon at the last whenever you are trying to access the class
//use "shapes :: " operator then we have to modify the similar method invoking
    class Circle{
        private:
            float radius;

        public:
            Circle(float r);
            float get_radius() const;
    };
}
//before namespace usage
// class Circle{
//     private:
//         float radius;

//     public:
//         Circle(float r);
//         float get_radius() const;
// };