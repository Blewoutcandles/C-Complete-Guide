#include<bits/stdc++.h>
using std :: pair;
using std :: cout;
using std :: cin;
using std :: endl;
using std :: vector;
using std :: string;
using std :: multimap;
using std :: exception;
using std :: make_pair;
using std :: array;

template <typename T>
class complexnumber{
    private:
            pair<T,T> cn;
    public:
        complexnumber(T real, T imaginary): cn(make_pair(real,imaginary)){}
        void print_complex(){
            if(cn.second > 0) 
                cout << cn.first << " + " << cn.second << " j" << endl;
            else   
                cout << cn.first << " " << cn.second << " j" << endl;
        }
        double magnitude(){
            return sqrt(cn.first * cn.first + cn.second * cn.second);
        }
        pair<T, T> add(T value1, T value2, T ovalue1, T ovalue2) const{
            pair<T, T> result;
            result.first = value1 + ovalue1;
            result.second = value2 + ovalue2;
            return  result;
        }
        pair<T, T> sub(T value1, T value2, T ovalue1, T ovalue2) const{
            pair<T, T> result;
            result.first = value1 - ovalue1;
            result.second = value2 - ovalue2;
            return  result;
        }
        pair<T, T> mul(T value1, T value2, T ovalue1, T ovalue2) const{
            pair<T, T> result;
            result.first = value1 * ovalue1 -(value2 * ovalue2);
            result.second = value2 *ovalue1 + ovalue2 *value1;
            return  result;
        }
        void operation(T value1, T value2, T ovalue1, T ovalue2){
            char ch;

            cout << "which operation do you want to perform ? " << endl;
            cout << "add - + \nmultiply -* \nsub - - " << endl;
            
            cin >> ch;
            pair<T,T> result1;

            switch( ch){

                case '+':
                    result1 = add(value1, value2, ovalue1, ovalue2);
                    cout << result1.first << "+j(" << result1.second <<")" << endl ;
                    break;

                case '-':
                    result1 = sub(value1, value2, ovalue1, ovalue2);
                    cout << result1.first << "+j(" << result1.second <<")" << endl ;
                    break;

                case '*':
                    result1 = mul(value1, value2, ovalue1, ovalue2);
                    cout << result1.first << "+j(" << result1.second <<")" << endl ;
                    break;
                    
                default :
                    cout << "please enter valid input" << endl;
                    break; 
            }
        }
        void operation(const complexnumber& other){
            operation(cn.first, cn.second,other.cn.first, other.cn.second);
        }

};


int main(){

    complexnumber n1(10,11);
    complexnumber n2(15,-16);
    cout << n1.magnitude() << endl;
    cout  << n2.magnitude() << endl;
    n1.operation(n2);
    return 0;
}