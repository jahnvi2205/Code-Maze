#include<iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int totalElements = rows * cols;

    int start = 0;
    int end = totalElements - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int rowIndex = mid / cols;
        int colIndex = mid % cols;
        int currentNumber = matrix[rowIndex][colIndex];

        if (currentNumber == target) {
            return true;
        } else if (currentNumber > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 34;
    
    if (searchMatrix(matrix, target)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}