#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        vector<int> sequence(n);
        for (auto &i : sequence) cin >> i;
        priority_queue<int, vector<int>, greater<int>> que;
        for (auto i : sequence) que.push(i);
        int cast = 0;
        while (true) {
            int a = que.top();
            que.pop();
            if (que.empty()) break;
            int b = que.top();
            que.pop();
            cast += a + b;
            que.push(a + b);
        }
        cout << cast << "\n";
    }
}