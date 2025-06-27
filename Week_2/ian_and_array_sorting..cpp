#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n,sum = 0;
        cin >> n;
        long long arr[n];

        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n % 2 == 0) {
            for (long long j = 0; j < n; j+=2) {
                sum += arr[j + 1] - arr[j];
            }
            if (sum >= 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "YES" << endl;
        }
    }
}