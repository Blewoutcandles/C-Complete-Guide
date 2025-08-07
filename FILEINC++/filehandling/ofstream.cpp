#include<iostream> 
#include<fstream> 
#include<vector>
#include<bits/stdc++.h>

using std :: ifstream;
using std :: ofstream;
using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;
using std :: vector;

int main(){

    // ofstream output_file_stream{"output.txt"};//create a output file if no files found under the name
//no need of open and close function since we instantiate the file using common brackets operation
    
    ofstream output_file_stream;
    output_file_stream.open("output.txt", std :: ios :: out);
    if(!output_file_stream){
        cout << "The file output.txt could not be opened for writing " << endl;
    }
    vector<std :: string> names{"Emily Robinson", "Walter Lewis", "Einstein Albert","Thomas Levie"};

    for(auto& s : names){
        output_file_stream << s << endl;//get input to the output file stream from s string variable
    }
    cout << "*****writing structured data****" << endl;
    vector<float> science_vector{21.21,42.424,55.21, 78.29};
    for(int i = 0 ; i<science_vector.size(); i++){
        output_file_stream << std :: left << std :: setw(20)<<names[i];
        output_file_stream << std :: fixed << std :: setprecision(1) <<" "<< science_vector[i] << endl;
    }
    output_file_stream.close();
    cout << "************file operation completed************" << endl;
    return 0;
}