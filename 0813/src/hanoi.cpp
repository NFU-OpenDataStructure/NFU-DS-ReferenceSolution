#include <math.h>

#include <iostream>
using namespace std;

int step = 0;

void Hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        step++;
        return;
    }
    Hanoi(n - 1, A, C, B);
    Hanoi(1, A, B, C);
    Hanoi(n - 1, B, A, C);
}

int main() {
    int n;
    cin >> n;
    Hanoi(n, 'A', 'B', 'C');

    cout << step << "\n";
    return 0;
}