#include<iostream> 
#include<string>
#include<fstream>
using std :: getline;
using std :: cout;
using std :: cin;
using std :: endl;
using std :: fstream; 
using std :: string;
//fstream is like std :: ios :: in | std :: ios :: out
//we can perform both the read and write operation

int main(){
    fstream file_stream{"output.txt"};
    if(!file_stream){
        cout << "Unable to open the file" << endl;
        return 1;
    }
    while(true){
        int num;
        file_stream >> num;
        if(file_stream.bad()){
            cout << "non-recovering error has occured " << endl;
            break;
        }
        if(file_stream.good()){
            cout << "Good bit set, stream is ok" << endl;
        }else if(file_stream.fail()){
            cout << "non fatal error occured recovering" << endl;
                    file_stream.clear();
        //clear the fail bit
        //do something to recover from the non fatal error
        string ignorelineorcharacter;
        std :: getline(file_stream, ignorelineorcharacter);
        file_stream.setstate(std :: ios :: badbit);
        }
        if(file_stream.eof()){
            cout << "End of the file has been reached" << endl;
            break;
        }

        continue; 
    }
    return 0;
}