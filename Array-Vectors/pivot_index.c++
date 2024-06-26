#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0, leftSum = 0;

    // Calculate the total sum of the array
    for (int num : nums) {
        totalSum += num;
    }

    // Iterate through the array to find the pivot index
    for (int i = 0; i < nums.size(); ++i) {
        // If the left sum is equal to the right sum, return the index
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        // Update the left sum
        leftSum += nums[i];
    }

    // If no pivot index is found, return -1
    return -1;
}
int main(){
    vector<int> nums = {1,7,3,6,5,6};
    cout<<pivotIndex(nums)<<endl;
    return 0;
}