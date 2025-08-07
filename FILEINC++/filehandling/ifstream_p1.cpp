#include<iostream>
#include<fstream>
/*note : fstream : equals the istream and ostream*/

using std :: cout;
using std :: cin;
using std :: string;
using std :: endl;
using std :: ifstream;
//after pressing the enter, \n is added to the 5000 after that iteration for displaying the values will iterate for 6times not 5times, the EOF file character will be found in the 8th line including this
int main(){
    // ifstream input_file_stream{"integers.txt"};
    // ifstream input_file_stream{"float.txt"};//stack variable
    // ifstream input_file_stream{"strings.txt"};
    ifstream input_file_stream{"students_score.txt"};
    if(!input_file_stream){
        cout << "The file integers.txt could not be opened for reading" << endl;
        return 1;
    }
    int i = 0;
    while(input_file_stream){
        // int int_var;
        // float float_var;
        string string_var;
        int mark1, mark2, mark3;
        std :: getline(input_file_stream, string_var);
        /*getline syntax : getline(inputstream or source, destination variable)*/
        input_file_stream >> mark1 >> mark2 >> mark3;
        //The opeartor >> is used to rectify the leading and trailing white spaces
        //chaining of the operator >> will be able to get the values without
        //white spaces
        //after three integers we have new line character when using the getline string
        //again we'll have to use the ignore function to ignore the newline character
        //and continue taking the string line to the input and perfrom operation on that
        //line to ignore the new line character
        input_file_stream.ignore();//ignore the current character i.e., '\n'
        
        //input_file_stream >> int_var
        if(input_file_stream.eof()){
            //the eof character is after the ignore since the last value of the 
            //file is eof which is preceded by the newline 
            // if we chose to perform the eof check before the ignore
            //at the last line it will receive the newline charcter instead of 
            //the EOF character
            break;
        }
        cout << "Name : " << string_var << " Mark1 : " << mark1 << " Mark2 : " << mark2
        << " Mark3 : " << mark3 << endl;
        // cout << "float value " << float_var << endl;
        // cout << int_var << endl;
    }
    cout << "******Reading the file is successfully completed***..." << endl;
    return 0;
}
/*output : 
float value 11.11
iteration completed 1
float value 22.22
iteration completed 2
float value 33.33
iteration completed 3
float value 44.44
iteration completed 4
float value 55.55*/

/*output for the structured data retrievak
Name : Gabriel Suman Mark1 : 21 Mark2 : 21 Mark3 : 42
Name : Mitchell Starc Mark1 : 10 Mark2 : 10 Mark3 : 100
Name : Glenn McGrath Mark1 : 41 Mark2 : 41 Mark3 : 82
Name : Glenn Maxwell Mark1 : 49 Mark2 : 34 Mark3 : 83
******Reading the file is successfully completed***...*/