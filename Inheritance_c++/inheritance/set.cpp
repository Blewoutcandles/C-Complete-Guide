#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Set declared
    set<int> st = { 1, 2, 3, 7, 9, 5 };
 
    cout << "Original Set elements\n";
    for (int i : st)
        cout << i << " ";
    cout << endl;
 
    // vector declared
    vector<int> vc;
 
    // Inserting elements into vector using
    // push_back function
    for (auto& it : st) {
        vc.push_back(it);
    }
 
    cout << "Printing Vector after conversion\n";
    for (int i : vc)
        cout << i << " ";
    cout << endl;
 
    return 0;
}