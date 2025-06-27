#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> s(2);
        cin >> s[0] >> s[1];

        int total = 2 * n;
        vector<bool> visited(total, false);
        queue<int> q;
        visited[0] = true;
        q.push(0);

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            int r = u / n;
            int c = u % n;

            static const int dr[4] = {0, 0, 1, -1};
            static const int dc[4] = {1, -1, 0, 0};

            for (int k = 0; k < 4; ++k) {
                int r2 = r + dr[k];
                int c2 = c + dc[k];
                if (r2 < 0 || r2 >= 2 || c2 < 0 || c2 >= n)
                    continue;

                char arrow = s[r2][c2];
                int c3 = (arrow == '>' ? c2 + 1 : c2 - 1);
                int v = r2 * n + c3;
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        cout << (visited[2 * n - 1] ? "YES" : "NO") << '\n';
    }
    return 0;
}