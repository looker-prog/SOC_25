#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> people(n);
        vector<int> b_coords(n);

        for (int i = 0; i < n; ++i) {
            cin >> people[i].first >> people[i].second;
            b_coords[i] = people[i].second;
        }

        sort(people.begin(), people.end());

        sort(b_coords.begin(), b_coords.end());
        b_coords.erase(unique(b_coords.begin(), b_coords.end()), b_coords.end());

        int m = b_coords.size();
        vector<int> bit(m + 1, 0);
        long long total_greetings = 0;

        for (int i = 0; i < n; ++i) {
            int b_val = people[i].second;
            int b_rank = lower_bound(b_coords.begin(), b_coords.end(), b_val) - b_coords.begin() + 1;

            int processed_count = 0;
            for (int idx = m; idx > 0; idx -= idx & -idx) {
                processed_count += bit[idx];
            }

            int less_equal_count = 0;
            for (int idx = b_rank; idx > 0; idx -= idx & -idx) {
                less_equal_count += bit[idx];
            }

            total_greetings += (processed_count - less_equal_count);

            for (int idx = b_rank; idx <= m; idx += idx & -idx) {
                bit[idx] += 1;
            }
        }
        cout << total_greetings << endl;
    }
}