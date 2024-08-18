#include <iostream>
#include <map>
#include <stack>
#include <string>

using namespace std;

int main() {
    int size;
    cin >> size;
    map<string, pair<int, int>> mp;
    for (int i = 0; i < size; i++) {
        string c;
        int row, column;
        cin >> c >> row >> column;
        mp[c] = {row, column};
    }

    string s;
    stack<string> martixs;

    while (cin >> s) {
        int ans = 0;
        bool flag = true;
        for (auto i : s) {
            if (i == '(') continue;
            if (i == ')') {
                string b = martixs.top();
                martixs.pop();
                string a = martixs.top();  // stack, so reverse.
                martixs.pop();
                if (mp[a].second == mp[b].first) {
                    ans += (mp[a].first * mp[a].second * mp[b].second);
                    mp[a + b] = {mp[a].first, mp[b].second};
                    martixs.push(a + b);
                } else {
                    flag = false;
                    break;
                }
            } else {
                string str(1, i);
                martixs.push(str);
            }
        }
        if (flag)
            cout << ans << "\n";
        else
            cout << "error\n";
    }
}
