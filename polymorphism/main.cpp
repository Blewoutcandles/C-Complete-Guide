#include "speakers.h"

int main(){
    AudioDevice ad("jbl", 1200);
    Speakers sp("Bose",600, "10in x 12 in x 4");
    cout << "Brand : " << ad.get_brand() << "\nPrice : " << ad.get_price() << endl;
    ad.display_price();
    // cout << "Brand : " << sp.get_brand() << "Default price :  " << sp.AudioDevice::get_price()\
    // <<"\nUpdated Price : " << sp.get_price(9.99) << endl;
    //changing the implementation of the speakers class
    // cout <<"Brand : " << sp.get_brand() << " price : " << sp.get_price() << " updated price : " << sp.get_price(9.99) << endl;
    //after changing the get_price(float discount_in_percent) in the derived class to float get_price()const;
    
    cout <<"Brand : " << sp.get_brand() << "\nprice : " << sp.get_price() << endl;
    // cout <<"price form base class : " << sp.AudioDevice :: get_price() << endl;

    //implementing the pointers to access the functions of classes
    // Speakers *sptr(&sp);
    // AudioDevice *aptr(&sp);
    // cout << "pointer invokation, brand : " << sptr -> get_brand() <<" price : "<< sptr -> get_price() << endl;
    // cout << "pointer invokatino, brand : " << aptr -> get_brand() << " price : " << aptr -> get_price() << endl;
    // //invoking form the base class for the above statement while the first one invoke the derived class
    // Speakers &sptr1(sp);
    // AudioDevice &aptr1(sp);
    // cout << "pointer invokation, brand : " << sptr1 . get_brand() <<" price : "<< sptr1.get_price() << endl;
    // cout << "pointer invokatino, brand : " << aptr1 . get_brand() << " price : " << aptr1 . get_price() << endl;
    //testing the above through reference result: reference = pointers working same as expected
    sp.display_price();


    return 0;
}


/*NOTE:
static dispatch: when get_price is implemented in bothe the speakers and audiodevice class then when invoking the 
speaker object's get_price() only get_price method of the derived class- speakers visible to the compiler 
and has hidden the base class function get_price() leading to a term called "static dispatch"*/

/*why static binding is dangerous : 
Brand : jbl
Price : 1200
Brand : jbl
price : 1200
Brand : Bose
price : 540.06
Brand : Bose
price : 600
in the display price() invoking by both class objects 
first base class audio device */