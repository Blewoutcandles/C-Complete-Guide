#include<iostream>
#include<map>
#include<algorithm>
#include<string>

using namespace std;
using std::cout;
using std :: cin;
using std :: getline;
using std :: string;
using std :: string_view;

void formatting_string(std :: string_view firstname, std :: string_view lastname);
//the word string_view is sort of const char * which mitigate the error of directly passing the string literals as arguments
//do not use that with the & symbol since it is already const char *
int main(){
    formatting_string("Mohamed", "Marzjuk");
    return 0;
}

void formatting_string(std :: string_view firstname, std :: string_view lastname){
    cout<<"The name is " << firstname << lastname << endl;
    // cout << "The name is " + firstname + lastname  <<endl;
    
}

