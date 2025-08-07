#include "creditcard.h"

CREDITCARD :: CREDITCARD(string name, float limit):
    name(name),limit(limit){
        std :: cout  << " Credit card construction :  " << name  <<" with "<< limit << std :: endl;
    }

CREDITCARD :: ~CREDITCARD(){
    cout <<"Creditcard destruction : " << name << "with limit" << limit << endl;
}