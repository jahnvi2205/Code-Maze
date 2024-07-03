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

// Using Binary Search
int findMissingNum(int arr[],int size){
    int start = 0, end = size-1, ans = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]-mid == 1){
            start = mid+1;
        }
        else if(arr[mid]-mid == 2){
            ans = mid;
            end = mid-1;
        }
    }
    if(ans+1 == 0 ){
        return size+1;
            
    }return ans+1;
}

int main() {
    // Initialize the array with one missing number
    int arr[] = {1,2, 3, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Find and output the missing number

    int missingNumber = findMissingNumber(arr, size);
    cout << "The missing number is: " << missingNumber << endl;

    int missingNumber = findMissingNum(arr, size);
    cout << "The missing number is: " << missingNumber << endl;


    return 0;
}
