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

int main(){ 
    map<int, string> mp{{1,"noah"},{2,"john"},{3,"mint"}};
    cout << "Contents before inserting" << endl;
    for(auto& i : mp){
        cout << i.first << " : " << i.second << endl;
    }
  
    mp.insert(std :: make_pair(4,"nioh"));
    mp.insert(std :: pair<int, string>(5, "ryzen"));
    mp.insert({6,"matata"});

    cout << "Contents after inserting" << endl;
    for(const std :: pair<int,string>& i : mp){
        cout << i.first << " : " << i.second << endl;
    }

    cout << "Erasing ryzen from the map" << endl;

    std :: map<int,string> :: iterator it = mp.find(/*find the value using the key name*/5);
    //will return the iterator
    cout << "The element that is going to be erased " << it -> first << "  " << it -> second << endl;

    mp.erase(/*use the iterator here*/it);
    cout << "Contents after erasing the ryzen" << endl;
    for(auto& i : mp){
        cout << i.first << " : " << i.second << endl;
    }   

    cout <<"Erasing nioh using the key value name" << endl;
    mp.erase(4);//using the key name rather than the iterator; simply another method to do the erase operation
    cout << "Contents after erasing the ryzen" << endl;
    for(const std :: pair<int,string>& i : mp){
        cout << i.first << " : " << i.second << endl;
    }     
    /*map stores the keys as ordered as ascending, we can sort the keys using the values it contains*/


    map<string, string> capitals;

    capitals["india"] = "New Delhi";
    capitals["USA"] = "Washington";
    capitals["Greece"] = "Athens";
    capitals["australia"] ="canbera";

    cout << capitals["india"] << endl;
    cout << capitals["Greece"] << endl;
    cout << capitals["australia"] << endl;

    cout << mp.at(1) << endl;
    cout << mp.at(2) << endl;
    cout << mp.at(3) << endl;
    cout << mp.at(6) << endl;
    // cout << mp.at(9) << endl;//this produces out of range exception 


    // cout << mp.at("india") << endl; this one gives error we just could 
    //not use the string as index to the at method

    return 0;

}