#include<iostream>
#include<string>
#include<fstream>
#include<cstring>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: ofstream;
using std :: ifstream;
using std :: getline;

int main(){
    ifstream input_file_stream{"quotes_file.txt"};
    if(!input_file_stream){
        cout << "Unable to open the file " << endl;
        return 1;
    }

    while(true){
        // char ch = input_file_stream.get();
//char ch = input_file_stream.get() similar to input_file_stream.get(ch) 
/*note : this function "input_file_stream.get();" returns an integer, the working
is that it extract the current character fron the file into the ch and move
the file pointer by one.*/

        // char ch;
        // input_file_stream.get(ch);
        /*note: The "input_file_steam.get(ch) takes the argument of the 
        non - const reference of the character variable 'ch' and get the 
        character from the file stream and store it in the character ch" this
        output the same output as the previous function*/

        /*the same can be implemented using the c style strings*/

        // char buffer[20];//total characters = 19 letters + '\0' = 20 letters
        
        // input_file_stream.get(buffer, 20);
        /*note: this function: input_file_stream.get(buffer_to_store_characters, length of the string)*/
        /*reads 19 letters and place '\0' at the end of the character buffer, while
        reading each character the file pointer will be moved by one after extracting the character
        from the file to the buffer. After reading 19 characters the file pointer will point to '\n' character
        now file pointer null terminates the string by  placing the '\0'. since size is 20 and will not move the file pointer*/
        //the null terminator will be placed after completing extracting of 19 letters 
        //if the string ends before hand if it encounters the newline character then adds'\0' to the 
        //buffer and will not move the file pointer.


        // cout << buffer << endl;

                //now how to check the next character using peek() function
                        /*we are checking the (current position: '\0')next position of the file pointer points to the '\n' or not, in this 
        case we should ignore the newline character if not it will short circuit the get() function*/
        // if(input_file_stream.peek() == '\n')//since file pointer is being moved
        // {
            // input_file_stream.ignore(); 
            /*this ignore function will ignore the current character from the file and moves the file
            pointer by one or to the next row*/
        // }


        // if(input_file_stream.eof()){
        //     //reaching the eof character in the file will break the loop
        //     break;
        // }
        
    // }

/*output:get_method(): 
 M|a|k|e| |H|a|y| |W|h|i|l|e| |S|u|n|S|h|i|n|e|s|
|F|a|i|l|u|r|e| |i|s| |t|h|e| |s|t|e|p|p|i|n|g| |s|t|o|n|e| |t|o| |s|u|c|c|e|s|s|
|L|i|f|e| |i|s| |a| |l|e|s|s|o|n| |t|o| |e|n|j|o|y| |a|n|d| |l|e|a|r|n|

output for non-const reference return type
M|a|k|e| |H|a|y| |W|h|i|l|e| |S|u|n|S|h|i|n|e|s|
|F|a|i|l|u|r|e| |i|s| |t|h|e| |s|t|e|p|p|i|n|g| |s|t|o|n|e| |t|o| |s|u|c|c|e|s|s|
|L|i|f|e| |i|s| |a| |l|e|s|s|o|n| |t|o| |e|n|j|o|y| |a|n|d| |l|e|a|r|n|*/

/*output for cstyle string:
Make Hay While SunS 
hines //encounrered newline skips to the next row
Failure is the step
ping stone to succe
ss
Life is a lesson to
 enjoy and learn*/

 /*explantion for the ignore function:
M filepointer = 'a'
a filepointer = 'k'
k filepointer = 'e'
e filepointer = ' '
  filepointer = 'H'
H filepointer = 'a'
a filepointer = 'y'
y filepointer = ' '
  filepointer = 'W'
W filepointer = 'h'
h filepointer = 'i'
i filepointer = 'l'
l filepointer = 'e'
e filepointer = ' '
  filepointer = 'S'
S filepointer = 'u'
u filepointer = 'n'
n filepointer = 'S'
S filepointer = 'h', read 19 letters

buffer = "Make Hay While SunS\0"; ( added nullterminator)
filepointer now = 'h'
after reading in "hines"
adds the null terminator now buffer = "hines\0"
now filepointer = '\n'
ignore function()- discards the current character '\n' and move the filepointer to the next row "Failure...".
*/
/*note If you dont want the above output you could use the getline with ease of
not using the peek function to eliminate teh delimiter*/
    char buffer[200];
    input_file_stream.getline(buffer, 200);
    //delimiter sis '\n'
    //extract the character from teh input file stream into the buffer upto
    //199 characters
    //and adds the null terminator character
    //no need to add the peek and ignore function
    //automatically discards the newline character 
    /*note: delimiting character like '\n' will have effect(short0circuit) 
    only if it comes 
    before the getline() function, if character'\n' comes after the 
    getline function it will automatically be discarded
    */
   cout << buffer << endl;
   cout << "Number of characters read : " << input_file_stream.gcount() << endl;
   /*the gcount function will return the number of characters read from the last unformatted function operation like get(),
    getline(), putback(), unget(), read, peek performed on the file object*/
   if(input_file_stream.eof()){
    break;
   }
    }
    cout << endl;
    return 0;
}
/*important note: the major difference between the getline() and get() function is
that, the get() function will leave the delimiting character '\n' in the stream 
so we have to use the peek and ignore functions to ignore the character '\n'
but on the contrary getline() function will extract the delimiting character too but will discard it
thus reducing the usage of peek and ignore function*/
/*output : 
Make Hay While SunShines
Number of characters read : 25
Failure is the stepping stone to success
Number of characters read : 41
Life is a lesson to enjoy and learn
Number of characters read : 35*/
