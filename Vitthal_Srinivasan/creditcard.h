#ifndef _creditcard_h_
#define _creditcard_h_

#include<string>
#include<iostream>
#include<vector>

class CreditCard{
    private:
        std :: string name;
        float limit;
        
        
    public:
        CreditCard(std::string name, float limit);

        void set_limit(float limit);
        void  get_creditlimit();
        void  get_name();

        ~CreditCard();//destructor no need her since it does not have any pointer based objects
};
#endif