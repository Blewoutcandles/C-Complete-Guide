#include<iostream>
using std :: cout;
using std :: endl;
int main(){
    int balancefactor = 1000;//normal declaration
    int balanceFactor (1000);//function notation
    int balancefactoR {1000};//array based notation may have narrow conversion problem for ex: balancefactoR{1000.34}

    cout << "Printing of different ways of declaring the variables" << balancefactor<< "\n" << balanceFactor <<"\n" <<balancefactoR<<endl;

    //testing limits of the certain datatypes
    int max_limit = 2147483647;
    int min_limit = -2147483648;
    cout << "Maxlimit of the integer datatype is" << max_limit;
    cout << "\nMinimum of the integer datatype is" << min_limit;

    cout << "\nMinimum of the integer datatype is" << max_limit+1;
    cout << "\nMaxlimit of the integer datatype is" << min_limit-1;

    cout<<"\nPrinting the  bytes of the integer datatype - " << sizeof(int) << endl;
    cout << "Printing the bytes of the short datatype - " << sizeof(short) << endl;

    unsigned int maxvalue = 4294967295;
    unsigned int minvalue = 0;
    cout << "The value of the max unsigned value is " << maxvalue << endl;
    cout << "The value of the min unsigned value is " << minvalue << endl;

    cout << "The value of the short int is " << sizeof(short) << endl;
    cout << "The value of the long int is " << sizeof(long int) << endl;
    cout << "The value of the long  long int is " << sizeof(long long int) << endl;

    // some standards datatypes are available
    cout<< sizeof(int8_t) << endl;
    cout<< sizeof(int16_t) << endl;
    cout<< sizeof(int32_t) << endl;
    cout<< sizeof(int64_t) << endl;

//some binary and hexadecimal format
    cout << 0b1010 << endl;
    cout << 023 << endl;
    cout << 0x22a <<endl;

    int highcase_character = 'A';
    int lowcase_character  = 'a';
    cout << static_cast<char> (highcase_character) <<endl;
    cout << lowcase_character << endl;
  
    return 0;
}