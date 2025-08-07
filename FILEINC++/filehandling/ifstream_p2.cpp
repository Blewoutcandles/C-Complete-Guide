#include<iostream>
#include<fstream>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: ifstream;
using std :: string;
/********using operning and closing of the files**********/
int main(){
    ifstream input_file_stream;//declaration
    input_file_stream.open("students_score.txt"/*filename*/,std :: ios :: in/*read mode*/);

    if(!input_file_stream){
        cout << "The file you specified is missing " << endl;
        return 1;
    }
    while(input_file_stream){
        string name;
        int mark1, mark2, mark3;

        std :: getline(input_file_stream, name);
        input_file_stream >> mark1 >> mark2 >> mark3;

        input_file_stream.ignore();
        if(input_file_stream.eof()){
            break;
        }
        cout << "Name : " << name << " Mark1 : " << mark1 << "Mark2 : " << mark2 << " Mark3 : " << mark3 << endl;        
    }
    input_file_stream.close();
    //explicit opening the stream object then we got to explicitly close the stream object
    
    cout <<"*****File operation completed **********" << endl;

    return 0;
}