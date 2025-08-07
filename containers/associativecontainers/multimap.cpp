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
using std :: lower_bound;
using std :: upper_bound;

void print_the_values(const multimap<string, string>& value){
    for(auto& i : value){
        cout << i.first << "<--" << i.second << endl;
    }
}

int main(){
    multimap<string, string> mp{{"ECE","noah"},{"MEC","john"},{"CSC","mint"}};
    mp.insert(std :: make_pair("MEC","sasi"));
    print_the_values(mp);
    cout << mp.count("MEC") << endl;
    mp.insert(std :: pair<string,string>("ECE","Black"));
    print_the_values(mp);
    cout << mp.count("ECE") << endl;

    cout << endl << "USING THE EQUAL RANGE METHOD" << endl;
    std :: pair<multimap<string,string> :: iterator, multimap<string,string> :: iterator> \
    range_of_ECE = mp.equal_range("ECE");

    /*the equal range method returns a pair of iterators with one denoting the lowerbound and 
    with one denoting the upper bound, then values which is returned by equal_range will be accessed using the 
    .methods (first and second) and each iterator value will be accessed through -> symbol operator*/


    for(auto it = range_of_ECE.first; it != range_of_ECE.second; it++){
        cout << it -> first << " -->  " << it -> second << endl;
    }



   multimap<string,string>:: iterator it1 = mp.lower_bound("ECE");
 
   multimap<string,string>:: iterator it2 = mp.upper_bound("ECE");
   cout << endl << "USING THE lowerbound and upper bound RANGE METHOD" << endl;

    for(auto it = it1; it != it2; it++){
        cout << it -> first << " -->  " << it -> second << endl;
    }

    cout << "The count of the ECE is : " << mp.count("ECE") << endl;

    /*deleting in the multimap */
    mp.erase("CSC");
    print_the_values(mp);
    cout << "Deleted the CSC value from teh multimap" << endl;
    mp.erase(mp.find("MEC"),mp.end());
    cout << "Deleting the values from MEC to the end of the map " << endl;
    print_the_values(mp);


    return 0;
}