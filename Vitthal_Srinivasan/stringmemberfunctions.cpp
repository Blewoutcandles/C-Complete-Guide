#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<vector>

#include<cstdio>//c style standard libraries the below 2
#include<cstring>

using namespace std;
using std::cout;
using std :: cin;
using std :: getline;
using std :: string; // :: is the scope resolution operator

int main(){

    string proverb { "Dont get motivated try to be disciplined"};
    cout <<proverb.length() << endl;// printout the length of the string
    // here proverb is the object and the length() is the method 
    //syntax is the object_name.memberfuncitons()

    string proverb2 = "Tolerate the pain ";
    proverb.append(proverb2);//this member funcitons returns a string 
    //so we can perform multiple appending operation
    proverb.append("Pain is the ").append("Gate Keeper ").append("of destiny");
    cout << proverb << endl;

    cout<<"First word" << proverb.substr(0,10) << endl;
    //here first parameter inside the substr method is "starting index" then "length of the substring you want it to be
    cout <<"Second word"<< proverb.substr(14) << endl;//only one parameter means starting index alone (will print the entire string 
    //print up to the length of the string
    cout <<"Third Word" << proverb.substr(11,2) << endl;

    cout << "Fourth word" << proverb.substr(11,100) << endl;

    string name_me{"Alice"};
    string name_you{"Billy"};
    cout << name_me.compare(name_you) << endl;
    cout << name_me.compare(name_me) << endl;
    cout << name_you.compare(name_me) << endl;//here the name_you is the receiver of the compare method
    //used to compare the strings lexicographically

    cout << name_me.compare(2, name_you.length(), name_you) << endl;
    //in the above method
    //general syntax: object_name.compare(startingindex, length to which we need to compare, source of the string to whom we compare)
    //in the above name_me.compare(2,5, name_you)
    //here 2- starting index, 5- number of characters to compare or length to which we compare, name_you-source of the string.

    string consider = "The harder you work, the luckier you get";
    cout<< consider.find("harder") << endl;// prints the index of the string harder
    cout << consider.find("The")<< endl;
    cout<<consider.find("you")<< endl;//used to find the index of the word in the stirng consider
    //now what if you can't find the word in the string
    //special keyword std :: string :: npos;
    cout << consider.find("your") << endl;
    cout << "Cant find the word in the string " << std :: string :: npos << endl;
    cout<<consider[0] << " " << consider[consider.length()-1] << " " << consider[consider.length()+10]<<endl;
    consider[1] = 'H';
    consider[2] = 'E';
    cout << consider << endl; 
    //string concatenation

    string part1 = "When one door shuts, ";
    string part2 = "another door opens";
    string concatenated = part1+part2;
    string concatenated1 = part1+"another door opens" +" Finishing off the work";
    // string concatenated2 = "When one door shuts" + "another door opens";
    //The above one produce error since we can't have both strings as const char *
    //The ones that are prior to the above will have both string objects or either one would be const char * and another is a
    //string object or vice versa.

    cout << concatenated<<endl;
    cout << concatenated1 << endl;

    //using relational operator
    cout << (name_me > name_you) << endl;
    cout << (name_you == name_me) << endl;
    cout << (name_me <= name_you) <<endl;
    cout << (name_me != name_you) << endl; 
    return 0;
}