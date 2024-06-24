#include<iostream>
using namespace std;

// Function to sort the array using the Dutch National Flag algorithm
void dutchNationalFlagSort(int arr[], int size) {
    int left = 0, right = size - 1;
    int i = 0;
    
    while (i <= right) {
        if (arr[i] == 0) {
            // If the element is 0, swap it with the element at 'left' pointer
            swap(arr[i], arr[left]);
            left++;
            i++;
        }
        else if (arr[i] == 2) {
            // If the element is 2, swap it with the element at 'right' pointer
            swap(arr[i], arr[right]);
            right--;
        }
        else {
            // If the element is 1, just move the pointer 'i' forward
            i++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 1, 0, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Sort the array
    dutchNationalFlagSort(arr, size);
    
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
