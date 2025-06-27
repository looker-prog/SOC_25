#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> u(n);
        for (long long i = 0; i < n; i++) {
            cin >> u[i];
        }

        map<long long, long long> first_time, last_time;

        for (long long i = 0; i < n; i++) {
            long long station = u[i];
            if (first_time.find(station) == first_time.end()) {
                first_time[station] = i;
            }
            last_time[station] = i;
        }

        while (k--) {
            long long q1, q2;
            cin >> q1 >> q2;

            if (first_time.count(q1) && last_time.count(q2) && first_time[q1] <= last_time[q2]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}