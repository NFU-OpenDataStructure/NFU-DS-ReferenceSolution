#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    string s;

    getline(cin, s);

    while (cases--) {
        stack<char> parentheses;
        getline(cin, s);
        bool flag = true;

        for (auto i : s) {
            if (i == '(' || i == '[' || i == '{')
                parentheses.push(i);
            else if (i == ')') {
                if (!parentheses.empty() && parentheses.top() == '(')
                    parentheses.pop();
                else {
                    flag = false;
                    break;
                }
            } else if (i == ']') {
                if (!parentheses.empty() && parentheses.top() == '[')
                    parentheses.pop();
                else {
                    flag = false;
                    break;
                }
            } else if (i == '}') {
                if (!parentheses.empty() && parentheses.top() == '{')
                    parentheses.pop();
                else {
                    flag = false;
                    break;
                }
            }
        }

        if (!parentheses.empty()) flag = false;
        cout << ((flag) ? "Yes\n" : "No\n");
    }
}
