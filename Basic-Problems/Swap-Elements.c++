#include <iostream>
using namespace std;

// Function to swap using addition and subtraction
void swapUsingAddSub(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

// Function to swap using a temporary variable
void swapUsingTemp(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap using XOR
void swapUsingXOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}