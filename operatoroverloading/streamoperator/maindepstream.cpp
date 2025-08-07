#include "deptstream.h"
using namespace std;
//the above implementation can also be implemented using the below means:
using std :: istream;
using std :: ostream;
using std :: operator <<;
using std :: operator >>;//declaring to make use of the operators using istream and ostream

int main(){
    
    //stream operator << - insertion and >> extraction
    float num; string name;
    // (cin >> num) >> name;//cin >> num returns the cin objecti.e., extraction operator returns 
    // //the cin object (cin -> take from the console to the variable extraction from the terminal)
    // department mile(name, num);
    // ((((cout << "Name is : ") << mile.get_name()) << "The department is : ") << mile.get_salary()) << endl; 
    // //cout-> take the particular string and print it to the output console which is 
    // //insertion into the ouput terminal / console
    // auto& ipstream = cin >> name;//ipstream is reference to the cin object returned from 
    // //cin >> name
    // auto& ipstream1 = ipstream >> num;
    // department kilo(name,num);
    // auto& opstream = cout << "The name is : ";
    // auto& opstream1 = opstream << name;cls
    // auto& opstream2 = opstream1 << "The department is : ";
    // auto& opstream3 = opstream << num;//just can use the 
    // //the stream whose output outputs the cout object
    
    //the above can be also implemented using the below means:
    // float num; string name;
    // istream& ipstream = operator>>(cin , name);//explicitly using operator >> as free functino
    //to indicate the input parameter is not a built in type std ;: string is from namespace
    //note : it requires two prarameters
// -//this requires one paramter thus invoking on a 
    //builtin type
    // department dep(name, num);
    //printingout the values
    // ostream& opstream = operator<<(cout, "The name is : ");//using the explicit free functino of the 
    // //operator to put the valuews in the console since the string is not a built in type
    // ostream& opstream1  = operator<< (cout, dep.get_name());
    // ostream& opstream2 = operator<< (cout, "And the salary earned by the individual is : ");
    // //the belwo is a built in type so can use the single parameter overloading operator
    // ostream& opstream3 = opstream2.operator<<(dep.get_salary());
    //working just fine takeaway :built in type requires only one parameter with the 
    //object type in the front(receivere of the method)
    //And the notbuilt in types requires the free function with two parameters.
    
    // //creating a separate function fro the output stream
    // cout << dep << endl;//this functino is implemented as a separate function
    // cout << dep;//printing just fine to the console external using inline separate function
    // department dept1;
    // //implementing the above for the input stream
    // cin >> dept1;//getting input to the values of the object dept1
    // cout << dept1 << endl;
    // //printingout the dept1 values to the console 
    // //working just fine

    //implementing the copy assignment operator 
    // department  dep2;//invoking the copy constructor(default no argumne tconstructor)
    // dep2 = dep;//copy assignment operator
    // cout << dep2 << endl;
    // cout << dep << endl;//invoking the inilne ostream& department :: operator <<(ostream& stream,
    //const department & dep) const;

    //implementing the custom copy assignment operator
    //see in the header file

    //difference between the copyconstructor and the assignment operator
    
    istream& stream = cin >> name;
    istream& stream1 = stream.operator>>(num);
    department dep{name,num};
    department dep_copy;
    department dep_copy1;
    dep_copy =  dep;//assignment operator
    department dep_copy3 = dep;//invoking the copy constructor
    cout << dep << endl;
    cout << dep_copy1 << endl;
cout << dep_copy << endl;
cout << dep_copy3 << endl;
department copy_4{dep};//invoking the copy constructor of the class
//department
cout << copy_4 << endl;

    return 0;
}