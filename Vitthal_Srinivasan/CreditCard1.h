
#include<string>
#include<iostream>

class CreditCard{

    private:
        std :: string name;
        float limit;
        
    public:
        CreditCard(std::string name, float limit);

        friend class Bankaccount;
        // ~CreditCard();//destructor no need her since it does not have any pointer based objects
};
