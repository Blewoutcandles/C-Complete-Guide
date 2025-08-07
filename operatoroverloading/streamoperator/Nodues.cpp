#include "Nodues.h"

using std :: cout;
using std :: endl;
Noduesform :: Noduesform(std :: string name, float amount):
    name(name), amount(amount){
        cout <<"Construction card " << name << " " << amount << endl;
    }
std :: string Noduesform :: get_name() const{
    return name;
}

float Noduesform :: get_amount() const{
    return amount;
}

Noduesform :: ~Noduesform(){
    cout << "Destruction card "  << endl;
}