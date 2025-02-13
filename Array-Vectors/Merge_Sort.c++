#include <iostream>
using namespace std;

// Merge two sorted subarrays into one sorted array
void merge(int arr[], int start, int mid, int end) {
    int leftSize = mid - start + 1;
    int rightSize = end - mid;

    // Dynamically allocate memory for temporary arrays
    int* left = new int[leftSize];
    int* right = new int[rightSize];

    // Copy data to temporary arrays
    for (int i = 0; i < leftSize; i++)
        left[i] = arr[start + i];
    for (int j = 0; j < rightSize; j++)
        right[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into the main array
    int leftIndex = 0, rightIndex = 0, mainIndex = start;
    while (leftIndex < leftSize && rightIndex < rightSize) {
        if (left[leftIndex] <= right[rightIndex]) {
            arr[mainIndex] = left[leftIndex];
            leftIndex++;
        } else {
            arr[mainIndex] = right[rightIndex];
            rightIndex++;
        }
        mainIndex++;
    }

    // Copy remaining elements of left[] if any
    while (leftIndex < leftSize) {
        arr[mainIndex] = left[leftIndex];
        leftIndex++;
        mainIndex++;
    }

    // Copy remaining elements of right[] if any
    while (rightIndex < rightSize) {
        arr[mainIndex] = right[rightIndex];
        rightIndex++;
        mainIndex++;
    }

    // Free dynamically allocated memory
    delete[] left;
    delete[] right;
}

// Recursive function to perform merge sort
void mergeSort(int arr[], int start, int end) {
    if (start >= end) return; // Base case: array has 1 or 0 elements

    int mid = start + (end - start) / 2; // Avoids overflow and calculates mid
    mergeSort(arr, start, mid);         // Sort left half
    mergeSort(arr, mid + 1, end);       // Sort right half
    merge(arr, start, mid, end);        // Merge sorted halves
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {4, 6, 2, 3, 1, 8, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before merge sort: ";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "After merge sort:  ";
    printArray(arr, size);

    return 0;
}