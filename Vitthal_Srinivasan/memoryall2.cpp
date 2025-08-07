#include<iostream>

using std :: cout ;
using std :: endl;
using std :: string;
int main(){
    int *sales_today = new int[5];
    int *sales_forecast { new int [5] {}};
    int *sales_daybefore{ new int [5] {1,2,3}};
    for(int i = 0; i<5; i++){
        cout << sales_today[i] << endl;
    }
    for(int i = 0; i<5; i++){
        cout << sales_forecast[i] << endl;
    }
    for(int i = 0; i<5; i++){
        cout << sales_daybefore[i] << endl;
    }
    delete[] sales_today;
    delete[] sales_forecast;
    delete[] sales_daybefore;
    return 0;
}