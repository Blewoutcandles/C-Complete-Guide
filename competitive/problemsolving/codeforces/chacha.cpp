#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcases;
	cin >> testcases;
	int count = 0;
	while(testcases--){
	    string result="";
	    int len;
	    cin >>len;
	    int k = 0;
	    string binarystring;
        count = 0;
	    cin >> binarystring;
	    result += binarystring[0];
	    for(int i =1 ; i<len;){
	        if(result[k] != binarystring[i]){
	            result+=binarystring[i++];
                
	            k++;
	        }else{
                ++count;
	            if(result[k] == '1')
	                result += "0";
	            else
	                result +="1";
	           k++;
	        }
	    }
	    cout << count << endl;
	    
	}
    return 0;
}