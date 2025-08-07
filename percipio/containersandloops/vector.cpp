#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> str;
    //push_back
    str.push_back("seattle");
    str.push_back("chinnamanur");
    str.push_back("madurai");
    str.push_back("Theni");

    ///using range for loop usig the iterator
    for(vector<string>:: iterator it = str.begin(); it != str.end(); it++){
        cout << *it << endl;
    }
    for(auto it = str.begin(); it != str.end(); it++){
        cout << *it << endl;
        if(*it == "seattle") break;
    }
     for(auto it = str.begin(); it != str.end(); it++){
        
        if(*it == "seattle") continue;
        cout << *it << endl;
    }

    for(int i  = 0; i<str.size(); i++){/*standard library function)*/
        cout << str[i] << endl;
    }
    /*diffference between the str[index] and str.at(index) is that the [] will not check the
    boundary condition while .at(index) will perform boundary condition and throw exception if
    out of bound accessing is caught */
    // cout <<"str at the index 10 :" <<  str[10] << endl;
    //prints nothing using the square bracket
    // cout <<"str at the index at operator 10 : " <<  str.at(10) << endl;
    //output:throwing exception:
    /*str at the index at operator 10 : terminate called after throwing an instance of 'std::out_of_range'
  what():  vector::_M_range_check: __n (which is 10) >= this->size() (which is 4)*/

  //finding in the vector of particular value

  auto it = std :: find(str.begin() ,str.end(), "seattle");
 
  if(it != str.end()){
    *it = "SEATTLE";
  }
  for(int i = 0; i<str.size(); i++){
    cout << std :: setw(30) << str.at(i) << endl;
  }
  /**********************************************************************************/
  //introduction to crend rend rbegin crbegin()
  //prints the vector elements in the reverse order
  for(vector<string>::reverse_iterator it = str.rbegin(); it != str.rend(); it++){
    cout << *it << endl;
  }
  //prints the vector element using constant iterator

  //attempting to change the below constant iterator using *it will result in error
  //since cbegin() returns constant iterator
  for(vector<string> :: const_iterator it = str.cbegin(); it != str.cend(); it++){
    cout <<*it << endl;
  }
  // printing the elements in the reverse order using constant iterator
  for(vector<string>::const_reverse_iterator it = str.crbegin(); it != str.crend(); it++){
    cout << *it << endl;
    // if(*it == "SEATTLE")
    //     *it = "seattle";//theses tow lines will cause error
  }
  //trying to make changes to the elements of the vector using const iterator it will cause error
  
  // can also be coded as
  for(int i = str.size()-1; i>=0; i--){
    cout << str.at(i) << endl;
  }



  /************************************************************************************/

  

    return 0;
}