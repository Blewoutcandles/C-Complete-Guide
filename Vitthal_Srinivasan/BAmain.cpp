#include "bankaccount.h"


void update_and_display_bankaccount(bankaccount bank_account){
    bank_account.set_balance(102030);
    bank_account.display();
}

int main(){
    bankaccount mandela{"Mandela", 100000, "Savings"};
    // bankaccount mandela_copy{mandela};
    // mandela_copy.set_credit_limit(1000);
    mandela.set_credit_limit(2000);

    
    cout << "Before invoking the function" << endl;
    update_and_display_bankaccount(mandela);
    cout << "After invoking the function" << endl;
    //  mandela_copy.get_credit_limit() ;
    mandela.get_credit_limit();
    // cout << "********Original************" << endl; 
    // cout << mandela_copy.get_name() <<endl;
    // cout << "********Balance************" << endl; 
    // cout << mandela_copy.get_balance() <<endl;
    // cout << "********Account Type************" << endl; 
    // cout << mandela_copy.get_accounttype() <<endl;
    // cout << "********Account Information************" << endl; 
    // mandela_copy.set_balance(64733);
    // mandela_copy.display();


    return 0;
}

/*op:
    Constructing Mandela balance :100000 Account type : Savings//initial constructor invokation
Before invoking the function//statement
Copy Constructing Mandela balance :100000 Account type : Savings//compiler implicitly creating a constructor copy
Mandela 102030 Savings//display function inside the update and print
Just destructor got invoked nothing moreMandela102030//destructing the copied constructor 
After invoking the function
Just destructor got invoked nothing moreMandela100000///destructing the main constructor
NOTE: passing by value will create constructor implicitly by compiler itself
if we replace the paramter with the reference then changes will be reflected to the original constructor bankaccount

NOTE: when it's essential to create a copy constructor whenever we have pointer that are dynamically allocated 
in the free store, then the resources need to be cleaned up
*/
