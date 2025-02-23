#include <iostream>
using namespace std;

// Function to perform binary search on a sorted array
// Returns the index of the target element if found, otherwise -1
int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1; 

    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid index

        if (arr[mid] == target) {
            return mid; // Return index of target element
        } else if (target > arr[mid]) {
            start = mid + 1; 
        } else if (target < arr[mid]) { 
            end = mid - 1; 
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    // Perform binary search and print the index of the target element (+1 for 1-based index)
    int resultIndex = binarySearch(arr, size, target);
    if (resultIndex != -1) {
        cout << "Target " << target << " found at index " << resultIndex + 1 << endl;
    } else {
        cout << "Target " << target << " not found in the array" << endl;
    }

    return 0;
}
