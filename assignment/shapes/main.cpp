#include"circle.h"
#include"square.h"
#include<iomanip>


int main(){
    square box;
    Circle earth;
    rectangle eraser;
    cout <<"************DEFAULT CONSTRUCTOR********" << endl;
    cout << "Area of the box is : "<<std :: fixed << std :: setprecision(1)<< box.get_area() << endl;
    cout << "Perimeter of the box is : "<<std :: fixed << std :: setprecision(1)<< box.get_perimeter() << endl;
    cout << "Area of the earth is : "<<std :: fixed << std :: setprecision(2) <<earth.get_area() << endl;
    cout << "Perimeter of the earth is : "<<std :: fixed << std :: setprecision(1)<< earth.get_perimeter() << endl;
    cout << "Area of the eraser is : "<<std :: fixed << std :: setprecision(1)<< eraser.get_area() << endl;
    cout << "Perimeter of the eraser is : "<<std :: fixed << std :: setprecision(1)<< eraser.get_perimeter() << endl;
    cout <<"************************************" << endl << endl;

    square box2(5);
    Circle sphere(2.0);
    rectangle pencilbox(3,4);
    cout <<"************PARAMETERIZED CONSTRUCTOR********" << endl;
    cout << "Area of the box2 is : "<<std :: fixed << std :: setprecision(1)<<box2.get_area() << endl;
    cout << "Perimeter of the box2 is : "<<std :: fixed << std :: setprecision(1)<<box2.get_perimeter() << endl;
    cout << "Area of the sphere is : "<<std :: fixed << std :: setprecision(2)<<sphere.get_area() << endl;
    cout << "Perimeter of the sphere is : "<<std :: fixed << std :: setprecision(1)<<sphere.get_perimeter() << endl;
    cout << "Area of the pencilbox is : "<<std :: fixed << std :: setprecision(1)<<pencilbox.get_area() << endl;
    cout << "Perimeter of the pencilbox is : "<<std :: fixed << std :: setprecision(1)<<pencilbox.get_perimeter() << endl;
    cout <<"************************************" << endl << endl;

    square box3(box2);
    Circle sphere2(sphere);
    rectangle pencilbox2(pencilbox);
    cout <<"************COPY CONSTRUCTOR********" << endl;
    cout << "Area of the box3 is : "<<std :: fixed << std :: setprecision(1)<<box3.get_area() << endl;
    cout << "Perimeter of the box3 is : "<<std :: fixed << std :: setprecision(1)<<box3.get_perimeter() << endl;
    cout << "Area of the sphere2 is : "<<std :: fixed << std :: setprecision(2)<<sphere2.get_area() << endl;
    cout << "Perimeter of the sphere2 is : "<<std :: fixed << std :: setprecision(1)<<sphere2.get_perimeter() << endl;
    cout << "Area of the pencilbox2 is : "<<std :: fixed << std :: setprecision(1)<<pencilbox2.get_area() << endl;
    cout << "Perimeter of the pencilbox2 is : "<<std :: fixed << std :: setprecision(1)<<pencilbox2.get_perimeter() << endl;
    cout <<"************************************" << endl << endl;

    return 0;
}

/*output: 
************DEFAULT CONSTRUCTOR********
Area of the box is : 1.0
Perimeter of the box is : 4.0
Area of the earth is : 3.14
Perimeter of the earth is : 6.3
Area of the eraser is : 1.0
Perimeter of the eraser is : 4.0
************************************

************PARAMETERIZED CONSTRUCTOR********
Area of the box2 is : 25.0
Perimeter of the box2 is : 20.0
Area of the sphere is : 12.57
Perimeter of the sphere is : 12.6
Area of the pencilbox is : 12.0
Perimeter of the pencilbox is : 14.0
************************************

************COPY CONSTRUCTOR********
Area of the box3 is : 25.0
Perimeter of the box3 is : 20.0
Area of the sphere2 is : 12.57
Perimeter of the sphere2 is : 12.6
Area of the pencilbox2 is : 12.0
Perimeter of the pencilbox2 is : 14.0
*/
