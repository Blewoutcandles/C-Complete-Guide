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

template<typename T, typename S>
class pairs{
    private:
        pair<T,S> pair_value;
        vector<pair<T,S>> pair_value_vector;
    public:
       
        pairs(T t1, S t2):  pair_value(make_pair(t1,t2)), pair_value_vector{pair_value}{}
        
        S get(T key){
            for(const auto& pairsvalue : pair_value_vector){
                if(pairsvalue.first == key)
                    return pairsvalue.second;
            }
            // throw std :: runtime_error("key value not found");
            return S();
        }
        void set(T key, S value){
            for(const auto& pairing : pair_value_vector){
                if(key == pairing.first){
                    cout << "key already exists" << endl;
                    return;
                }
            }
            pair_value_vector.push_back(make_pair(key, value));
        }
        void update(T key, S value){
            for(auto& pairing : pair_value_vector){
                if(key == pairing.first){
                    pairing.second = value;
                    cout << "------------Value has been successfully updated-------------" << endl;
                    return;
                }
            }            
        }
        void display(){
            cout << "-----------Displaying the pairs--------------" << endl;
            for(const pair<T,S>& it : pair_value_vector){
                cout << "Key : " << it.first << " -- " << " Value : " << it.second << endl;
            } 
        }
        vector<pair<T,S>> get_pair_values() const{
            return pair_value_vector;
        }

        friend std :: ostream& operator<<(std :: ostream& stream, const pairs<T,S>& sample) {
            vector<pair<T,S>> vectorvalue = sample.get_pair_values();
            for(const pair<T,S> pair_value : vectorvalue){
                stream << "key is : " << pair_value.first << " --- " << "value is : " << pair_value.second << endl;
            }
            return stream;
        }
};


int main(){
    pairs<string, int> sample{"goodmorning",123};
    sample.set("jacknjill",45);
    sample.set("doranbuji", 102);
    sample.display();
    sample.update("jacknjill", 56);
    cout << "The value for the key is : " << sample.get("doranbuji");
    sample.display();
    cout << sample << endl;

    pairs<int, int> sample1{1,2};
    cout << sample1 << endl;
    return 0;
}
