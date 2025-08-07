#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<array>
#include<stdlib.h>
#include<bits/stdc++.h>


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

struct Department{
    string name;
    int emp_count;
    Department(string name, int emp_count):
        name(name), emp_count(emp_count){
    }
    bool operator<(const Department& other)const{//in c++ structrue name itself is enough no need to specify the struct keyword along with the name
        return emp_count < other.emp_count;
    }
    //the const here states that the returned value is constant and this is very important

    bool operator>(const Department& other)const{//in c++ structrue name itself is enough no need to specify the struct keyword along with the name
        return emp_count > other.emp_count;
    }
};

void printset(const set<Department>& dept_set){
    for(auto& it : dept_set){
        cout << it.name <<   "  " << it.emp_count << endl;
    }
}


void printsetgreat(const set<Department,std :: greater<Department>>& dept_set){
    for(auto& it : dept_set){
        cout << it.name <<   "  " << it.emp_count << endl;
    }
}

void print_map(const map<Department, string>& mp){
    for(const std ::pair<Department, string>& pairvalue : mp){
        cout << pairvalue.first.name << " - " << pairvalue.first.emp_count << " " << pairvalue.second << endl; 
    }
}
void print_map_greater(const map<Department, string, std :: greater<Department>>& mp){
    for(const std ::pair<Department, string>& pairvalue : mp){
        cout << pairvalue.first.name << " - " << pairvalue.first.emp_count << " " << pairvalue.second << endl; 
    }
}

int main(){

    set<Department> dept_set{Department("Sales",200), Department("Operations",400),Department("productions", 100)};
    //set<Department,std::less<Department>> dept_set is similar to the above
        cout << "----------------less Ordered set---------------------" << endl;
    printset(dept_set);
    set<Department, std :: greater<Department>> dept_greater_set{Department("Sales",200), Department("Operations",400),Department("productions", 100)};
    cout << "----------------greater Ordered set---------------------" << endl;
    printsetgreat(dept_greater_set);
    /*output: 
    productions  100
Sales  200
Operations  400
----------------greater Ordered set---------------------
Operations  400
Sales  200
productions  100*/


/*using the map*/
map<Department, string, std :: less<Department>> mp{{Department("Sales",200),"Executives"},std :: make_pair(Department("Operations",400), "Marketing"),std :: pair<Department, string>(Department("productions", 100), "Values")};
cout << "------------ordered value------------------" << endl;
print_map(mp);
map<Department, string, std :: greater<Department>> mp1{{Department("Sales",200),"Executives"},std :: make_pair(Department("Operations",400), "Marketing"),std :: pair<Department, string>(Department("productions", 100), "Values")};

print_map_greater(mp1);
/*output : 
------------ordered value------------------
productions - 100 Values
Sales - 200 Executives
Operations - 400 Marketing
Operations - 400 Marketing
Sales - 200 Executives
productions - 100 Values*/
 
    return 0;
}