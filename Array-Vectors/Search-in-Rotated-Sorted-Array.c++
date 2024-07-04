#include<iostream>
#include <vector>
using namespace std;

int findPivotElement(vector<int> arr) {
    int start = 0, end = arr.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (start == end) {
            return start;
        }

        if (mid - 1 >= 0 && arr[mid] < arr[mid - 1]) {
            return mid - 1;
        }
        else if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if (arr[start] > arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1; // This line is reached if the array is not rotated
}

int binarySearch(vector<int> arr, int target, int start, int end) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int search(vector<int>& nums, int target) {
    int pivot = findPivotElement(nums);
    int result = -1;

    if (target >= nums[0] && target <= nums[pivot]) {
        result = binarySearch(nums, target, 0, pivot);
    } else {
        result = binarySearch(nums, target, pivot + 1, nums.size() - 1);
    }
    return result;
}

int main(){
    vector<int> nums= {4,5,6,7,0,1,2};
    int target = 0;
    cout<<search(nums,target)<<endl;
    return 0;
}
