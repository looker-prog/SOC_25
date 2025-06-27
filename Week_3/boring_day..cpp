#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll l, n, r;
    cin >> n >> l >> r;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    ll index = 0, result = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        while (sum > r && index <= i) {
            sum -= v[index];
            index++;
        }
        if (sum >= l && sum <= r) {
            result++;
            sum = 0;
            index = i + 1;
        }
    }
    cout << result << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}