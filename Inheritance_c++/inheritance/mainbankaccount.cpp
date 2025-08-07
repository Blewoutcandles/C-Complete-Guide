#include "bankaccount.h"

using namespace std;

int main(){
    // Bankaccount ethan{3400};
    // Bankaccount carolina{780};
    // ethan.deposit(1300);
    // carolina.deposit(2500);
    // ethan.withdraw(4500);
    // carolina.withdraw(1200);
    // ethan.display();
    // carolina.display();
    // cout << "Address of the ethan object " << &ethan << endl;
    // cout << "Address of the carolina object " << &carolina << endl;
    /*PS C:\c++\inheritance> ./a
Amount deposited is : 1300
New Bank Balance is  : 4700
Amount deposited is : 2500
New Bank Balance is  : 3280
amount withdrawn is : 4500
Remaining bankbalance is : 200
amount withdrawn is : 1200
Remaining bankbalance is : 2080
Address of the account holder object0x2e491ffbec
Bankbalance : 200
Address of the account holder object0x2e491ffbe8
Bankbalance : 2080
Address of the ethan object 0x2e491ffbec
Address of the carolina object 0x2e491ffbe8   output for hte above code*/

/**second implementation through return ing the this pointer from the function and invoking consequent functions
 * from the this variabl eof the particular object
 * */
    // Bankaccount ethan{3400};
    // Bankaccount carolina{780};
    // ethan.deposit(1300)->withdraw(4500)->display();//here this return s the pointer to the bankaccount os we can invoke successive methods on teh 
    // //object pointer, also note ethan.deposit (1300) is a stack object so we are using the dot operator
    //,for the returning functions we are using -> operator.
    // carolina.deposit(2500)->withdraw(1200)->display();
    // // ethan.withdraw(4500);
    // // carolina.withdraw(1200);
    // cout << "Address of the ethan object " << &ethan << endl;
    // cout << "Address of the carolina object " << &carolina << endl;
    /*output : 
    Amount deposited is : 1300
New Bank Balance is  : 4700
amount withdrawn is : 4500
Remaining bankbalance is : 200
Address of the account holder object0x2c47fff6ec
Bankbalance : 200
Amount deposited is : 2500
New Bank Balance is  : 3280
amount withdrawn is : 1200
Remaining bankbalance is : 2080
Address of the account holder object0x2c47fff6e8
Bankbalance : 2080
Address of the ethan object 0x2c47fff6ec
Address of the carolina object 0x2c47fff6e8
    */

   /*third implementation*/

    // Bankaccount ethan{3400};
    // Bankaccount carolina{780};
    // ethan.deposit(1300).withdraw(4500).display();
    // carolina.deposit(2500).withdraw(1200).display();
    // // ethan.withdraw(4500);
    // // carolina.withdraw(1200);
    // // ethan.display();
    // // carolina.display();
    // cout << "Address of the ethan object " << &ethan << endl;
    // cout << "Address of the carolina object " << &carolina << endl;
    /*output:
Amount deposited is : 1300
New Bank Balance is  : 4700
amount withdrawn is : 4500
Remaining bankbalance is : 200
Address of the account holder object0xd7fc3ffd5c
Bankbalance : 200
Amount deposited is : 2500
New Bank Balance is  : 3280
amount withdrawn is : 1200
Remaining bankbalance is : 2080
Address of the account holder object0xd7fc3ffd58
Bankbalance : 2080
Address of the ethan object 0xd7fc3ffd5c
Address of the carolina object 0xd7fc3ffd58
*/  

/**Fourth implementation*/
// const Bankaccount erastothenesis{1200};
// cout << erastothenesis.get_bank_balance() << endl;
//the above function should be of const at suffix other wise compiler would return the error\/*
/*error message:
mainbankaccount.cpp:93:40: error: passing 'const Bankaccount' as 'this' argument discards qualifiers [-fpermissive]
   93 | cout << erastothenesis.get_bank_balance() << endl;
      |         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~
In file included from mainbankaccount.cpp:1:
bankaccount.h:11:15: note:   in call to 'float Bankaccount::get_bank_balance()'

   11 |         float get_bank_balance();

*/

/*fifth implementation*/
// Bankaccount meridia(3200);
// cout << meridia.get_bank_balance() << endl;
/*note  : a const function can be invoked by both const and non const functionbut only a const function can be invoked 
on a const class object*/

// output for the fifteh implementation
// Invoking the const method function
// 1200
// invoking the non const function
// 3200

/*sixth implementation*/
// Bankaccount erastothenesis{1200};
// const Bankaccount& erastothenesis_ref(erastothenesis);
/*SEE: here the bankaccount reference type is marked as constant- erastothenesis_ref and not the erastothenesis
however invoking functions other than const for the erastothenesis will cause erros and invoking const or non
const functions to erastothenesis or changing of values of the object does not cause errors*/
// cout << erastothenesis.get_bank_balance() << endl;
// cout << erastothenesis_ref.get_bank_balance() << endl;
// cout << &erastothenesis.deposit(1000) << endl;//returning the object so we are printing the address
// cout << "After depositing 1000" << endl << erastothenesis.get_bank_balance() << endl;
// cout << erastothenesis_ref.get_bank_balance() << endl;
// // erastothenesis_ref.deposit(10000);
//trying to change the erastothenesis_ref (const) using the bankaccount class 
//will show following error:
/*mainbankaccount.cpp: In function 'int main()':
mainbankaccount.cpp:129:27: error: passing 'const Bankaccount' as 'this' argument discards qualifiers [-fpermissive]
  129 | erastothenesis_ref.deposit(10000);    
      | ~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~~     
In file included from mainbankaccount.cpp:1:  
bankaccount.h:24:22: note:   in call to 'Bankaccount& Bankaccount::deposit(float)'
   24 |         Bankaccount& deposit(float amount);*/

   //seventh implementation
   /* about returning the nonconst value for the const function*/
    // Bankaccount hamilton{120000};
    // hamilton.get_bank_balance() = 9900000;
    // cout << hamilton.get_bank_balance() << endl;//if the get_bank_balance is set as constant 
    //then there would be an compilation error
    /*this above method is quite unsual but its the way of assigning the values to the object variables
    here setting the bamkbalance*/
    /*intuition is to return the non const variable for the const function*/

    /*eight implementation*/
    // const Bankaccount terrace(2300);
    // /*keyword: const_cast<return type> (onject parameter) : used to cast away the const keyword of the 
    // particular class object marked as const*/
    // Bankaccount& terrace_ref = const_cast<Bankaccount&>(terrace);
    // //now we can set the values or modify the values of the object terrace
    // terrace_ref.set_bank_balance(4500);
    // cout << terrace.get_bank_balance() << endl;
    //here it should be updated as 4500

    /*output:
    Invoking the const method function
4500*/

/*ninth implemenation*/
const Bankaccount cloud{23000};
cout << "**********************Checking the bank balance******************* "<< endl;
cout << cloud.get_bank_balance() << endl;
    cout << cloud.get_bank_balance() << endl;
    cout << cloud.get_bank_balance() << endl;
    /*ninth implementation output:
    **********************Checking the bank balance******************* 
The balance at 1 is 23000
Invoking the const method function
23000
The balance at 2 is 23000
Invoking the const method function
23000
The balance at 3 is 23000
Invoking the const method function
23000*/
    return 0;

}