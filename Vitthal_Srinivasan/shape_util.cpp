#include "constants.h"
#include "circle.h"
#include "shape_uitl.h"
// namespace shape_utilities{
//    float  get_perimeter(const shapes :: Circle &circle){
//         return 2* constants:: pi *circle.get_radius();
//     }      

//     float get_area(const shapes :: Circle &circle){
//         return constants :: pi *  circle.get_radius()* circle.get_radius();//defining in the constants namespace so whenever trying to access the
//     //variables we have to specify the constants:: operator before accessing the particular function inside the namespace
//     }
// }
//in the above we are using the abbreviated form of using the namespaces however we can reduce the usage by 
//using "using" keyword

using constants :: pi;//define here use only variable
using shapes :: Circle;

namespace shape_utilities{
   float  get_perimeter(const Circle &circle){
        return 2* pi *circle.get_radius();
    }      

    float get_area(const Circle &circle){
        return pi *  circle.get_radius()* circle.get_radius();//defining in the constants namespace so whenever trying to access the
    //variables we have to specify the constants:: operator before accessing the particular function inside the namespace
    }
}


