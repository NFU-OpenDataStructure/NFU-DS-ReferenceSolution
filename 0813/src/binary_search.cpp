#include <algorithm>
#include <iostream>

using namespace std;

void binary_search(int *arr, int arr_size) {
    int target;
    cin >> target;

    int left = 0;
    int right = arr_size;
    int middle;

    while (left < right) {
        middle = (left + right) / 2;

        if (target > arr[middle]) {
            left = middle + 1;
        } else if (arr[middle] < target) {
            right = middle - 1;
        } else {
            cout << middle << "\n";
            break;
        }
    }

    if (arr[middle] != target) cout << "Not Found\n";
}

int main() {
    int n;
    int arr_size;

    cin >> n;
    while (n--) {
        cin >> arr_size;
        int arr[arr_size];
        for (int i = 0; i < arr_size; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + arr_size);
        binary_search(arr, arr_size);
    }
}