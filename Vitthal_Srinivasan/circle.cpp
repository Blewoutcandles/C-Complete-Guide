
#include<iostream>
#include "circle.h"
using std :: cout;
using std :: endl;

namespace shapes{
 Circle :: Circle(float  r):radius(r){}

float   Circle :: get_radius() const{//get the float radius of the circle class
    return radius;
}
}


//before adding namespace
// Circle :: Circle(float radius)://initiating the constructor
//     radius(radius){}



// float Circle :: get_radius() const{//get the float radius of the circle class
//     return this->radius;
// }

// after adding namespace
//here we can include the namespace of the same name which we defined in the other files as well so the \addindex\
so that is makes the std  namespace ot include more content not just enclosed within a single file.
//whenever considering the overall namespace content it takes the union of the functions from all the files that contains the namespace name
//the declaration is similar to the //" shapes :: Circle :: Circle (float r) : "//
//initiating the constructor shapes :: Circle :: Circle(float r) : //only if not using namespace

