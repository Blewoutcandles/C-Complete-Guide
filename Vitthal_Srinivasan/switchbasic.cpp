#include<iostream>

using namespace std;

using std :: getline;
using std :: string;

constexpr int string_hash(const string& str){
        int hash = 0;
        for(size_t i =0 ; i<str.size(); i++)
            hash = hash * 31 + static_cast<int>(str[i]);
        return hash;
}
int main(){
    char ch;
    cout << "Please enter the character" << endl;
    cin >> ch;
    if(std::isalpha(ch)){
        ch = std :: tolower(ch);
    switch(ch){
        case 'a':
        cout << "The character you have entered is a " << endl;
        break;

        case 'b':
        cout << "The character you have entered is b" << endl;
        break;
        
        case 'c' :
        cout << "The character you have entered is c" << endl;
        break;

        default :
        cout << "Kindly check what character you have entered" << endl;
        break;

    }
    }
    else{
        cout << "Please check what you have entered" << endl;
    }

    string status;
    getline(cin, status);

   
    // switch(status){
    //     case "not_started"://should replace with hash value calculated at the earliest
    //         cout << "The task has not been started" << endl;
    //         break;
    //     case "is_in_progress":
    //         cout << "The task is in progress" << endl;
    //         break;
    //     case "completed_success":
    //         cout << "The task has been completed successfully" <<endl;
    //         break;
    //     default:
    //         cout << "Kinldy check the console for error" << endl;
    //         break;
    // }

    return 0;
}