//
// Created by ANIL on 16-06-2025.
//
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, count = 0;
        cin >> n;
        int p[n];

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        for (int i = 0; i < n; i++) {
            if (i < n - 1) {
                if (p[i] > p[i + 1]) {
                    count++;
                    i++;
                }
            }
        }

        cout << count << endl;
    }
}