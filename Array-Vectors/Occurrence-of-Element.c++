#include <iostream>
#include <vector>
using namespace std;

// Function to find the first occurrence of the target element
int findFirstOccurrence(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;
    int firstOccurrence = -1; // Initialize to -1 to handle case where target is not found

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            firstOccurrence = mid;
            end = mid - 1; // Continue searching in the left half
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return firstOccurrence;
}

// Function to find the last occurrence of the target element
int findLastOccurrence(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;
    int lastOccurrence = -1; // Initialize to -1 to handle case where target is not found

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            lastOccurrence = mid;
            start = mid + 1; // Continue searching in the right half
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return lastOccurrence;
}


// Function to calculate the total number of occurrences
int totalOccurrences(int first, int last) {
    return last - first + 1;
}


int main() {
    vector<int> arr = {1, 2, 4, 4, 4, 5, 5, 5};
    int target = 4;

    // Find the first and last occurrences of the target element
    int first = findFirstOccurrence(arr, target);
    int last = findLastOccurrence(arr, target);

    // If the target is not found, the total occurrences should be 0
    if (first == -1 || last == -1) {
        cout << "Total occurrences of " << target << " is 0" << endl;
    } else {
        // Calculate and print the total number of occurrences
        int total = totalOccurrences(first, last);
        cout << "First occurrence of " << target << " is at index " << first << endl;
        cout << "Last occurrence of " << target << " is at index " << last << endl;
        cout << "Total occurrences of " << target << " is " << total << endl;
    }

    return 0;
}
