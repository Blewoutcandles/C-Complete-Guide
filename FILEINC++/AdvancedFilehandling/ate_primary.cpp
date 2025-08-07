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
    output_file_stream.open("names.txt", std :: ios :: in |std :: ios :: ate);
    /*std :: ios :: ate is not primary it is intended to use with another methods like std :: ios :: in or 
    std :: ios :: out etc however if we dont specify any other thing apart from what is given  it will consier the 
    default method like std :: ios :: out*/
    /*std :: ios :: ate will just overwrite the file but the std :: ios :: in | std :: ios :: ate
    will append to the file, ate = at the end but this method can also be able to write to any where in the file
    using seekp() method*/
        if(!output_file_stream.is_open()){
        cout << "There is no file related to the file" << endl;
        return 1;
    }
    /*white in app mode wee could not able to write any where in the file except in at the end
    but here seekp will actually work as intended*/
    output_file_stream.seekp(-30, std :: ios :: cur);
    //seekp for outputfilestream for setting the mouse pointer to the position
    vector<string> string_vector{"Emily robinson", "michael clarke", "James Anderson"};
    
    for(auto &i : string_vector){
        output_file_stream << i << endl;
    }
    cout << "file operation successfully completed" << endl;
    return 0;
}