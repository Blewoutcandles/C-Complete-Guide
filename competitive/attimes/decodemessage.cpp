#include<bits/stdc++.h>
using namespace std;
    
    string decodeMessage(string key, string message) {

        int visited[26]={0}, j = 0; char ini = 'a';
        char a[26];
        string name;
        for(char i : key){
            int ind = i -'a';
            if(i ==' ' || visited[ind]) continue;
            a[j++] = i;
            visited[ind]++;
        }
        for(int i = 0; i<26; i++) cout<< a[i] <<endl;
        return name;
    }


    int main(){
        string name = "the quick brown fox jumps over the lazy dog";
        cout << decodeMessage(name,"vkbs bs t suepuv") << endl;
        return 0;
    }