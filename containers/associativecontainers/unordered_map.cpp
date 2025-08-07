#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<array>
#include<stdlib.h>
#include<unordered_map>
#include<chrono>

using std :: cout;
using std :: endl;
using std :: vector;
using std :: set;
using std :: map;
using std :: array;
using std :: string;
using std :: multimap;
using std :: unordered_map;
using namespace std :: chrono;


int main(){

    unordered_map<int, int> unomap{{1,1}, {2,2},{3, 3},{4,4}};
    for(int i = 0; i< 100000;i++){
        unomap.insert(std :: make_pair(i,i));
    }
    map<int, int> mp;
    for(int i  = 0; i<100000; i++){
        mp.insert(std :: pair<int, int>(i, i));
    }
    auto start = high_resolution_clock:: now();
    for(int i = 0;  i< 100000; i++){
        unomap.at(i);
    }
    auto stop = high_resolution_clock:: now();

    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken for finding in the unordered map is "<< duration.count() << endl;

    start = high_resolution_clock:: now();
    for(int i = 0;  i< 100000; i++){
        mp.at(i);
    }
    stop = high_resolution_clock:: now();

    duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken for finding in the ordered map is "<< duration.count() << endl;

    /*Time taken for finding in the unordered map is 3
Time taken for finding in the ordered map is 15*/


unordered_map<string, int> attendance{{"Dawood",2}, {"Ayub", 4}};
attendance.insert({"Abraham", 1});
for(const std ::pair<string, int>& pairvalue : attendance){
    cout << pairvalue.first << " - " << pairvalue.second << endl;
}

/*to change the values of the entries wee have to use the [] method or the iteration finding 
method*/
/*try to change the value of Ayub*/
attendance.insert({"Ayub",6});/*htis wont work*/

/*however below works fine*/
attendance["Ayub"] = 3;

attendance.find("Dawood") -> second = 7;/*this is using the iterator and accessint the element 
using the name */
for(unordered_map<string,int> :: iterator it = attendance.begin(); it != attendance.end(); it++){
    cout << it->first << " - " << it->second << endl;
}
/*output : 
Ayub - 4
Abraham - 1
Dawood - 2
Ayub - 3
Abraham - 1
Dawood - 7*/

    return 0;
}