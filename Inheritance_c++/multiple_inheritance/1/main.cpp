#include"classCar.h"

int main(){
    Car lambo{"Lambo", "v21.6", 35000, "music system, heated seats", 3000};
    Car gtr("Nissan", "skyline", 32000, "music system, voice commands", 10000);
    cout << "-------------------Lambo--------------" << endl;
    cout << "Prices : " << lambo.Vehicle :: get_price() << endl;
    cout << "Accessories price : " << lambo.Accessories :: get_price() << endl;
    cout << "Taxes : " << lambo.get_taxes() << endl;
    cout << "------------------gtr------------------" << endl;
    cout << "Prices : " << gtr.Vehicle :: get_price() << endl;
    cout << "Accessories prices : " << gtr.Accessories :: get_price() << endl;
    cout << "Taxes : " << gtr.get_taxes() << endl;
    /*inorder to differentiate between the get_prices function in different headerfiles we have to use the respective class 
    with scope resolution operator to disambiguate between the funciton call invocation*/

    /*now making function calls are too difficult so reducing it through using constructs
    along with seenthe car header file scope resolution operator*/
    /*while doing so function parenthesis should not be mentioned*/

    //now we can remove the long function calling
       cout << "-------------------Lambo--------------" << endl;
    cout << "Prices : " << lambo.get_price() << endl;
    cout << "Accessories price : " << lambo.Accessories :: get_price() << endl;
    cout << "Taxes : " << lambo.taxes() << endl;
    cout << "------------------gtr------------------" << endl;
    cout << "Prices : " << gtr.get_price()<< endl;
    cout << "Accessories prices : " << gtr.Accessories :: get_price() << endl;
    cout << "Taxes : " << gtr.taxes() << endl;

    //making the virtual implementation of the get_prices in vehicle and in accessories
    


    return 0;
}