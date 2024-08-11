#include <iostream>

using namespace std;

void copy(int *begin, int *end, int *result) {
    int index = 0;
    for (int *p = begin; p != end; p++) {
        *(result + index++) = *p;
    }
}

void copy_(int *arr, int size, int *result) {
    for (int i = 0; i < size; i++) {
        result[i] = arr[i];
    }
}

int main() {
    // init
    int *arr, *copied, size;
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // copy
    copied = new int[size];
    copy_(arr, size, copied);
    // copy(arr, arr+size, copied);

    // output
    for (int i = 0; i < size; i++) {
        cout << " " + (i == 0) << copied[i];
    }
    cout << "\n";
    return 0;
}