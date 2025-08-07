#include "bankaccount.h"

bankaccount :: bankaccount(string name, float balance, string accounttype):
    name(name) , balance(balance), accounttype(accounttype){//these function based assignation dont think it is a function

        credit_card = new CreditCard("Visa" ,2000); 
       cout << "Constructing " << name << " balance :" << balance << " Account type : " <<accounttype<< endl; 
    }
/*NOTE: when creating the copy constructor passing the known constructor as pass by reference is necessary
constructor is like the infrastructure*/
// bankaccount :: bankaccount(const bankaccount& copy_account):
//     name(copy_account.name), balance(copy_account.balance), accounttype(copy_account.accounttype){
   
//         cout << "Copy Constructing " << name << " balance :" << balance << " Account type : " <<accounttype<< endl; 
//     }
bankaccount :: bankaccount(const bankaccount& copy_account) = default;

    

float bankaccount :: get_balance() const{
    return this->balance;
}

void  bankaccount::set_balance(float amount) {
    balance = amount;//this is not needed since it is referring to the same class
}

void bankaccount :: set_credit_limit(float l){
    this->credit_card -> set_limit(l);//this word contains the address of the object bankaccount
}
void bankaccount::get_credit_limit(){
    this ->credit_card->get_creditlimit();
}

string bankaccount :: get_name() const{
    return name;
}

string bankaccount :: get_accounttype() const{
    return this->accounttype;
}

void bankaccount :: display() const{//syntax type: returntype classname (parameters)
    cout<< name<< ' ' << balance << ' ' << accounttype << endl;
}
bankaccount :: ~bankaccount(){
    cout << endl;
    delete credit_card;//delete the credit_card
    cout<<"Just destructor got invoked nothing more" << name <<balance <<  endl;//the variables  are not pointers so destructor 
    //will have no effect on them
}

