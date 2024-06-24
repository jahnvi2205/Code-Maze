#include<iostream>
using namespace std;

// Function to sort the array containing only 0s and 1s
void sorting(int arr[], int size) {
    int zero = 0, one = 0;

    // Count the number of 0s and 1s in the array
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) {
            zero++;
        } else if(arr[i] == 1) {
            one++;
        }
    }

    // Fill the array with 0s based on the count
    for(int i = 0; i < zero; i++) {
        arr[i] = 0;
    }

    // Fill the array with 1s based on the count
    for(int i = zero; i < zero + one; i++) {
        arr[i] = 1;
    }
}

int main() {
    int arr[] = {1, 0, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the sorting function to sort the array
    sorting(arr, size);

    // Print the sorted array
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}