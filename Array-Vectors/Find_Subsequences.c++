#include <iostream>
using namespace std;

void findSubsequences(const string& str, string output, int index) {
    if (index >= str.length()) {
        cout << "-> " << output << endl;
        return;
    }

    // Exclude the current character
    findSubsequences(str, output, index + 1);

    // Include the current character
    output.push_back(str[index]);
    findSubsequences(str, output, index + 1);
}

int main() {
    string str = "abcd";
    string output = "";
    int index = 0;

    findSubsequences(str, output, index);

    return 0;
}