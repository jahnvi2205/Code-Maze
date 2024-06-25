#include <iostream>
using namespace std;

// Function to find the missing number in the array
int findMissingNumber(int arr[], int size) {
    // Calculate the sum of the first (size + 1) natural numbers
    int totalSum = (size + 1) * (size + 2) / 2;
    int arraySum = 0;
    
    // Calculate the sum of the array elements
    for(int i = 0; i < size; i++) {
        arraySum += arr[i];
    }
    
    // The missing number is the difference between the total sum and the array sum
    return totalSum - arraySum;
}

int main() {
    // Initialize the array with one missing number
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Find and output the missing number
    int missingNumber = findMissingNumber(arr, size);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
