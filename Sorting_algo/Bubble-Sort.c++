#include <iostream>
#include <vector>
using namespace std;

// Function to print the elements of a vector
void printVector(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "   ";
    }
    cout << endl;
}

// Function to perform bubble sort
// Time complexity: O(n^2), Space complexity: O(1)
vector<int> bubbleSort(vector<int> vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            
            // Sort in ascending order
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
            }
        }
    }
    return vec;
}

int main() {
    vector<int> arr = {40, 55, 22, 37, 19};
    vector<int> sortedArr = bubbleSort(arr);
    printVector(sortedArr);

    return 0;
}
