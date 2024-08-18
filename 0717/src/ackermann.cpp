#include <iostream>

using namespace std;

int recA(int m, int n) {
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return recA(m - 1, 1);
    return recA(m - 1, recA(m, n - 1));
}

int main() {
    int m, n;
    while (cin >> m >> n) {
        cout << recA(m, n) << "\n";
    }
    return 0;
}