#include <iostream>
using namespace std;

// using bitwise operator
bool isEven(int num) {
    return (num & 1) == 0;
}

// using Modulus operator
bool isEvenModulus(int num) {
    return (num % 2) == 0;
}

// using Division operator
bool isEvenDivision(int num) {
    return (num / 2) * 2 == num;
}



