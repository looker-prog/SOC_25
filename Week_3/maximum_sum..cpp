#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

constexpr int MOD = 1e9 + 7;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

long long max_subarray_sum(const vector<long long> &a) {
    long long current_sum = a[0];
    long long max_sum = a[0];
    for (size_t i = 1; i < a.size(); ++i) {
        current_sum = max(a[i], current_sum + a[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum = (sum + a[i]) % MOD;
        }

        if (sum < 0) sum = (sum + MOD) % MOD;

        long long best = max(0LL, max_subarray_sum(a));
        long long power_term = (mod_pow(2, k, MOD) - 1 + MOD) % MOD;
        long long added = (best % MOD * power_term % MOD) % MOD;
        long long result = (sum + added) % MOD;
        if (result < 0) result += MOD;

        cout << result << '\n';
    }
}
