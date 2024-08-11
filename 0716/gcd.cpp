// GCD
#include <iostream>

using namespace std;

int GCD(int a, int b) {
    if (b == 0) return a;  // 終止條件
    return GCD(b, a % b);  // 遞迴
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        cout << GCD(n, m) << "\n";
    }
    return 0;
}