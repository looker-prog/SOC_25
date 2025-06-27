//
// Created by ANIL on 18-06-2025.
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
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int max_val1 = *max_element(v.begin(), v.end());
        const auto it = max_element(v.begin(), v.end());
        const int index = distance(v.begin(), it);
        int max_val2 = 1;

        if (index % 2 == 0) {
            for (int i = 0; i < n; i += 2) {
                max_val1 += 1;
            }
            for (int i = 1; i < n; i += 2) {
                if (v[i] > max_val2) {
                    max_val2 = v[i];
                }
            }
            for (int i = 1; i < n; i += 2) {
                max_val2 += 1;
            }
        }
        else {
            for (int i = 1; i < n; i += 2) {
                max_val1 += 1;
            }
            for (int i = 0; i < n; i += 2) {
                if (v[i] > max_val2) {
                    max_val2 = v[i];
                }
            }
            for (int i = 0; i < n; i += 2) {
                max_val2 += 1;
            }
        }

        cout << max(max_val1, max_val2) << endl;
    }
}