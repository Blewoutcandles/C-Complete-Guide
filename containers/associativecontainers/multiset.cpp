#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<array>
#include<stdlib.h>
#include<unordered_set>

using std :: cout;
using std :: endl;
using std :: vector;
using std :: set;
using std :: map;
using std :: array;
using std :: string;
using std :: multiset;
using std :: unordered_multiset;
/*multiset contains the ordered values with duplicates*/

void print_the_number(const multiset<int>& set_name){
    for(const int& i : set_name){
        cout << i << " ";
    }
    cout << endl;
    // for(set<int>::iterator i = set_name.begin(); i != set_name.end(); i++){
    //     cout << *i << endl;
    // }
}


void print_the_number_unordered(const unordered_multiset<int>& set_name){
    for(const int& i : set_name){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    multiset<int> numbers{10,9,8};
    print_the_number(numbers);

   numbers.insert(4);
   numbers.insert(7);
   numbers.insert(6);
   numbers.insert(7);
   /*inserting the same number will not take effect since set is the union of numbers
   contains only unique elements, if you do want to insert multiple elements then use multiset
   */
   print_the_number(numbers);

   numbers.erase(9);
   numbers.erase(4);
   /*passin the number you want to delete*/

   print_the_number(numbers);
   

   unordered_multiset<int> numbers_unordered{10,9,8};
    numbers_unordered.insert(4);
   numbers_unordered.insert(7);
   numbers_unordered.insert(6);
   numbers_unordered.insert(7);
   numbers_unordered.insert(4);
   numbers_unordered.insert(7);
   numbers_unordered.insert(6);
   numbers_unordered.insert(7);

   print_the_number_unordered(numbers_unordered);












    return 0;
}

/*output: 
8 9 10 
4 6 7 7 8 9 10 
6 7 7 8 10 
The count of the number 7 is : 2*/