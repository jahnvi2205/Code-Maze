#include <iostream>
#include <cmath>
using namespace std;

// Function to perform division of two integers without using the division operator
double divide(int dividend, int divisor) {
    int start = 0, end = dividend;
    int answer = -1;

    // Binary search to find the integer part of the division result
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if ((divisor * mid) == dividend) {
            answer = mid;
            break;
        } else if (divisor * mid > dividend) {
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
        while (preciseAnswer * divisor <= dividend) {
            preciseAnswer += increment;
        }
        preciseAnswer -= increment;
        increment /= 10;
    }

    return preciseAnswer;
}

int main() {
    int dividend = 44;
    int divisor = -7;

    if (divisor == 0) {
        cout << "Division is not possible" << endl;
        return 0;
    }

    double ans = divide(abs(dividend), abs(divisor));

    // Adjusting the sign of the result based on the sign of the inputs
    if ((divisor < 0 && dividend > 0) || (divisor > 0 && dividend < 0)) {
        ans = -ans;
    }

    cout << ans;
    return 0;
}
