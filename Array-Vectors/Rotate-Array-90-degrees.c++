#include <iostream>
#include <vector>
#include <algorithm> // For swap function
using namespace std;

// Function to reverse a vector
void reverseVector(vector<int>& vec) {
    int left = 0;
    int right = vec.size() - 1;
    while (left < right) {
        swap(vec[left], vec[right]);
        left++;
        right--;
    }
}

// Function to rotate a 2D vector (matrix) by 90 degrees clockwise
void rotateMatrix(vector<vector<int>>& matrix) {
    int size = matrix.size();

    // Step 1: Take transpose of the matrix
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row of the matrix
    for (int i = 0; i < size; i++) {
        reverseVector(matrix[i]);
        // reverse(matrix[i].begin(),matrix[i].end());  //inbuilt function
    }
}

int main() {
    // Example 2D vector (matrix)
    vector<vector<int>> matrix = {{1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9}};
    
    // Rotate the matrix by 90 degrees clockwise
    rotateMatrix(matrix);

    // Print the rotated matrix
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
