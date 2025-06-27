//
// Created by ANIL on 26-06-2025.
//
#include <iostream>
#include <cmath>

using namespace std;
using ll = long long int;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll x;
        cin >> x;

        ll low = 1, high = 2 * x, ans = 0;

        while (low <= high) {
            ll mid = (low + high) / 2;
            ll mid_sq = mid -(ll)sqrtl(mid);

            if (mid_sq >= x) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }
}