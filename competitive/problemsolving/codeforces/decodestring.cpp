#include<string>
#include<iostream>
#include<stack>
#include<algorithm> 
using namespace std;

string name, dummy;int value = 0;
void decodestringhelper(char *d, int i, int n){
    int numberoftimes = 0;
    if(n == i) return;
    else if(*d == '[') return decodestringhelper(d+1,i+1,n);
    else{
        while(isdigit(*d)){
            numberoftimes = numberoftimes*10 + ((*d++)-48);
            i++;
        }
        if(isalpha(*d)){ 
            dummy += *d++;
            i++;
        }
        decodestringhelper(d,i,n);
    }
    if(*d == ']'){
        while(numberoftimes--){
            name += dummy;
        }
        dummy =" ";
        i++;
    }
    return;
    

    // string dummy;
    // if(isdigit(*d)){
    //     value = value *10 + *d++ -48;
    // }
    
    // while(n--){
    //     name += dummy;
    // }
}
string decodeString(string s) {
    char arr[1000];
    for(int i = 0; i<s.length(); i++){
        arr[i] = s[i];
    }
    decodestringhelper(arr,0,s.length());
    return name;
        // stack<char> a;
        // string name, dummy;
        // int value = 0;
        // for(int i = s.length()-1; i >= 0; i--){
        //     a.push(s[i]);
        // }
        // bool open  = false;
        // while(a.empty() == false){
        //     if(isdigit(a.top())){
        //         while(isdigit(a.top()))
        //             value = value * 10 + a.top()-48;
        //         a.pop();
        //     }
        //     else if(a.top() == '['){
        //         a.pop();
        //     }
        //     else if(isalpha(a.top())){
        //         dummy += a.top();
        //         a.pop();
        //     }
        //     else if(a.top() == ']'){
        //         a.pop();
        //         if(value == 0){
        //         name += dummy;
        //         }else{
        //             while(value--)
        //                 name += dummy;
        //             value = 0;
        //         }
        //         dummy =" ";
        //     }
            
        // }
        return name;
    }

int main(){
    string name = "3[a2[c]]";
    string house = decodeString(name);
    cout << house << endl;
    return 0;
}