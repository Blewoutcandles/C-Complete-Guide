// #include <bits/stdc++.h> 
// using namespace std; 
  
// // Function to find the absolute 
// // value 
// void findAbsolute(int N) 
// { 
  
//     // Find mask 
//     int mask = N >> (sizeof(int) * CHAR_BIT - 1); 
  
//     // Print the absolute value 
//     // by (mask + N)^mask 
//     cout << ((mask + N) ^ mask); 
// } 
  
// // Driver Code 
// int main() 
// { 
  
//     // Given integer 
//     int N = 12; 
  
//     // Function call 
//     findAbsolute(N); 
//     return 0; 
// } 
   
// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
 
//     int n = 5, m = -5;
//     bitset<32> b(n);
//     bitset<32> b1(m);
//     cout << "Binary of 5:" << b << endl;
//     cout << "Binary of -5:" << b1 << endl;
//     return 0;
// }

   
// C++ program for the above approach
 
#include <bits/stdc++.h>
 
using namespace std;
 
void binary(int num){
      //converts the number to binary
      //and removes leading zeroes
     cout << bitset<32>(num).to_string()<<endl;
     cout << bitset<32>(num).to_string().substr(28) << endl;
     cout<<(32 - (int)log2(num + 1))<<endl;
     cout << (ceil)((int)log2(num + 1));
     
}
//  0000 0000 0000 0000 0000 0000 0000 1010
// Driver Code
int main()
{
    int x = 10;
    binary(x);
     
}