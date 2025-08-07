#include "bankaccount2.h"


//this namespace contains some arithmetic overloading operator like == , <= , >= and also !- 
int main(){
    Bankaccount Umar{120000, "Umar", 123};
    Bankaccount Araf{120000, "Neemo", 439};
    Umar.show();
    Araf.show();
    if(Umar > Araf){
        cout << "Umar is wealthier than Araf" << endl;
    }
    else if(Araf < Umar){
        cout <<"Araf is wealthier than Umar" << endl;
    }
    else if(Araf == Umar){
        cout <<"Araf and Umar are wealthier" << endl;
    }
    //usage of rel_ops operator
    if(Umar>=Araf){//donot work for built in type
        cout << "operator >= from std :: rel_ops" << endl;
    }
    if(Umar <= Araf){
        cout << "operator <= from std :: rel_ops" << endl;
    }
    // if(Umar != Araf){//deprecated type for the current version
    //     cout << "operator != invoked from the std :: rel_ops" << endl;
    // }
    return 0;
}
