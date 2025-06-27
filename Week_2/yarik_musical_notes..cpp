#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<long long, long long> counts;
        for (int i = 0; i < n; ++i) {
            long long val;
            cin >> val;
            counts[val]++;
        }

        long long ans = 0;

        for (auto const& [val, freq] : counts) {
            if (freq >= 2) {
                ans += freq * (freq - 1) / 2;
            }
        }

        if (counts.count(1) && counts.count(2)) {
            ans += counts[1] * counts[2];
        }

        cout << ans << endl;
    }
}