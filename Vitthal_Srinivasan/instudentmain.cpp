#include "instudent.h"
#include "ingraduatestudent.h"
using namespace std;
int main(){

    graduatestudent ethan("ethan",9, "physics",false);
    cout << "---------------------" << endl;
    ethan.display();
    graduatestudent melania("BladeofMiquella",9, "WarArt");//no error here because we have used using student :: student in the header file of this 
    //file this makes section private in the base class to be present private inside the graduatestudent class, if there public then public here
    //no particular type of the constructor is found in the graduatestudentclass but we have it in the base class
    //now we could invoke the student parameterized constructor thoughwe dont have any constructor in the ingraduate class
    // cout << "---------------------" << endl;
    // melania.display();
    graduatestudent radahn;//this invokes the no argument constructor fo teh student class
    // cout << "---------------------" << endl;
    // radahn.display();

    // cout << "copyconstructor based invoking" << endl;
    // cout << "************************" << endl;
    graduatestudent ethancopy{ethan};
    // ethancopy.display();
    // graduatestudent carolina;
    /*student : invoking the no argument constructor
graduatestudent : invoking the no argument constructor
student : invoking the no argument constructor
graduatestudent : invoking the no argument constructor*this is output as you can see the destructor of the base class is invoked
thenthe derived class so as the constructor of the base class is created first then the derived class*/

    return 0;
}

/*output:
student : invoking the no argument constructor
graduatestudent : argument based constructor
Student paramaterized constructor
student : invoking the no argument constructor*/