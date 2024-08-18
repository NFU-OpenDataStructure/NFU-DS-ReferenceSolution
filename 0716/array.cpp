#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases;

    while (cases--) {
        int size;
        cin >> size;

        int* arr = new int[size];

        for (int i = size - 1; i >= 0; i--) cin >> arr[i];
        for (int i = 0; i < size; i++) cout << " " + (i == 0) << arr[i];

        cout << "\n";
    }
}