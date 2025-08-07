#include "exbrowser.h"

class FireFox : public Browser{
    public:
        FireFox(std :: string name) try :
            Browser(name){
                throw std :: exception();//when throwning from here too the output remainst the same as before whenwe t
                // throw exception from the exbrowser.h  file
        }
        catch(...){
            //Caught exceptions in the initialization list or the member function
            std :: cout << "Caught exceptions in the initialization list or the member function" << std ::endl;
            //if the exceptions are thrown here explicitly then the error will be rethrown
            /*The exception thrown will be cascaded up the call stack so catch block here will catch the exception also the one 
            in the exmain.cpp file so both cout << lines would be printed*/
        }
};