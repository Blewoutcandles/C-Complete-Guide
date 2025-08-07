#include <bits/stdc++.h>
using namespace std;

template<typename T>
using Transform = bool(*)(const T&, const T&);

template<typename T>
void bubble_sort(T& arr, int size, Transform<typename std::remove_reference<decltype(arr[0])>::type> compute_fn) {
// void bubble_sort(T& arr, int size, Transform<T> compute_fn){
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(compute_fn(arr[j], arr[j+1])) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

template<typename T>
bool compare(const T& a, const T& b) {
    return a > b;
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    float arr1[] = {3.2, 4.3, 5.2, 1.1};

    auto int_compare = [](const int& a, const int& b){ return a > b; };
    auto float_compare = [](const float& a, const float& b){ return a > b; };

    bubble_sort(arr, 5, compare);  
    bubble_sort(arr1, 4, compare);  

    cout << "Sorted int array: ";
    for(const auto& num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Sorted float array: ";
    for(const auto& num : arr1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
