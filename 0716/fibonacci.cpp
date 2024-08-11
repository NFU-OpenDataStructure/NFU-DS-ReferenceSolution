// Fibonacci
#include <iostream>

using namespace std;

void copy(int *begin, int *end, int *result) {
    int index = 0;

    for (int *p = begin; p != end; p++) {
        *(result + index++) = *p;
    }

    *(result + index++) = 0;
}

int *DP;
int sizeOfDP = 1;

int F(int i) {
    if (sizeOfDP > i && DP[i] > 0) {
        return DP[i];
    }

    int oldSize = sizeOfDP;

    if (sizeOfDP <= i) {
        int *tmp = DP;
        DP = new int[i + 1];
        copy(tmp, tmp + sizeOfDP, DP);
        sizeOfDP = i + 1;
    }
    // DP[i] = F(i-1)+F(i-2);
    for (int j = oldSize; j < sizeOfDP; j++) DP[j] = DP[j - 1] + DP[j - 2];
    return DP[i];
}

int Fibonacci(int n) {
    if (n < 0) {
        throw "n must be grater then or equal 0";
    } else if (n <= 1) {
        return 1;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    int n;
    DP = new int[2];
    sizeOfDP = 2;
    DP[0] = 1;
    DP[1] = 1;

    while (cin >> n) {
        cout << F(n) << "\n";
        // cout<<Fibonacci(n)<<"\n";
    }
    return 0;
}
