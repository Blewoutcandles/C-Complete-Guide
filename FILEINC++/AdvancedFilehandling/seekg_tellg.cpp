#include<iostream>
#include<string>
#include<fstream>
#include<cstring>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: ofstream;
using std :: ifstream;
using std :: string;
/*seekg - moves to the beginning of the file or to the specfic offset 
from the beginning or the end or from currentposition*/
/*tellg= tells the current position of the file pointer*/

int main(){
    ifstream input_file_stream{"quotes_file.txt"};

    if(!input_file_stream){
        cout << "Unable to open the file " << endl;
        return 1;
    }

    input_file_stream.seekg(14);
    string buffer;
    std :: getline(input_file_stream, buffer);
    cout << buffer << endl;
    cout << "The current position of filepointer : " <<input_file_stream.tellg() << endl;
    /*overloaded function of seekg*/
    cout << "Seeking position 10" << endl;
    input_file_stream.seekg(10);
    std :: getline(input_file_stream, buffer);
    cout << buffer << endl;
     cout << "The current position of filepointer : " <<input_file_stream.tellg() << endl;

    cout << "Seeking position 20 from beginning" << endl;
    input_file_stream.seekg(36, std :: ios :: beg);//20 positions from the beginning 
    std :: getline(input_file_stream, buffer);
    cout << buffer << endl;
    cout << "The current position of filepointer : " <<input_file_stream.tellg() << endl;

    cout << "Seeking position 30 from end" << endl;
    input_file_stream.seekg(-50, std :: ios :: end);//10positions from the end (negative direction)
    std :: getline(input_file_stream, buffer);
    cout << buffer << endl;
    cout << "The current position of filepointer : " <<input_file_stream.tellg() << endl;

    cout << "Seeking position 10 from current in backward direction" << endl;
    input_file_stream.seekg(-10, std :: ios :: cur);//10positions back from current file pointer
    std :: getline(input_file_stream, buffer);
    cout << buffer << endl;
    cout << "The current position of filepointer : " <<input_file_stream.tellg() << endl;    
    return 0;
}