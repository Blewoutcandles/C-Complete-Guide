#include<iostream>
#include<string>
#include<fstream>
#include<cstring>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: ofstream;
using std :: ifstream;

int main(){
    ifstream input_file_stream{"structured_data.txt"};

    if(!input_file_stream){
        cout << "Unable to open the file " << endl;
        return 1;
    }

    char buffer[30];
    int math_score, science_score, social_score;

    while(true){
        input_file_stream.get(buffer, 30, ':'); //delimiter: ":"
        //the normal function: input_file_stream.get(buffer, 30) delimiter is '\n'
        //input_file_stream.get(buffer, 30, ':'); =delimiter is ':'
        if(input_file_stream.peek() == ':'){
            input_file_stream.ignore();
        }

        input_file_stream >> math_score >> science_score >> social_score;

        if(input_file_stream.eof()){
            break;
        }

        if(input_file_stream.peek() == '\n'){
            input_file_stream.ignore();
        }
        cout << "Name : " << buffer << endl;
        cout << "Math_score : " << math_score << endl;
        cout << "Science_score :  "<< science_score << endl;
        cout << "Social_score : " << social_score << endl;
        cout <<"----------------" << endl; 
        }

    return 0;
}