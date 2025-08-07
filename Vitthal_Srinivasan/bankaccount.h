
#ifndef bankaccount_h
#define bankaccoutn_h

#include"creditcard.h"

using std :: string;
using std :: cout;
using std :: cin;
using std :: endl;

class bankaccount{
    private:
        string name;
        float balance;
        string accounttype;
        CreditCard *credit_card;

    public:
    bankaccount(string name, float balance,string accounttype);//parameterized constructor
 
    bankaccount (const bankaccount& bank_account);//manual implementation
   // bankaccount (const bankaccount& bank_account) = default;
    // bankaccount (const bankaccount& bank_account) = delete;
    //adding the copy constructor ,default means 
    //allowinf the compiler to copy the contents from the old constructor to the new constructor
    //that's y mandela and mandela_copy have the same parameters however changes to the mandela will not reflect to
    //the mandela copy
    /**Instead of the above default keyword if you replace it with " delete " keyword then compiler will not 
     * take the task in its hand of default copying from one constructor to another which may throw error without 
     * manual implementation of the code 
     * 
     * POINT: now consider this if we remove the ambersand symbol while having the const keyword
     * bankaccount (const bankaccount bank_account); this is wrong because 
     * when function parameters are call by values then copying of the values will take place however here 
     * the parameter is the constructor and funtion to create a copy constructor is this funciton itself so it will result in
     * infinite recursion so dont make that mistake
    */
   void set_credit_limit(float limit);
   void get_credit_limit();
    string get() const;
    string set() const;
    float get_balance () const;
    void set_balance(float amount);
    string get_name() const;
    string get_accounttype() const;
    void display() const;
    ~bankaccount(); 

};


#endif