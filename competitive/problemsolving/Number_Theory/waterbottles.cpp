#include<iostream>
using namespace std;


int numWaterBottles(int numBottles, int numExchange) {
        int drink = 0;
        int emptybottles = 0;
        while(numBottles){
            drink += numBottles;
            emptybottles += numBottles;
            numBottles = emptybottles/ numExchange;
            emptybottles %= numExchange;
        }
        return drink;
    }

    int main(){
        int value = numWaterBottles(15, 4);
        cout << value << endl;
    }