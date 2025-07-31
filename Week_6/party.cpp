#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> tree;
vector<int> depth;

int dfs(int node) {
    int maxDepth = 1;
    for (int child : tree[node]) {
        maxDepth = max(maxDepth, 1 + dfs(child));
    }
    return maxDepth;
}

int main() {
    int n;
    cin >> n;

    tree.resize(n + 1);
    vector<int> manager(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> manager[i];
        if (manager[i] != -1) {
            tree[manager[i]].push_back(i);
        }
    }

    int result = 0;
    for (int i = 1; i <= n; i++) {
        if (manager[i] == -1) {
            result = max(result, dfs(i));
        }
    }

    cout << result << endl;
    return 0;
}
