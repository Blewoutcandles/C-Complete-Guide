// "aaabaaaabaaabaaaabaaaabaaaabaaaaba"
#include<bits/stdc++.h>
#define longlong ll;
using std :: cout;
using std :: cin;
using std :: endl;
using std :: vector;
using std :: map;
using std :: string;
/*my wrong solution:

    int maxRepeating(string sequence, string word) {
        int count  = 0, repeat = 0, len = word.size();
        for(int i = 0; i<sequence.size(); i++){
            if(sequence.substr(i,len) == word){
                ++count; i+=len;
            }else{count = 0;i++;}
            repeat = max(count, repeat);
        }
        return repeat;
    }
*/
    // int maxRepeating(string sequence, string word) {
    //     int count  = 0, repeat = 0, len = word.size();
    //     for(int i = 0; i<sequence.length();){
    //         if(sequence.substr(i,len) == word){
    //             ++count; i+=len;
    //         }else{count = 0;i++;}
    //         repeat = std ::max(count, repeat);
    //     }
    //     return repeat;
    // }
    int maxRepeating(string sequence, string word) {
        int count  = 0; string temp = word;
        while(sequence.find(temp)!= string::npos){
            ++count;
            temp += word;
        }
        return count;
    }

int main(){
    cout << maxRepeating("aaabaaaabaaabaaaabaaaabaaaabaaaaba","aaaba");
    return 0;
}