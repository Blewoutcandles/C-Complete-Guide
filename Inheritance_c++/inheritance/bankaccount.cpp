#include "bankaccount.h"
using namespace std ;
Bankaccount :: Bankaccount(float bankbalance):
bankbalance(bankbalance){
}
// float Bankaccount :: get_bank_balance()const{
//     return this->bankbalance;
// }

// bool Bankaccount :: withdraw(float amount){
//     if(amount <= bankbalance){bankbalance -= amount;
//     cout << "amount withdrawn is : " << amount << endl;
//     cout << "Remaining bankbalance is : " << bankbalance << endl;
//     return true;
//     }
//     cout << "Sorry mate Insufficient balance " << bankbalance << endl;
//     return false;
// }
// bool Bankaccount :: deposit(float amount){
//     if(amount <= 0) return false;
//     bankbalance += amount;
//     cout << "Amount deposited is : " << amount << endl;
//     cout  << "New Bank Balance is  : " << bankbalance << endl;
//     return true;
// }

void Bankaccount :: display(){
      std :: cout << "Address of the account holder object" << this << std :: endl; //actuaLly this is a pointer for teh object 
      //being creatted so you can access the variables inside the class through -> operator.
      cout << "Bankbalance : " << this->bankbalance << endl; 

      
}
/*second implementation*/

// Bankaccount* Bankaccount :: withdraw(float amount){
//     if(amount <= bankbalance){bankbalance -= amount;
//     cout << "amount withdrawn is : " << amount << endl;
//     cout << "Remaining bankbalance is : " << bankbalance << endl;
//     return this;
//     }
//     cout << "Sorry mate Insufficient balance " << bankbalance << endl;
//     return this;
// }
// Bankaccount* Bankaccount :: deposit(float amount){
//     bankbalance += amount;
//     cout << "Amount deposited is : " << amount << endl;
//     cout  << "New Bank Balance is  : " << bankbalance << endl;
//     return this;
// }
/*third implementation*/

Bankaccount& Bankaccount :: withdraw(float amount){//this function actually gets the reference based return
//type so just returning object instead of returning the object pointer is important 
//here this represents the object pointer and *this represents the object itself
    if(amount <= bankbalance){bankbalance -= amount;
    cout << "amount withdrawn is : " << amount << endl;
    cout << "Remaining bankbalance is : " << bankbalance << endl;
    return *this;
    }
    cout << "Sorry mate Insufficient balance " << bankbalance << endl;
    return *this;//returns the object of the class
}
Bankaccount& Bankaccount :: deposit(float amount){
    bankbalance += amount;
    cout << "Amount deposited is : " << amount << endl;
    cout  << "New Bank Balance is  : " << bankbalance << endl;
    return *this;
}

/*NOTE ; difference between the const using before the method and after hte method to check\
forexample: 
std :: string get_name() const{ 
    return name;
}
here the const keyword inteprets the method is const for the object of the class
Generally this should be implemented for the objects declared 'const' of a class

however on the other hand

const std :: string  get_name(){
    return name;
}
which inteprets as the return type which is string here in const.
*/

/**NOTE: const function:
 * you cannot invoke other functions apart from the const functions for the const bankaccount
 * object, even if you are trying to invoke other  functions from with in a const function
 * there occurs an error. fourthe implementations.
*/

/*fourth implementation */
float Bankaccount :: get_bank_balance()const/*here marked the const keyword since the bankaccount is
private(object)*/{
    // withdraw(1);//invoking non const functino within the const function will return
    //error since the bankaccount object is const in the mainbankaccount.cpp
    /*error ; bankaccount.cpp:96:13: error: passing 'const Bankaccount' as 'this' argument discards qualifiers [-fpermissive]
   96 |     withdraw(1);//invoking non const functino within the const function will return*/

    ++balance_check_count;
cout << "The balance at " << balance_check_count << " is " << bankbalance << endl;
   /*though you make the withdraw function as const you intend to change the values inside the function
   that would return the error message changing the value of the const function or const bankaccount*/
   cout << "Invoking the const method function" << endl;
    return bankbalance;
    //const is marked after the () parenthesis otherwise it would modify the return type
}

/*fifthe implementation along with thr fourth implementation*/
float& Bankaccount :: get_bank_balance(){//return type = reference type
    ++balance_check_count;
cout << "The balance at " << balance_check_count << " is " << bankbalance << endl;
    cout << "invoking the non const function" << endl;
    return bankbalance;
}


void Bankaccount :: set_bank_balance(float amount){
    bankbalance  = amount;
}

