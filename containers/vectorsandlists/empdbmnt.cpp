#include<iostream>
#include<map>
#include<string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: map;
using std :: string;
using std :: make_pair;

struct Employee{
    int age;
    string empname;
    double salary;
    string department;
};

void print(const Employee & emp){
    
    cout << "Name :" << emp.empname << '\n' << "Age : " << emp.age << '\n' \
    <<"Salary : " << emp.salary << "\nDepartment : " << emp.department << endl<< endl;
}
int main(){
    map<int, Employee> empst;
    empst[100]={23,"Takasugi",112255, "Missionary"};
    empst[101]={24,"katsura", 3344.22, "FBI"};
    empst[102]={29, "tatsuma", 66731.92, "Sales"};
    int empid = 101;
    cout << "finding employee with id 101" << endl<< endl;
    map<int, Employee>:: iterator it = empst.find(empid);
    if(it != empst.end()){
        print(empst[empid]);
    }else{
        cout << "Could not find the employee with the given id  " << endl<< endl;
    }
    cout << "Removing the employee with id 101" << endl<< endl;
    int removeid = 101;
    empst.erase(/*keyname in this case int : (primary)*/101);
    cout << "printing out the list of employees" << endl<< endl;
    for(const auto& i : empst){
        cout << "*************************" << endl<< endl;
        cout << "Employee id : " << i.first << endl;
        print(i.second);
        cout << "*************************" << endl<< endl;
    }
    cout << "Adding new employee " << endl<< endl;
    Employee katsura{23,"Katsura",3344.22,"FBI"};
    empst.insert(make_pair(101,katsura));
    cout << "After inserting the new employee " << endl<< endl;
    cout << "printing out the list of employees" << endl<< endl;

        for(const auto& i : empst){
        cout << "*************************" << endl<< endl;
        cout << "Employee id : " << i.first << endl;
        print(i.second);
        cout << "*************************" << endl<< endl;
    }
    return 0;
}