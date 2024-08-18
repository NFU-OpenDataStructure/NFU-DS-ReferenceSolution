#include <iostream>

using namespace std;

int sigma(int n) {
    if (n < 0)
        throw "must be grater then or equal 0";
    else if (n == 0)
        return 0;
    return n + sigma(n - 1);
}

int main() {
    int n;
    while (cin >> n, n) {
        cout << sigma(n) << "\n";
    }
    return 0;
}