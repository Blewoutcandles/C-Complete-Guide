#pragma once
#include<cmath>


// class Circle{
//     private:
//         float radius;
//     public:
//         explicit Circle(float r);
//         float get_area(){//this type of function is called inline function which is usually defined in the 
//         // .h files rather than the .cpp files. 
//         //this is the way of telling the compiler that expand this function inline to the calling code.
//         //which inturn increases the efficiency of the program execution and run time reduction.
//         //inline - to include the code inside the file which contains the calling code of the function
//             return M_PI * radius *radius;
//         }
//         bool islargercircle(Circle Other_circle);
// };

// class Circle{
//         float radius;
  
//         explicit Circle(float r);
//         float get_area(){//this type of function is called inline function which is usually defined in the 
//         // .h files rather than the .cpp files. 
//         //this is the way of telling the compiler that expand this function inline to the calling code.
//         //which inturn increases the efficiency of the program execution and run time reduction.
//         //inline - to include the code inside the file which contains the calling code of the function
//             return M_PI * radius *radius;
//         }
//         bool islargercircle(Circle Other_circle);
// };
/*now in the above we have removed the access modifiers so all the member variables and functions in teh
class turns to be private. So accessing them is prohibited so when compiling it genreates error
how to mitigate the above error we have to specify the word struct rather than the class keyword*/
struct  Circle{
    private:
        float radius;
    public:
        explicit Circle(float r);
        float get_area(){//this type of function is called inline function which is usually defined in the 
        // .h files rather than the .cpp files. 
        //this is the way of telling the compiler that expand this function inline to the calling code.
        //which inturn increases the efficiency of the program execution and run time reduction.
        //inline - to include the code inside the file which contains the calling code of the function
            return M_PI * radius *radius;
        }
        bool islargercircle(Circle Other_circle);
};
/*Note by default all the members in the class is private whereas in struct all the members are public 
except from the way you define it here you could only access the public functions if you try to access thje 
private members it would still generate the errors.
*/
