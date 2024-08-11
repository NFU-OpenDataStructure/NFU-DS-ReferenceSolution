// 字串讀取問題
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        if (str[0] == '0') break;
        cout << str[5] << "\n";
    }
    return 0;
}
