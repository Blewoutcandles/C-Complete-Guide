#include<algorithm>
#include<map>
#include "exbrowser.h"
#include "exfirefox.h"



using namespace std;

int main(){
    try{
    FireFox safari("safari");
    }
    catch(exception& ex){
        cout << "exception from the browser caught" <<ex.what()<< endl;
    }

    return 0;
}