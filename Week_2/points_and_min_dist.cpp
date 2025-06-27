
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int dist(pair<int, int> p1, pair<int, int> p2) {
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> num(2 * n);

        for (int i = 0; i < 2 * n; i++) {
            cin >> num[i];
        }

        sort(num.begin(), num.end());

        vector<pair<int, int>> points;

        for (int i = 0; i < n; i++) {
            points.push_back({num[i], num[i + n]});
        }

        int len = 0;

        for (int i = 1; i < n; i++) {
            len += dist(points[i - 1], points[i]);
        }

        cout << len << endl;

        for (auto p : points) {
            cout << p.first << ' ' << p.second << endl;
        }
    }
}