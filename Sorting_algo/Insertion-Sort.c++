#include <iostream>
#include <vector>
using namespace std;

// Function to print the elements of a vector
void printVector(const vector<int>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

// Function to perform insertion sort 
// Time complexity: O(n^2), Space complexity: O(1)
vector<int> insertionSort(vector<int> vec) {
    for(int i = 1; i < vec.size(); i++) {
        int key = vec[i];
        int j = i - 1;

        while(j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
    return vec;
}

int main() {
    vector<int> arr = {34, 57, 82, 19, 76};  
    vector<int> sortedArr = insertionSort(arr);  
    printVector(sortedArr);  
    return 0;
}
