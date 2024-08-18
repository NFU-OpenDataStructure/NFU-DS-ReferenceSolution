#include <iostream>

using namespace std;

template <class T>
void swap(T* a, T* b) {
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

template <class T>
void res(T* list, int k, int m) {
    if (k == m) {
        for (int i = 0; i <= m; i++) cout << list[i];
        cout << "\n";
    } else {
        for (int i = k; i <= m; i++) {
            swap(list[i], list[k]);
            res(list, k + 1, m);
            swap(list[i], list[k]);
        }
    }
}

int main() {
    int size;
    char type;
    cin >> type >> size;
    if (type == 'c') {
        char list[size] = {'a'};
        for (int i = 1; i < size; i++) list[i] = list[i - 1] + 1;
        res(list, 0, size - 1);
    } else if (type == 'i') {
        int list[size] = {0};
        for (int i = 1; i < size; i++) list[i] = list[i - 1] + 1;
        res(list, 0, size - 1);
    } else if (type == 'd') {
        double list[size] = {0};
        for (int i = 1; i < size; i++) list[i] = list[i - 1] + 1.0;
        res(list, 0, size - 1);
    }
    return 0;
}