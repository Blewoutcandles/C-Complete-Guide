#include"Accountholder.h"

int main(){
    
    cout <<"XYZ BANK WELCOMES YOU" <<  endl;

    Accountholder Alice("Alice");
    Bankaccount Alice1(1001);
    Bankaccount Alice2(1002);

    Alice.add_account(Alice1);
    Alice.add_account(Alice2);
    
    Alice.display_accounts();
 
 
 
    Alice.deposit(1001, 500);

    Alice.deposit(1002, 1000);
    
    Alice.withdraw(1001,200);
    Alice.withdraw(1002,1500);

    Alice.display_accounts();

    cout << "Alice's total accounts : " << Alice.get_account_count() << endl;

    cout << "******Thanks for banking with us***********" << endl;
    return 0;
}