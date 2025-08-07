#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<array>
#include<stdlib.h>
#include<unordered_set>
#include<chrono>

using std :: cout;
using std :: endl;
using std :: vector;
using std :: set;
using std :: map;
using std :: array;
using std :: string;
using std :: multimap;
using std :: unordered_set;
using namespace std :: chrono;

/*set contains the values that are unique and sorted in order and does not allow duplicates*/
void print_the_number(const unordered_set<int>& set_name){
    for(const int i : set_name){
        cout << i << " ";
    }
    cout << endl;
    // for(set<int>::iterator i = set_name.begin(); i != set_name.end(); i++){
    //     cout << *i << endl;
    // }
}

int main(){
   

    unordered_set<int> numbers{9,8,10};
    print_the_number(numbers);
   numbers.insert(4);
   numbers.insert(7);
   numbers.insert(6);
   numbers.insert(7);
   numbers.insert(11);
   numbers.insert(71);
   numbers.insert(65);

   print_the_number(numbers);

   numbers.erase(9);
   numbers.erase(4);


   unordered_set<int> :: iterator it = numbers.find(6);
   cout << "The value that is going to be removed from the set is :  " << *it << endl;
   numbers.erase(it);
   cout << "Erased the value form the set" << endl;

   print_the_number(numbers);
    cout << "The count of the number 7 is : " << numbers.count(7) << endl;
   numbers.erase(numbers.find(7), numbers.end());

   print_the_number(numbers);

   numbers.insert(4);
   numbers.insert(7);
   numbers.insert(6);
   numbers.insert(7);
   numbers.insert(11);
   numbers.insert(71);
   numbers.insert(65);

   /*bucket count initialization*/
   unordered_set<int > newset{2,4,1,5,2,6,5,9,7,3};
   cout << "Number of bucket count  : " << newset.bucket_count() << endl;
   cout << "total number of bucket count :  " << newset.max_bucket_count() << endl;
   cout << "Number of elements in the bucket 2" << newset.bucket_size(2) << endl;
   cout << "Number of elements in the bucket 4" << newset.bucket_size(4) << endl;
   cout << "Bucket that holds the number 9 is : " << newset.bucket(9) << endl;

   /*time complexity of searching and inserting functions in unordered set and set
   */

  set <int> currentset{1,2,3};

  for(int i  = 0; i<10000; i++){
    currentset.insert(i);
  }

    unordered_set <int> currentunoset{1,2,3};
  
  for(int i  = 0; i<10000; i++){
    currentunoset.insert(i);
  }

  auto start = high_resolution_clock :: now();

  for(int i = 0; i<10000; i++){
    currentset.find(i);
  }
  auto end = high_resolution_clock :: now();

  auto timeduration = duration_cast < milliseconds>(end-  start);

  cout << "Time in milliseconds for finding in set is : " << timeduration.count() << endl;

  start = high_resolution_clock :: now();

  for(int i = 0; i<10000; i++){
    currentunoset.find(i);
  }

  end = high_resolution_clock :: now();

  timeduration = duration_cast < milliseconds>(end-  start);
  cout << "Time in milliseconds for finding in unordered set is : " << timeduration.count() << endl;
    
    /*by comparing the time interval the finding time of the unordered set is actually faster than the 
    ordered set or normal set
    */
    return 0;
}