#include"department.h"
#include<vector>
using std :: vector;
using std :: ifstream;

int main(){
    /*for writing to the file*/
    vector<department> deptvector;
    // std :: ofstream output_file_stream{"output.txt"};
    // if(!output_file_stream){
    //     cout << "Unable to open the file" << endl;
    //     return 1;
    // }

    // deptvector.push_back(department("jaguar",12120, 234239990.0));
    // deptvector.push_back(department("BMW", 22000, 740000.232));
    // deptvector.push_back(department("Toyota",830, 543999));
    // deptvector.push_back(department("Chevrolet",22, 3449.90));
    // for(auto& dept : deptvector){
    //     output_file_stream << dept;
    // }
    // cout << "**********file operation successfully completed**********" << endl;

    /*reading from the file*/
    ifstream input_file_stream;
    input_file_stream.open("output.txt",std :: ios :: in);//in - reading mode

    if(!input_file_stream){
        cout <<"The file output.txt could not be opened" << endl;
        return 1;
    }

    while(true){
        department dept;
        
        input_file_stream >> dept;
        if(input_file_stream.eof()){
            break;
        }
        
        deptvector.push_back(dept);
    }
    for(auto & d : deptvector){
        cout << d;
    }

    input_file_stream.close();
 
    return 0;

}