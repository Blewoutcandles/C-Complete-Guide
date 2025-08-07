#include"department.h"
#include<vector>
using std :: vector;
using std :: ifstream;

int main(){
    /*for writing to the file*/
    vector<department> deptvector;
    std :: ofstream output_file_stream;
    output_file_stream.open("department.dat", std :: ios :: out | std :: ios :: binary);

    if(!output_file_stream){
        cout << "Unable to open the file" << endl;
        return 1;
    }

    deptvector.push_back(department("jaguar",12120, 234290.0));
    deptvector.push_back(department("BMW", 22000, 7400.22));
    deptvector.push_back(department("Toyota",830, 5439));
    deptvector.push_back(department("Chevrolet",22, 349.90));
    for(auto& dept : deptvector){
        output_file_stream.write(reinterpret_cast<char*>(&dept), sizeof(dept));
        //the write function here write the mode as binary mode, however one point to note
        /*is binary mode tend to write in the binary mode however dept object should be interpreted
        since we could only write in character format in the file along with the size of the actual
        department*/
    }

    output_file_stream.close();
    cout << "**********file operation successfully completed**********" << endl;
    deptvector.clear();

    /*reading from the file*/
    ifstream input_file_stream;
    input_file_stream.open("department.dat",std :: ios :: in | std :: ios::binary);//in - reading mode

    if(!input_file_stream){
        cout <<"The file department.dat could not be opened" << endl;
        return 1;
    }

    for(int i = 0; i<3; i++){
        department dept;
        // input_file_stream >> dept;
        input_file_stream.read(reinterpret_cast<char*>(&dept), sizeof(department));
        /*in the input file stream the data is stored in the form of the binary file
        inorder to make it a useful reading output, the data should reinterpretted as
        char* and up to the specified length, we should need a medium to store the information that
        we just read in so we have to create the department object so as to store the information 
        size we know that is the size of the department object*/


        /*then wecan print out the values using the member function of the department object
        */

       if(input_file_stream.gcount() != sizeof(dept)){cout <<"Error while reading" << endl; break;}
    //    cout <<"The cursor pointer in the file is : " << input_file_stream.tellg() << endl;
        cout << dept.get_name() << dept.get_salary_budget() << " " \
         << dept.get_total_employees();

    }
   

    input_file_stream.close();
 
    return 0;

}



// #include <iostream>
// #include <fstream>
// #include <vector>
// #include "department.h"

// using namespace std;

// int main() {
//     vector<department> deptvector;
//     ofstream output_file_stream("department.dat", ios::out | ios::binary);

//     if (!output_file_stream) {
//         cout << "Unable to open the file" << endl;
//         return 1;
//     }

//     deptvector.push_back(department("Jaguar", 12120, 234239990.0));
//     deptvector.push_back(department("BMW", 22000, 740000.232));
//     deptvector.push_back(department("Toyota", 830, 543999));
//     deptvector.push_back(department("Chevrolet", 22, 3449.90));

//     for (auto &dept : deptvector) {
//         output_file_stream << dept;
//     }

//     output_file_stream.close();
//     cout << "**********file operation successfully completed**********" << endl;

//     deptvector.clear();

//     ifstream input_file_stream("department.dat", ios::in | ios::binary);

//     if (!input_file_stream) {
//         cout << "The file department.dat could not be opened" << endl;
//         return 1;
//     }

//     while (true) {
//         department dept;
//         if (!(input_file_stream >> dept)) break;
//         cout << dept.get_name() << endl;
//         cout << dept.get_salary_budget() << " " << dept.get_total_employees() << endl;
//     }

//     input_file_stream.close();
//     return 0;
// }