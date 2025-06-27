//
// Created by ANIL on 06-06-2025.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin >> n;
        long long int c = 0;
        long long int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long neg = 0;
        long long pos = 0;

        for (int i = 0; i < n; i++) {
            long long new_neg = neg + a[i];
            long long new_pos = max(pos + a[i], abs(neg + a[i]));

            neg = new_neg;
            pos = new_pos;
        }

        cout << pos << endl;
    }
}