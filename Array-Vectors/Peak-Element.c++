#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1]) {
            // If the middle element is less than the next element, the peak must be in the right half
            start = mid + 1;
        } else {
            // If the middle element is greater than the next element, the peak must be in the left half (including mid)
            end = mid;
        }
    }
    // At the end of the loop, start and end will point to the peak index
    return start;
}


int main(){
    vector<int> nums = {0,6,8,10,15,5,2};
    cout<<peakIndexInMountainArray(nums)<<endl;
    return 0;
}