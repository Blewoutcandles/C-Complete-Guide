#include<iostream> 
#include<algorithm> 

using namespace std;
long long binaryexponentiation(int A, int b){
    if(b == 0) return 1;//if power becomes zero, raising to any power gives one.
    if(b%2 == 0) return binaryexponentiation(A*A, b/2);
    return binaryexponentiation(A*A, (b-1)/2) * A;
}

int main(){
    int A = 2;
    int b = 4;//the problem is to compute the A^b
    //particulary when the numbe ris large it will be hard to compute the values however we could break it down
    //to modular codes.
    /** NOTE: 
     * A ^ b can be written as: (A ^ 2)^(b/2) if b is even
     * A ^ b can be written as: A.[(A ^ 2)^(b-1/2)] if b is odd
     * //the main idea is to compute the algorithm in O(logn) time complexity
     * Recursive implementation: number^b --> (number*number)^(b/2) --> ..
     * //escapte condition b is decreasing
    **/
   long long ans = binaryexponentiation(A, b);
   cout << ans << endl;
    return 0;
}