#include<iostream>
using namespace std;

void shiftArray(int arr[], int size, int positions) {
    positions = positions % size;      // To handle shifts greater than array size
    for(int i = 0; i < positions; i++) {
        int temp = arr[size-1];
        for(int j = size-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int positions;

    cout << "Enter the number of positions to shift: ";
    cin >> positions;

    shiftArray(arr, size, positions);
    return 0;
}