#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
    vector<int> int_vector;
    int x; 
    cin >> x;

    int_vector.push_back(100);
    int_vector.push_back(90);
    int_vector.push_back(66);
    int_vector.push_back(22);

    if(x>1000){
        cout << "The number is  greater than 1000" << endl;
    }    
    else{
        cout << "The else condition" << endl;
    }
    auto  begin_itr = int_vector.begin();
    auto end_itr = int_vector.end();
    auto found_itr = find(begin_itr, end_itr, x);
    // std :: vector<int> :: iterator begin_itr = int_vector.begin();
    // std :: vector<int> :: iterator end_itr = int_vector.end();
    // std :: vector<int> :: iterator found_itr = find(begin_itr, end_itr, x);
    if(found_itr == end_itr){
        cout<<"The element is not found" <<endl;
    }
    else{
        cout << "The element  available" <<endl;
    }
    found_itr = find(int_vector.begin(), int_vector.end(), x);
    //std then following :: then vector<int> :: associated iterator of the container function with variable
    //begin_itr and end_itr then find function.

    if(found_itr == end_itr){
        cout<<"The element is not found" <<endl;
    }
    else{
        cout << "The element  available" <<endl;
    }
    if(found_itr == end_itr){
        cout<<"The element is not found" <<endl;
    }
    else{
        cout << "The element  available" <<endl;
    }
    
    if(auto find_itr = find(int_vector.begin(), int_vector.end(), x); 
    find_itr == int_vector.end())
    cout << "Hello world "<<x << endl;
    return 0;
}