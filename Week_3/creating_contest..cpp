//
// Created by ANIL on 20-06-2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_len = 1;
    int left_start = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > 2 * a[i - 1]) {
            left_start = i;
        }
        max_len = max(max_len, i - left_start + 1);
    }
    cout << max_len << endl;
}