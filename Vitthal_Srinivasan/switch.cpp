#include<iostream>

using namespace std;

enum class taskprocess{
    not_getting_started = 0, 
    getting_started,
    will_do,
    in_progress
};
int main(){
    cout << "Enter the status " << endl;
    int status;
    cin >> status;
    taskprocess variable = static_cast <taskprocess> (status);
    switch(variable){
        case taskprocess :: not_getting_started:
            cout << "I am not going to start" << endl;
            break;
        case taskprocess :: getting_started:
            cout << "I am going to start" << endl;
            break;
        case taskprocess :: will_do:
            cout << "I will do the task" << endl;
            break;
        case taskprocess :: in_progress:
            cout << "the task is in process" << endl;
            break;
        default:
            cout << "What the hell have you typed" << endl;
            break;
    }
    
    return 0;
}