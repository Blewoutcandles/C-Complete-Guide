#include <bits/stdc++.h>
using namespace std;
// bool alternate(string s, int& index, int& value_to_insert){
//     for(int i = 1; i<s.length(); i++){
//         if(s[i-1] == s[i]){
//             index = i;
//             value_to_insert = !(s[i-1]-'0');
//             return false;
//         }
//     }       
//     return true;
// }

// int minoperations_alternate(string s, int len){
//     int count = 0, index = 0, value_to_insert = 0;
//     while(!alternate(s, index, value_to_insert)){
//         char a;
//         if(value_to_insert == 0)  a = '0';
//         else a = '1';
//         s.insert(index+s.begin(),a);
//         ++count;
//     }
//     return count;
// }
// int main() {
// 	string binarystring;
// 	int n_t, N;
// 	cin >> n_t;
// 	while(n_t--){
// 	    cin >> N >> binarystring;
// 	    cout << minoperations_alternate(binarystring, N) << endl;
// 	}
// 	return 0;
// }



#include <iostream>
#include <string>
 using namespace std;
class Class1
 {
     public:
    Class1()
    {
         cout << "Hello. I am the constructor" << endl;
    }
    int add(int  a, int b){
        int result = a+ b;
        return result;
    }

    int prod(int a, int b){
        return a * b;
    }
   ~Class1()
    {
        cout << "Hello. I am the destructor" << endl;
   }
 };

 void myfunc(const int& num){
    cout << num << endl;
 }
 int main()
 {
    // shared_ptr<Class1> var1 {make_shared<Class1>()};
    // shared_ptr<Class1> var2 = var1;
    // cout << var1 << endl;
    // cout << var2 << endl;
    // cout << var1 -> prod(12,12) << endl;
    // cout << var2 -> add(12,12) << endl;
    // var2.reset();
    // var1.reset();
    // cout << var1 << endl;
    // cout << var2 << endl;
    // cout << var2 -> add(10,10) << endl;
    // string one = "hellow";
    // string two = "meet the eye";
    // string const *str = &one;
    // cout << *str << endl;
    // str = &two;
    // cout << *str << endl;




//    int marks[5]={80,74,92,69,53};
//   char students[][10]={"Mary", "Rex", "Olive","Aliah","Sam"};
//    for (int i=0; i<4; i++)
//       for (int j=i+1; j<5; j++)
//         {
//             int t;
//           char stud[10];
//           if (marks[i] < marks [j])
//           {
//               t = marks[i];
//               strcpy(stud,students[i]);
//               marks[i] = marks[j];
//               strcpy(students[i],students[j]);
//               marks[j] = t;
//               strcpy(students[j],stud);
//           }
//        }
//        for (int i=0; i<5; i++)
//       std::cout << students[i] << " \t " << marks [i] << "\n";
//    return 0;
// }
// enum Fruits { Apple, Banana, Avacado, Strawberry
//     }fru;
// fru = Banana;
//  switch (fru)
//  {
//  case Apple:
//  cout << "Apple is rich in Vitamin A";
//  break;
//  case Banana:
//  cout << "Banana is rich in Vitamin B";
//  break;
//  case Avacado:
//  cout << "Avacado is rich in Vitamin E";
//  break;
//    case Strawberry:
//  cout << "Strawberry is rich in Vitamin C";
//  break; 
//  }
//  return 0;
//  }

// int x = 100, y = 200, z = 20;
// bool b1, b2, b3;
// b1 = x != y;
// b2 = x > y;
// b3 = b1 || b2;
// cout << true + 5*z-b3 << endl;
// cout << "Hello " << endl;
// return 0;
//  }

// char s1[50];
// char s2[50];
// char s3[50];
// string m1, m2, m3;
// cin >> s1 >> s2;
// m1 = s1;
// m2 = s2;
// m3 = m1 + m2;
// strcat(s1,s2);
// cout << std :: boolalpha << (s1 == m3) << endl;
// cout << m1 << m2 << m3 << endl;


// int var1 = 65, var2 = 25;
// if(int i = var1 + var2; i!=100 )
//     cout << "The sum is not zero clown" << i;
// else
//     cout << "The sum is ont zer " << i;

// int n = 66, num2;
// char c1 = 97, c2 = 'A', c3;
// c3 = n;
// num2 = c2;
// cout <<  c1;
// string s;
// getline(cin,s,'4');

//    char st[100];
//     string str;
// //   cout << "Enter your favourite Programming Language : " ;
// //     getline(cin, str, '\n');
//     getline(cin, str, 'c');
//     cout << str;
//     cout<< "Your favourite language is = "<<str;
//     cin.getline(st, 100, 'S');
//     cout << st << endl;

string str1("C++ is an Object Oriented Language"), str2, str3;
int n;
str2 = str1[12];
str3 = str1[str1.length()-3];
str2 = str2 + str3;
// str2.append(str1, 15, 3);
//destination_string.append(source_string, starting_index_from_source, number of characters)
// cout << str2 << endl;
// float n1 = 10.12;
// myfunc(n1);
// cout << n1 << endl;
// bool b1 = true, b2 = true;
// bool b3 = b1 - b2;
// cout << b2 - b1 << endl;

    // string name;
    //  int rollno;
    // cout << "Enter the student Rollnumber:";
    //  cin >> rollno;
    //  cout << "Enter the student Name:";
    //  cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // getline( cin, name);
    //  cout << "Name: " << name << endl;
    // cout << "Rollnumber: " << rollno;

return 0;
 }