#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<sstream>
using namespace std;


int main() {
    int a;
    double b;
    string c;
    cin >>a >> b;
    cin.ignore();
    getline(cin,c);
    
    cout << a+(int)b << endl;
    printf("%0.1lf\n",double(a)-b);
    cout << "Hackerrank" + c << endl;
    
    return 0;
}