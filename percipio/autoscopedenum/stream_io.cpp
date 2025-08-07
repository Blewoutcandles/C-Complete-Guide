#include<bits/stdc++.h>
#include<cmath>//c++ library of c standard math library
#include<iomanip>
using namespace std;

int main(){
    // int numa, numb;
    // cout << "Enter the numa and numb values " << endl;
    // cin >> numa >> numb ;
    
    // cout << "numa + numb : " << numa + numb << endl;
    // cout <<"numa - numb : " << numa - numb << endl;
    
    //getline() - for multiple line input

    // string name;
    // getline(cin, name);
    // cout << name << endl;
    // getline(cin, name);
    // cout << name << endl;

    // //for single character input

    // char singlecharacter;
    // cin.get(singlecharacter);
    // cout << singlecharacter<<" ";
    // // cin.get(singlecharacter);
    // // cout << singlecharacter;
    // cin.get(singlecharacter);
    // if(singlecharacter == '\n') cout << "NEW line detecteed" << endl;
    

    // float radius;
    // cout <<"Enter the radius of the circle :  ";
    // cin >> radius;
    // cout << "Area of the circle is : " << M_PI * radius * radius << endl;//compilerconfused
    // //M_PI is from the cmath library

    // int num;
    // char favletter;
    // cin >> num;
    // cout << "Her favourite number is  : " << num << endl;
    // cin.ignore();
    // cout << "What is the favourite character(hit enter again) ?"  << endl;
    // cin.get(favletter);
    // if(favletter == '\n'){
    //     cout << "Exiting..." << endl;
    // }else{
    //     cout << "Favourite letter is " << favletter << endl;
    // }
    /**output for the above code:
     * PS C:\c++\autoscopedenum> ./a
jake
jake
long
long
rk
r Enter the radius of the circle :  14
Area of the circle is : 615.752
54
Her favourite number is  : 54
What is the favourite character(hit enter again) ?
4
Favourite letter is 4
    */

       float radius;
    cout <<"Enter the radius of the circle :  ";
    cin >> radius;
    cout << "Area of the circle is : " << defaultfloat <<  M_PI * radius * radius << endl;
    //defaultfloat -> changes the appearance of the immediate object or value after it
    //defaultfloat --> says the ouput should be in the form of float 
     cout << "Area of the circle is : " << setprecision(2) <<  M_PI * radius * radius << endl;
//setprecision(num) - prints the num digits in total to the output console i.e.,prints 2digits
//while printing if the value is too large to be represented as two digits then it will 
//use the scientific notation
     cout << "Area of the circle is : " << defaultfloat <<setprecision(4)<< \
      M_PI * radius * radius << endl;//float value with 4 digits as total
       cout << "Area of the circle is : " << fixed <<setprecision(2)<< \
      M_PI * radius * radius << endl;//fixed and setprecision tells how many digits needed after
      //decimal point

      cout << "Area of the circle is : " << scientific <<setprecision(2)<< \
      M_PI * radius * radius << endl;//prints the scientic notation for the calculated result

      /*output:
Area of the circle is : 615.752 defaultfloat
Area of the circle is : 6.2e+02 stprecision(2)
Area of the circle is : 615.8  float with setprecision(4) - 4digits
Area of the circle is : 615.75 - fixed with setprecision(2) - 2digits after point
Area of the circle is : 6.16e+02*/ // scientific notation

//alignment of the strings
//using io manipulators
string tray[]{"Muzan", "Shinasugawa", "giyu", "mitsuri", "obanai"};
    cout << setw(12) << tray[0] << endl;
    cout << setw(12) << tray[1] << endl;
    cout << setw(12) << tray[2] << endl;
    cout << setw(12) << tray[3] << endl;
    cout << setw(12) << tray[4] << endl;
    /*output
        Muzan
  Shinasugawa
        giyu
     mitsuri
      obanai
      ---as you see it aligns the value to the right based on the number of spaces
      ---the words are filled inside the spaces 12 here---

      */

    cout << setw(12) <<std ::left << tray[0] << endl;
    cout << setw(12) <<std :: left << tray[1] << endl;
    cout << setw(12) <<std :: left << tray[2] << endl;
    cout << setw(12) << std :: left <<tray[3] << endl;
    cout << setw(12) << std :: left <<tray[4] << endl;
    //aligns the words to the left 
/* output:
Muzan
Shinasugawa
giyu
mitsuri
obanai
*/
    return 0;
}