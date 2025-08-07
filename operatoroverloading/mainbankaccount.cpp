#include "bankaccount.h"

using namespace std;

int main(){
    Bankaccount khalid{53000, 12540};
    Bankaccount aysha{43000,490};
    // if(khalid.buy_on_balance(10000))
    // {
    //     khalid.set_credit_score( 2.5);
    // }
    // int comparision = khalid.compare(aysha);//implementing the  overloading function
    // if(comparision == 0){
    //     cout << "khalid and ayesha are equal in wealth" << endl;
    // }else if(comparision == -1){
    //     cout << "Ayeshs is wealthier than khalid" << endl;
    // }
    // else{
    //     cout << "Khalid is wealthier than ayesha" << endl;
    // }

    // cout << "After implementing the operator overloading operators < and =" << endl;
    // /*implementing hte operator overloading */
    // if(khalid < aysha){//comparision in terms of balance, see bankaccount.h
        
    //     cout << "Ayesha is wealthier than Khalid" << endl;
    // }
    // else if(khalid = aysha){
    //     cout << "khalid and ayesha are equal in wealth" << endl;
    // }
    // else{
    //     cout << "khalid is wealthier than ayesha" << endl;
    // }

    // /*implementing hte different version of the operator*/
    // if(khalid < 12000){//comparision in terms of balance, see bankaccount.h
        
    //     cout << "khalid has more than 12000 in his account" << endl;
    // }
    // else{
    //     cout << "khalid has less than 12000 in his account" << endl;
    // }
    // implementation 2 of the operator overloading
    // check the implementation on the header file of the bankaccount.h
     if(khalid/*considered first argument */ < aysha /*considered second parameter for the comparision operator*/){
        //comparision in terms of balance, see bankaccount.h
        cout << "Ayesha is wealthier than Khalid" << endl;
    }
    if(aysha/*considered first argument */ < khalid /*considered second parameter for the comparision operator*/){
        //comparision in terms of balance, see bankaccount.h
        cout << "khalid is wealthier than ayesha" << endl;
    }

    if(10000 < aysha){//implementation of the operator overloading different scenario
        cout << "aysha networth exceeds the 10000 dirhams" << endl;
    }
    return 0;
}