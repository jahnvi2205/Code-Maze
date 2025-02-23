#include <iostream>
#include <vector>
using namespace std;

// Function to print the elements of a vector
void printVector(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

// Function to perform selection sort on a vector
// Time complexity: O(n^2), Space complexity: O(1)
vector<int> selectionSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    return arr;
}

int main() {
    vector<int> arr = {23, 11, 10, 45, 89};
    vector<int> sortedArr = selectionSort(arr);
    printVector(sortedArr);
    return 0;
}
