#include<iostream>
#include<algorithm>

using namespace std ;

int main(){
    int number;
    while(true){
        cout << "Enter the number (-1 to exit)" ;
        cin >>  number;
        try{
            if(number == -1)
                throw"User warnings Exiting the program";
            if(number % 2 == 0)//if the above any of the two catches then the statement after the throw i.e after the if conditions  will not be executed 
            //
                throw 8;
            cout<< "Square of the number is" << number*number<< endl;
        }
        catch(const char*message){
            cout << message << endl;
            cout << "Goodbye.." << endl;
            break;
        }
        catch(int except){
            cout << "Haha odd number is not accepted"  <<endl;
        }
    }
    return 0;
}