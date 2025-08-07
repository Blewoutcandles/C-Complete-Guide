#include<filesystem>
#include<iostream>
using std :: getline;
using std :: cout;
using std :: cin;
using std :: endl;
namespace fs = std :: filesystem;
//using the above namespace should be must to make use of the filesystem library
int main(){
    //std :: filesystem :: path current_path = std :: filesystem :: current_path();
    // fs :: path current_path = fs :: current_path();
    // fs :: path current_path{"C:\\c++\\filesystemlibrary\\filepath.cpp"};
    // cout << "Does the path exist : ? " << std :: boolalpha <<fs :: exists(current_path) << endl;
    // cout << current_path.root_name() << endl;//print the root name, mac will have empty in windows mainly 'C:'
    // cout << current_path.root_directory() << endl;//print the root directory in most cases '\\' or single '\'
    // cout << current_path.relative_path() << endl;//print the path relative to the root directory
    // cout << current_path.parent_path() << endl;//print the parent path of current file or folder
    // cout << current_path.filename() << endl;//only the filename along with extension
    // cout << current_path.stem() << endl;//only the filename without extension


    // for(const std :: filesystem :: path &path_part : current_path){
    //     cout << path_part << endl;
    // }
    fs :: path current_path = fs :: current_path();
    //concatenates the current path to the file/folder
    current_path /= "files";
    cout << "Path: " << current_path << endl;
    if(fs :: exists(current_path) && fs :: is_directory(current_path)){
        for(const fs :: directory_entry &entry : fs :: directory_iterator(current_path)){
            if(fs :: is_directory(entry.path())){
                cout << "The directory is : " << entry.path().filename() << endl;
            }else if(fs :: is_regular_file(entry.path())){
                cout << "File : " << entry.path().filename() << endl;
            }
        }
    }
    //fs :: is_regular_file(entry.path()) going to return true if the current file path is not 
    //a directory, or a ssymbolic link or not a bloack device or a regular device

        if(fs :: exists(current_path) && fs :: is_directory(current_path)){
        for(const fs :: directory_entry &entry : fs :: directory_iterator(current_path)){
            if(entry.is_directory()){
                cout << "The directory is : " << entry.path().filename() << endl;
            }else if(entry.is_regular_file()){
                cout << "File : " << entry.path().filename() << " Size : " << entry.file_size() << endl;
            }
        }
    }

    fs :: path new_path = fs :: current_path();
    new_path /= "files";
    cout << "Path :  " << new_path << endl;
    fs :: path  integer_source_file = new_path/"int.txt";
    cout << "source of the integer file " << integer_source_file << endl;
    fs :: path integer_source_file_des = new_path/"moreint.txt";
    cout << "destination of the integer file " << integer_source_file_des << endl;
    // fs :: copy_file(integer_source_file, integer_source_file_des);
    //the destination file should not exist at the before hand

    //how to rename and remove a file
    fs :: path old_path = fs :: current_path();
    old_path /= "files/string.txt";
    fs :: remove(old_path);
    //string.txt got removed here


//renaming the file
    fs :: path blog = fs :: current_path();
    blog /="files/float.txt";
    fs :: path blog2 = fs :: current_path();
    blog2 /= "files/double.txt";
    fs :: rename(blog, blog2);
    //rename(source path variable, destination path variable);
    //now float will be changed to double.txt once renamed produce error
    return 0;
}
