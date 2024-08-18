#include <iostream>

using namespace std;

string reverse(string str, int index) {
    if (str.length() / 2 <= index) return str;
    swap(str[index], str[str.length() - index - 1]);
    return reverse(str, index + 1);
}

string reverse(string str) { return reverse(str, 0); }

int main() {
    string str;
    while (cin >> str) {
        cout << reverse(str) << "\n";
    }
    return 0;
}