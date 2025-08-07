#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<array>
#include<stdlib.h>

using std :: cout;
using std :: endl;
using std :: vector;
using std :: set;
using std :: map;
using std :: array;
using std :: string;
using std :: multimap;

/*set contains the values that are unique and sorted in order and does not allow duplicates*/
void print_the_number(const set<int, std :: greater<int>>& set_name){
    for(const int i : set_name){
        cout << i << " ";
    }
    cout << endl;
    // for(set<int>::iterator i = set_name.begin(); i != set_name.end(); i++){
    //     cout << *i << endl;
    // }
}

int main(){
    // set<int> numbers{10,9,8};

    /*set<int> numbers{10,9,8};is similar to set<int,std :: less<int>> numbers{10,9,8}*/
    /*the second argument is known as the comparator function used when sorting the order of the elements
    */

    set<int, std :: greater<int>> numbers{9,8,10};
    print_the_number(numbers);//prints the elements in the descending order
   numbers.insert(4);
   numbers.insert(7);
   numbers.insert(6);
   numbers.insert(7);
   numbers.insert(11);
   numbers.insert(71);
   numbers.insert(65);
   /*inserting the same number will not take effect since set is the union of numbers
   contains only unique elements, if you do want to insert multiple elements then use multiset
   */
   print_the_number(numbers);

   numbers.erase(9);
   numbers.erase(4);
   /*passin the number you want to delete or the iterator*/

   set<int, std :: greater<int>> :: iterator it = numbers.find(6);
   cout << "The value that is going to be removed from the set is :  " << *it << endl;
   numbers.erase(it);
   cout << "Erased the value form the set" << endl;

   print_the_number(numbers);
    cout << "The count of the number 7 is : " << numbers.count(7) << endl;
   numbers.erase(numbers.find(65), numbers.end());

   /*will delete all teh elements after the number 65 along with the number 65*/
   print_the_number(numbers);

    return 0;
}