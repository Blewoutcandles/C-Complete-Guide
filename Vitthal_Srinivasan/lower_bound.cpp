   
// lower_bound and upper_bound in vector
 
#include <algorithm> // for lower_bound, upper_bound and sort
#include <iostream>
#include <vector> // for vector
#include<sstream>
#include<string>
 
using namespace std;
 
int main()
{
    // Note that the array is sorted
    int gfg[] = { 2,3,4, 4, 4, 6, 6, 6, 8, 8 };
    //            0 1 2 3   4  5  6  7  8  9
    vector<int> v(gfg, gfg + 10); // 5 5 5 6 6 6 7 7
 
    vector<int>::iterator lower, upper;
    lower = lower_bound(v.begin(), v.end(), 6);
    upper = upper_bound(v.begin(), v.end(), 6);
 
    cout << "lower_bound for 6 at index "
         << (lower - v.begin()) << '\n';//tis gives at what number of elements are there from beginning not include the beginning include the end value
  //same for upper - v.begin()
    printf("%p\n",upper);
    printf("%p\n",v.begin());
    printf("%d\n",(upper - v.begin())*sizeof(int));
    cout << "upper_bound for 6 at index "
         << (upper - v.begin()) << '\n';
 
    return 0;
}