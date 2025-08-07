#include<bits/stdc++.h>
#include<limits.h>
using std :: pair;
using std :: cout;
using std :: cin;
using std :: endl;
using std :: vector;
using std :: string;
using std :: exception;
using std :: make_pair;


class DivisionByZeroException {
    public:
        template< typename T>
        T division(const T& variable1, const T& variable2){
            try{
                if(variable2 == 0){
                throw std :: invalid_argument("Division by zero");
                }
            T result = variable1 /  variable2;
            return result;
            }
            catch(std :: invalid_argument& about){
                cout << "An unexpected error has been occured" << about.what() << endl;
                exit(-1);
            }
            catch(std :: exception& value){
                cout << "An exception has occured - " << value.what() << endl;
                exit(-1);
            }
        }
};


int main(){
    double a,b;
    char  choice;
    DivisionByZeroException divisionclass;
    
    while(true){
        cin >> a >> b;
        if(cin.fail()){
            cout << "please enter two valid numbers" << endl;
            cin.clear();//clear the error flag
            cin.ignore(std :: numeric_limits<std ::streamsize> :: max(), '\n');//ignore all the characters in the input buffers
        }else{
            cout << divisionclass.division(a,b) << endl;
            cout << "Do you wish to continue ? y or n" << endl;
            cin >> choice;
            if(choice == 'n') break; 
        }
    }    
    return 0;
}