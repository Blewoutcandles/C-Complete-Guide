#include<iostream>
#include<string>
#include<list>
#include<chrono>
#include<vector>
#include<forward_list>
#include<algorithm>

using std :: cout;
using std :: cin;
using std :: endl;
using namespace std ::chrono;
using std :: vector;
using std :: array;
using std :: forward_list;
using std :: string;


int main(){
    forward_list<string> countries{"india", "usa", "netherlands","denmark"};
    //forward_list<datatype> singlylinkedlist name {values}
    cout << "------------------------------------------" << endl;
    cout <<  "the maximum size of the forwarelist ; " << countries.max_size() << endl;
    cout << "Is forward list empty ?" << std :: boolalpha << countries.empty() << endl;
    cout <<  "-----------------contents-----------------------" << endl;
    
for(string&  it  : countries){
    cout << it << endl;
}
cout << "forward list does not support the index or at method based functionality to\
get the element at the required index- since it has to trace the lists" << endl;

cout << countries.front() << endl;

countries.push_front("newzealand");
//does not support push_back or back() or size() function since this involves traversing the list so
//the developers though it is not time efficient so not implemented
cout << "Traversing the elements in the list" << endl;
for(string&  it  : countries){
    cout << it << endl;
}

countries.pop_front();//removes the first element

/*we can also insert after the beginning using insert_after method*/
countries.insert_after(countries.before_begin(), "Venezuela");
/*using the overload operator + to countries.begin() will be blocked*/
cout << "Traversing the elements in the list" << endl;
for(string&  it  : countries){
    cout << it << endl;
}

countries.erase_after(countries.before_begin());
cout << "Traversing the elements in the list after eliminating the first element" << endl;
for(string&  it  : countries){
    cout << it << endl;
}
    return 0;
}


/*other functions : sort, reverse, unique(), *
/sort - sort the elements in the singly linked list
unique - removes the duplicates which appear one after the another
reverse - reverse the list */