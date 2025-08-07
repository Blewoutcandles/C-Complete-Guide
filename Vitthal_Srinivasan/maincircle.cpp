#include<iostream>

#include "circle.h"
#include "shape_uitl.h"

using std :: cin;
using std :: cout;
using std :: endl;
using shapes :: Circle;
using shape_utilities :: get_perimeter;
using shape_utilities :: get_area;

int main(){
    // Circle firstcircle(14.0f); this is the example of normal functions that involve with the class 
    // cout << "The perimeter of the circle is" << get_perimeter(firstcircle) << endl;
    // cout << "The Area of the circle is " << get_area(firstcircle) << endl;
    /*below is the implementation of functions in global namespace like global accessing*/
/***to use global namespace just use the prefacing or prefixing operator*/
    // ::Circle firstcircle(10.0f);
    // cout << "The perimeter of the circle is " << ::get_perimeter(firstcircle) << endl;
    // cout << "The Area of the circle is " << ::get_area(firstcircle) << endl;
    // return 0;

    // shapes  ::Circle firstcircle(10.0f);
    // cout << "The perimeter of the circle is " << shape_utilities::get_perimeter(firstcircle) << endl;
    // cout << "The Area of the circle is " << shape_utilities::get_area(firstcircle) << endl;

    /*after implementing the using shapes_utilities :: get_perimeter and shape_utilities :: get_area*/
    Circle firstcircle(10.0f);
    cout << "The perimeter of the circle is " << get_perimeter(firstcircle) << endl;
    cout << "The Area of the circle is " << get_area(firstcircle) << endl;
}