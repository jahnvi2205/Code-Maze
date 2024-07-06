#include <iostream>
using namespace std;

// Function to find the odd occurring number in an array
int findOddOccurrence(int arr[], int size) {
    int start = 0, end = size - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (start == end) {
            return arr[start];
        }

        if (mid % 2 == 1) {
            if (arr[mid] == arr[mid - 1] && mid - 1 >= 0) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        } else {
            if (arr[mid] == arr[mid + 1] && mid + 1 < size) {
                start = mid + 2;
            } else {
                end = mid;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 3, 10, 10, 2, 2, 3, 3, 1, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Required Number is " << findOddOccurrence(arr, size);
    return 0;
}
