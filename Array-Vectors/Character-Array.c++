#include <iostream>
#include <cstring>  // For built-in string functions

using namespace std;

// Function to check if a given character array is a palindrome
bool isPalindrome(char str[], int length) {
    int left = 0, right = length - 1;
    while (left <= right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// Function to convert all characters in the array to uppercase
void toUpperCase(char str[]) {
    int index = 0;
    while (str[index] != '\0') {
        if (str[index] >= 'a' && str[index] <= 'z') {
            str[index] = str[index] - 'a' + 'A';
        }
        index++;
    }
}

// Function to convert all characters in the array to lowercase
void toLowerCase(char str[]) {
    int index = 0;
    while (str[index] != '\0') {
        if (str[index] >= 'A' && str[index] <= 'Z') {
            str[index] = str[index] - 'A' + 'a';
        }
        index++;
    }
}

// Function to reverse the character array
void reverseArray(char str[], int length) {
    int left = 0, right = length - 1;
    while (left <= right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

// Function to find the length of the character array
int findLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    // Input the string with spaces
    cin.getline(str, 100);

    // Find the length
    int length = findLength(str);
    cout << "Length: " << length << endl;

    // Convert all letters to uppercase
    toUpperCase(str);
    cout << "Uppercase: " << str << endl;

    // Convert all letters to lowercase
    toLowerCase(str);
    cout << "Lowercase: " << str << endl;

    // Reverse the array
    reverseArray(str, length);
    cout << "Reversed array: " << str << endl;

    // Check if the string is a palindrome
    if (isPalindrome(str, length)) {
        cout << "Palindrome: Yes" << endl;
    } else {
        cout << "Palindrome: No" << endl;
    }

    return 0;
}
