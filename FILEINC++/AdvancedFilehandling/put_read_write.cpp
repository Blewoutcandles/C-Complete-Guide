#include<iostream>
#include<string>
#include<fstream>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: ifstream;
using std :: ofstream;

int main(){
    ifstream input_file_stream{"quotes_file.txt"};

    ofstream output_file_stream{"another_quotes_file.txt"};

    if(!input_file_stream.is_open() || !output_file_stream.is_open()){
        cout << "The file could not be opened " << endl;
    }
//get and put method be invoked on the file stream
    // while(true){
    //     char ch = input_file_stream.get();
    //     if(input_file_stream.eof()){
    //         break;
    //     }
    //     output_file_stream.put(ch);
    //     // output_file_stream << ch;
    // } 

    /*finding out the length of the current file using tellg and seekg*/
    input_file_stream.seekg(0, input_file_stream.end);
    int file_length = input_file_stream.tellg();
    input_file_stream.seekg(0,input_file_stream.beg);
    char *buffer = new char[file_length];

    input_file_stream.read(buffer, file_length);
    output_file_stream.write(buffer, file_length);

    delete[] buffer;
    buffer = nullptr;
    cout << "file operation successfully completed" << endl;
    return 0;
}