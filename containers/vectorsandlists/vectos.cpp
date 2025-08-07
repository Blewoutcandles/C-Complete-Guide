#include<iostream>
#include<string>
#include<list>
#include<chrono>
#include<vector>
#include<array>
#include<algorithm>

using std :: cout;
using std :: cin;
using std :: endl;
using namespace std ::chrono;//for time calculation
using std :: vector;
using std :: array;
using std :: string;

int main(){
    // vector<string> string_vector{"liz", "leonard", "tim", "jerry"};
    // vector<string> string_vector;
    // string_vector.push_back("liz");
    // string_vector.push_back("lizard");
    // string_vector.push_back("leonard");
    // string_vector.push_back("tim");

    // cout << "-------------Size---------------" << endl;
    // cout << "Size of the vector : " << string_vector.size() << endl;
    // cout << "Maximum size of the vector : " << string_vector.max_size() << endl;
    // cout << "Capacity of the vector : " << string_vector.capacity() << endl;
    // cout <<"Is the vector empty ? :" << std :: boolalpha << string_vector.empty() << endl;

    // cout << "--------------Contents-----------------" << endl;

    // for(auto& string_val : string_vector){
    //     cout << string_val << endl;
    // }

    // cout << "The element in the front end of the string_vector : " <<\
    // string_vector.front() << endl;
    // cout <<"The element in the rear end of the string_vector : " << \
    // string_vector.back() << endl;

    // string_vector.pop_back();
    // //popping an element from the back of the vector
    //     cout << "-------------Size---------------" << endl;
    // cout << "Size of the vector : " << string_vector.size() << endl;
    // cout << "Maximum size of the vector : " << string_vector.max_size() << endl;
    // cout << "Capacity of the vector : " << string_vector.capacity() << endl;
    // //maximum size i.e.,memory that has been allocated to accomodate the elements
    // cout <<"Is the vector empty ? :" << std :: boolalpha << string_vector.empty() << endl;
    
    // cout << "-----------Random accessing the values of the string_vector---------" << endl;
    // cout << "Accessing the element using square bracket : " << string_vector[1] << endl;
    // cout << "Accessing the element using at method : " << string_vector.at(1) << endl;
    /*output : 
    -------------Size---------------
Size of the vector : 4
Maximum size of the vector : 288230376151711743
Capacity of the vector : 4
Is the vector empty ? :false
--------------Contents-----------------
liz
lizard
leonard
tim
The element in the front end of the string_vector : liz
The element in the rear end of the string_vector : tim
-------------Size---------------
Size of the vector : 3
Maximum size of the vector : 288230376151711743
Capacity of the vector : 4
Is the vector empty ? :false
-----------Random accessing the values of the string_vector---------
Accessing the element using square bracket : lizard
Accessing the element using at method : lizard*/


/*next session*/
    vector<string> string_vector(3);//can also be initialized using the common braces
    cout << "Size of the vector : " << string_vector.size() << endl;
    cout << "Maximum size of the vector : " << string_vector.max_size() << endl;
    cout << "Capacity of the vector : " << string_vector.capacity() << endl;
    //maximum size i.e.,memory that has been allocated to accomodate the elements
    cout <<"Is the vector empty ? :" << std :: boolalpha << string_vector.empty() << endl;

        cout << "--------------Contents-----------------" << endl;

    for(auto& string_val : string_vector){
        cout << string_val << endl;
    }


    string_vector.push_back("liz");
    string_vector.push_back("lizard");
    string_vector.push_back("leonard");
    string_vector.push_back("tim");

    cout <<"--------------Size after adding four elements----------------------" << endl;
    cout << "Size of the vector : " << string_vector.size() << endl;
    cout << "Maximum size of the vector : " << string_vector.max_size() << endl;
    cout <<"Capacity of the vector : " << string_vector.capacity() << '\n';
    //maximum size i.e.,memory that has been allocated to accomodate the elements
    cout <<"Is the vector empty ? :" << std :: boolalpha << string_vector.empty() <<  '\n';

    cout << "--------------Contents-----------------" << endl;

    for(auto& string_val : string_vector){
        cout << string_val << endl;
    }
    cout <<"--------------Size reserving space for 100----------------------" << endl;
    string_vector.reserve(100);
    //after reserving the space of 100, size denotes the number of elements the vector contains,
    //whereas the capacity indicates the total size that has been allocated in this cases, we have reservecd 
    //the space of 100 so capacity becomes 100.         
    cout << "Size of the vector : " << string_vector.size() << endl;
    cout << "Capacity of the vector : " << string_vector.capacity() << endl;


    cout <<"--------------Size after using shrink to fit----------------------" << endl;

    string_vector.shrink_to_fit();
       cout << "Size of the vector : " << string_vector.size() << endl;
       cout << "Capacity of the vector : " << string_vector.capacity() << endl;


       //size means the current total elements in the vector but copacity how much space that has been allocated for variious sizes of the element 
       //initial 2 elements, capacity - 2, size -2, then delete 2 elements, size = 0, capacity = 2.
    //two allocated space
    /*note : if you are storing elements the capacity increases in terms of logarithmic growing intervals of time
    which is because of amortized constant time for pushing back elements in the vector
    */

    cout << "------------------SIZe----------------------" << endl;
    string_vector.erase(string_vector.end()-1);
    //vector_name.erase(iterator)
    string_vector.erase(string_vector.end()-1);

        cout << "----Contents after performing the erase at the end of the vector----" << endl;

    for(auto& string_val : string_vector){
        cout << string_val << endl;
    }

    cout <<"After adding the new content " << endl;
    string_vector.insert(string_vector.end()-2, "value added using the insert function");
    for(auto& string_val : string_vector){
        cout << string_val << endl;
    }
//finding the element in the vector
    vector<int> integer{1,2,3,4,5};
    for(vector<int>:: iterator it= integer.begin(); it != integer.end(); it++)
    {
        cout << *it << endl;
    }
    vector<int>::iterator a = std :: find(integer.begin(), integer.end(), 3);
    if(a != integer.end())
{
    cout << "The element is found at the index : " << a-integer.begin() << endl;
}
else {
    cout <<"could not be able to find the element " << endl;
}

    return 0;
}