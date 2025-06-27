//
// Created by ANIL on 15-06-2025.
//
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector <pair<int, int>> ele_index(n);

        for (int i = 0; i < n; i++) {
            ele_index[i].first = arr[i];
            ele_index[i].second = i;
        }

        sort(ele_index.begin(), ele_index.end());
        const int a = ele_index[0].second;
        const int b = ele_index[n - 1].second;

        if (n % 2 == 0) {
            if (a == (n - 1) - b) {
                int result = 0;
                if (a < b) {
                    result = min(2 *(a + 1), b + 1);
                    cout << result << endl;
                }
                else {
                    result = min(2 * (b + 1), a + 1);
                    cout << result << endl;
                }
            }
            else {
                if (abs(a - b) >= n / 2) {
                    if (a < b) {
                        const int result = n + a + 1 - b;
                        cout << result << endl;
                    }
                    else {
                        const int result = n + b + 1 - a;
                        cout << result << endl;
                    }
                }
                else {
                    const int result = min({max(a + 1, b + 1), min(n + a + 1 - b, n + b + 1 - a), max(n - a, n - b)});
                    cout << result << endl;
                }
            }
        }
        else {
            if (a < b) {
                const int result = min({(max(a, b) + 1), (max(n - a, n - b)), n + a + 1 - b});
                cout << result << endl;
            }
            else {
                const int result = min({(max(a, b) + 1), (max(n - a, n - b)), n + b + 1 - a});
                cout << result << endl;
            }
        }
    }
}