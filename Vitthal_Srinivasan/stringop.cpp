#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<vector>

#include<cstdio>//c style standard libraries the below 2
#include<cstring>

using namespace std;
using std::cout;
using std :: cin;
using std :: getline;
using std :: string;

int main(){

    const char *firstname = "Mysore Tipu Sultan";//assignment operator
    // char *lastname = "King Solomon";//generate warning like string conversion to char * to rectify it
    char *lastname {(char *)"King Solomon"}; //use char * and also note that here we have used brace initialize no warnings or error generated
//it is a brutal way of doing it while changing the prior type to const char * is recommended
    cout << firstname << endl;
    cout << lastname << endl;

    string fname = "What are you doing?";
    string lname{ "Researching"};
    string mname{};//similar to string mname; mname is a empty string
    cout <<fname << "  " <<lname << endl;

    const char* my_text_returns_constchar_star = fname.c_str();//returns a const char *
   const char *my_text_returns_char_star =  lname.data();//this return a char * for the latest versions of c++ while oin
   //earlier versions it returns char * // in the latest version it is modifiable
   // Here string is an object whereas the c_str and data are methods

   string pro1 =  "I am from MARS";
   string pro2 { pro1};//this is valid through brace initializer
   //initialize one string with the content of the another

   string subset(pro2, 2,11);//containes the subset string from index 2 to 11 from pro2
   string repeatstring(10,'A');// repeat the character 10 times.

   /* The main differecne between c and c++ is the presence of the null terminator in the c which makes it vulnerable to 
   the security issues and  other host of problems but in c++ strings are held as a character array also provides encapsulation
   on the other hand all the operation on string like strlen rely on the null terminator though c++ also has null terminated array 
   due to data encapsulation and data hidinh c++ will not lead to any vulnerabilities*/

   cout << pro1 << "\v" << pro2 <<"\v" <<subset<<"\v" <<repeatstring<<endl;

    return 0;
}