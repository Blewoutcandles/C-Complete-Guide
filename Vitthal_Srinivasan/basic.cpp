#include<iostream>
#include<string>

using namespace std;

int main(){
    string t = "";
    unsigned int max = INT_MAX - INT_MIN;
    cout << max << endl;
    signed int s = t.size()-1;//size method returns a unsigned int cast it to signed int for performing
    //operation
    cout << s << endl;

}