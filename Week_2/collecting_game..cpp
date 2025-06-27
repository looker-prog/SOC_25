#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<long long, int>> value_index(n);
        for (int i = 0; i < n; i++) {
            cin >> value_index[i].first;
            value_index[i].second = i;
        }

        sort(value_index.begin(), value_index.end());

        vector<long long> sums(n + 1, 0);
        for (int i = 0; i < n; i++) {
            sums[i + 1] = sums[i] + value_index[i].first;
        }

        vector<int> maxis(n);
        if (n > 0) {
            vector<int> sorted_ans(n);
            sorted_ans[n - 1] = n - 1;

            for (int i = n - 2; i >= 0; i--) {
                if (sums[i + 1] >= value_index[i + 1].first) {
                    sorted_ans[i] = sorted_ans[i + 1];
                } else {
                    sorted_ans[i] = i;
                }
            }

            for (int i = 0; i < n; i++) {
                maxis[value_index[i].second] = sorted_ans[i];
            }
        }

        for (int i = 0; i < n; i++) {
            cout << maxis[i] << " ";
        }
        cout << '\n';
    }
}
