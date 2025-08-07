#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using std :: vector;
using std :: cout;
using std :: cin;
using std :: endl;
using std :: ifstream;
using std :: ofstream;
using std :: string;

int main(){
    ofstream output_file_stream;
    output_file_stream.open("countries.dat",std :: ios :: out | std :: ios :: binary);

    vector<string> countries{"india", "United States", "Mexico","Brazil"};

    for(auto &i : countries){
        output_file_stream  << i << endl;
    }
    output_file_stream.close();
    cout << "filea opeation successfully completed" << endl;


    ifstream input_file_stream;
    input_file_stream.open("countries.dat", std :: ios :: in | std :: ios :: binary);
    string vari;
    while(input_file_stream){
        std :: getline( input_file_stream, vari);
        if(input_file_stream.eof()) break;
        cout << vari << endl;
    }
    input_file_stream.close();
/*note the binary mode in c++ may not be like in c or java here it is more of like the text mode
performing character representation are more like text but the combinations of the characters like
\r \t will cannot be handled by the binary representaion it will be skipped in binary but handled by the file mode
*/
/*however we ll see how to write it in the binary mode*/

    return 0;
}