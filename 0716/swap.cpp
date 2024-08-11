// swap
#include <iostream>

using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void swap_(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    // init
    int n, m;
    cin >> n >> m;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    // swap process
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        swap(arr[x], arr[y]);
    }

    // output
    for (int i = 0; i < n; i++) cout << " " + (i == 0) << arr[i];
    cout << "\n";
    return 0;
}