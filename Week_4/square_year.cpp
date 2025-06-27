//
// Created by ANIL on 25-06-2025.
//
#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int m) {
    int root = sqrt(m);
    return (root * root == m);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (isPerfectSquare(n)) {
            int sum = sqrt(n);
            cout << 0 << " " << sum << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}
