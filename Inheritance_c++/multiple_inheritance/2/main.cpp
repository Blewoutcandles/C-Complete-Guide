#include"HeatedLeatherSeats.h"

using std :: cout;
using std :: cin;
using std :: endl;

int main(){
    HeatedLeatherSeats hl_seats{2000,1000, 30,"red"};
    cout << "------------Heated Leather Seats---------------" << endl;
    cout <<"Price. " << hl_seats.HeatedSeats :: get_price() << endl;
    cout << "Temperature : "  << hl_seats.get_max_temperature() << endl;
    cout << "color of the seat is " << hl_seats.get_color() << endl;
    cout << "Price. " << hl_seats.LeatherSeats :: get_price() << endl;
    cout << "Heated Leather Seats price :  "<< hl_seats.get_price() << endl;
    /*Note : in diamond hierarchy we could not inherit multiple base classes in ot the derived class
    which already contains the base class, this is where the virtual keyword helps in
    the word virtual as it name suggests is imaginary so the virtually inheriting derived classes 
    will have access to the base class members but when theses derived classes are inherited to the
    grand child classes then there will not any issue if we create " a separate base class -(real)" 
    in the grand child classes, it is mandatory to create the base class in the grand child class
    --> here the get_price which we could not make use of before could now be able to 
    access with the updated values of the leather seats and heated seats.*/

    /*warning : if we do not use the virtual keyword while inheriting the base class to teh derived classes 
    then multiple inheritance of the base class may results which pave the way for the ambiguity :(( */
    

    return 0;
}