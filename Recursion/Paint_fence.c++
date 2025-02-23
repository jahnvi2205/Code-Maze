#include <iostream>
using namespace std;

int paintFence(int n, int k) {
    if (n == 1) 
        return k;
    if (n == 2) 
        return k * k;

    return (k - 1) * (paintFence(n - 1, k) + paintFence(n - 2, k));
}

int main() {
    int n = 3, k = 3;
    cout << paintFence(n, k) << endl;
    return 0;
}
