#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include<vector>
using std :: vector;

using std :: cin;
using std :: cout;
using std :: endl;
using std :: ofstream;
using std :: ifstream;
using std :: string;

int main(){
    // ifstream input_file_stream{"quotes_file.txt"};
    ofstream output_file_stream;

    // output_file_stream.open("names.txt", std :: ios :: out);
    output_file_stream.open("names.txt", std :: ios :: app);
    /*opening the file in the append mode, we can also batch the io opeation using teh 
    or operation*/
    if(!output_file_stream.is_open()){
        cout << "There is no file related to the file" << endl;
        return 1;
    }
    output_file_stream.seekp(5, std :: ios :: beg);
    /*note in append mode the setting the mouse pointer using the seekp wont work it would still append to the file
    at the end and not anywhere in the file*/
    vector<string> string_vector{"Kilie robinson", "michael clarke", "James Anderson"};
    
    for(auto &i : string_vector){
        output_file_stream << i << endl;
        // output_file_stream << i << '\n';
        // std :: flush(output_file_stream);
        /*the flush will after the file once the write operation done just for understanding 
        the flushing operation have been written here*/
    }
    
    /*note : the endl function will literally flush the data once it fill the values 
    in the buffer automatically but when doing custom insertion of the newline
    character we do have to use the std :: flush(ouput_file_stream) explicitly*/

    return 0;
}