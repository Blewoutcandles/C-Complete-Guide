#include <iostream>
#include <vector>
using namespace std;

// Function to reverse array elements from start to end
void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to left rotate array elements by d positions
void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // To handle case when d >= n
    
    // Reverse the first d elements
    reverse(arr, 0, d - 1);
    // Reverse the remaining elements
    reverse(arr, d, n - 1);
    // Reverse the whole array
    reverse(arr, 0, n - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;
    leftRotate(arr, d);
    cout << "Array after left rotation:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}