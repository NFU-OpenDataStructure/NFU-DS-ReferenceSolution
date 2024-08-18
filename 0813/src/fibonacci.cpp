// f0 = 1
#include <iostream>
using namespace std;

int calls = 0;

int rec_fib(int x) {
    calls += 1;
    if (x <= 1) return 1;
    return rec_fib(x - 1) + rec_fib(x - 2);
}

int iter_fib(int x) {
    calls = 1;
    int a = 1, b = 1, tmp = 0;
    if (x <= 1) return 1;
    for (int i = 1; i < x; i++) {
        calls++;
        tmp = a;
        a += b;
        b = tmp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    rec_fib(n);
    cout << calls << "\n";
    return 0;
}
