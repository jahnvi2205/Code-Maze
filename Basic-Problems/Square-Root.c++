#include <iostream>
using namespace std;

// Function to calculate the square root of a number up to 3 decimal places
double calculateSquareRoot(int number) {
    int start = 0, end = number;
    double answer = -1;
    
    // Binary search to find the integer part of the square root
    while (start <= end) {
        long long int mid = start + (end - start) / 2;
        if (mid * mid == number) {
            answer = mid;
            break;
        } else if (mid * mid > number) {
            end = mid - 1;
        } else {
            answer = mid;
            start = mid + 1;
        }
    }
    
    // Refining the result to include the decimal part up to 3 decimal places
    double preciseAnswer = answer;
    double increment = 0.1;
    
    for (int i = 0; i < 3; i++) {
        while (preciseAnswer * preciseAnswer <= number) {
            preciseAnswer += increment;
        }
        preciseAnswer -= increment;
        increment /= 10;
    }
    
    return preciseAnswer;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Square root of " << number << " is " << calculateSquareRoot(number) << endl;
    return 0;
}
