#include "speakers.h"
#include "headphones.h"
#include "audiodevice.h"

using namespace std;

int main(){
    AudioDevice ad("skull candy", 1130.0);
    HeadPhones sony("ImmenseBass",1200, 0.15);
    Speakers jbl("JBL",399,"15in x 10in x10in");
    AudioDevice *adpointer{&ad};
    AudioDevice *sonypointer{&sony};
    AudioDevice *spointer{&jbl};
    cout << "-------------------AudioDevice---------------------" << endl;
    cout << "Brand : " <<adpointer->get_brand_name() << endl;
    cout << "Price : " << (*adpointer).get_price() << endl;
    cout <<"--------------------Head PHones---------------------" << endl;
    cout << "Brand : " << sonypointer->get_brand_name() << endl;
    cout << "Price : " << sonypointer->get_price() << endl;
    // cout << "cordlength : " << sonypointer->get_cord_length() << endl;
    cout << "-------------------speakers-------------------------" <<endl;
    cout << "Brand : " << spointer->get_brand_name() << endl;
    cout << "Price : " << spointer -> get_price () << endl;
    // cout << "dimensions : " << spointer->get_dimensions() << endl;


    return 0;
}