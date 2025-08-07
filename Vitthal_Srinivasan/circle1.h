#pragma once
#include<cmath>

class Circle{
    private:
        float radius;
    public:
        Circle(float r);
        float get_area(){//this type of function is called inline function which is usually defined in the 
        // .h files rather than the .cpp files. 
        //this is the way of telling the compiler that expand this function inline to the calling code.
        //which inturn increases the efficiency of the program execution and run time reduction.
        //inline - to include the code inside the file which contains the calling code of the function
            return M_PI * radius *radius;
        }
        bool islargercircle(Circle Other_circle);
};
