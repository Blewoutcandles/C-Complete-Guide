#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
using std::cout;
using std :: cin;
using std :: getline;
using std :: string;

struct Person{
    string name;
    Person(string n) : name(n) {}//cohnstructor
};

void formatandprint(string& firstname,  string& lastname, string&middlename);
void updatename(Person &person);
void printnames(const vector <Person> &person_vector );//no modification allowed; vecotr format: vector<datatype> vector_variable
void returntheincrementedvalue(int &intvalue, float &floatvalue, double &doublevalue, char &character);
void format_and_print(const string& firstname, const string& lastname, const string&middlename);
// void format__and__print(std::string_view firstname, std::string_view lastname, std::string_view middlename);
double& squarevalue (double& value);
void printvalue(const double& num);
void print_value(const double& num);


int main(){
    map<string,int> dictionary;
    dictionary  "non-progress" : 2;
     
    int value = 10;
    float floatvalue = 19.99f;
    double doublevalue = 124333.999998f;
    char character = 'A';
    returntheincrementedvalue(value,floatvalue, doublevalue, character);//in c++ the parameters are just like normal c
    //but inorder to differentiate between call_by reference and call by value only in the fucntion definiiton we got to
    //declare it with '&' symbol 
    cout << "The aftervalues of the function call" << value << endl;
    cout << "The aftervalues of the function call" << floatvalue << endl;
    cout << "The aftervalues of the function call" << doublevalue << endl;
    cout << "The aftervalues of the function call" << character << endl;
    Person person("Ophelia");

    cout << "The person name is " << person.name << endl;
    updatename(person);//the parameter is person which is referring to the Person struct  which is declared above
    cout << "The person name is after update " << person.name << endl;

    vector <Person> person_vector{
        Person("Shoaibakthar"), Person("Mitchell starc"), Person("MuthaiyyaMuralitharan"), Person("Brettlee")
    };//vector  variable with the Person (struct name) along with the name of the person.

    printnames(person_vector);

    string firstname = "M";
    string middlename =  "Mohamed";
    string lastname = "Marzjuk";
    formatandprint(firstname, lastname, middlename);
    // format_and_print("M","Mohamed", "Marzjuk"); this produce errors since it'slike assigning directly 
    //*firstname = "M"; like in c which may cause error when attempted to modify
    // the above may compile only if we define the functions with const keyword at front of parameters
    //adding the const keyword islike making promise that you wont change the passed string literals
    format_and_print("M","Mohamed", "Marzjuk");//however this way of passing may cause some error in some manner
    //since indirect object are created for referencing the string literals note we are passing the string literals
    //inorder to recify it there comes the usage of std :: string_view
    int num = 555;
    printvalue(num);
    double number = 555;
    double squaredval = squarevalue(number);
    cout << "The squared value in the main function is " << squaredval << endl;
    float x = 39.99;
    print_value(x);
    return 0;
}

void returntheincrementedvalue(int& intvalue, float& floatvalue, double& doublevalue, char& character){
//The parameters tells that they are of reference types.
//the parameters &intvalue, &floatvalue, &doubelvalue, &character are like pointers 
//just the names indicate the address (src: debug) &intvalue contains the value, rather intvalue contains the address
    intvalue += 100;//no need to deference here that is '*' operator we can perform normally
    //the values changing here will reflect in the main function
    doublevalue += 1212.3433;
    character = 'X';
    floatvalue += 100.23;
    return ;

}

void updatename(Person &person){//call by reference and normal operation before and after the definition
    cout << "The name change is in updation" << endl;
    person.name = "Marzjuk";//normal operation in changing the name
    return ;
}

void printnames(const vector<Person> &person_vector ){//having reference to the structures will significantly reduce the
//amount of time than call by value which creates copy of the passing variable
    for(const Person &person : person_vector)//telling the person values do not change
        cout<<"Name of the person is " << person.name << endl;
    return ;
}

void formatandprint( string& firstname, string& lastname,  string& middlename){
    string formattedstring = "Hi " + firstname+ " "+middlename +" " +lastname+" Welcome to india";
    cout << formattedstring << endl;
}

void format_and_print(const string& firstname, const string& lastname, const string&middlename){
    string formattedstring = "Hi " + firstname+ " "+middlename +" " +lastname+" Welcome to india";
    cout << formattedstring << endl;
}
//string_view - no usage of + operator
// void format__and__print(std :: string_view firstname, std:: string_view lastname, string_view middlename){
//     //here  version may be of problem however it is inherently const therefore using string_view is same as const string&
//     //note it we can't use the + ooerator to print the string
//     // we can just use cout << firstname << " " << middlename << " " << lastname << endl;
//     return;
// }


void printvalue(const double& num) {//here int integer is casted to const double pointer since no change occur
//The implicit conversion of int to double takes place
//but in square case
    cout << "The value is " << num << endl;
}
//The int is type casted to double and then modification to the values take place. so it might be wrong, consider giving the same
//datatype for changing values of the variable.
double& squarevalue ( double& value){
    value  = value * value;
    cout << "The squared value is " << value << endl;
    return value;
}

void print_value(const double& num) {
    cout << "The value is " << num << endl;
}