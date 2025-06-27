//
// Created by ANIL on 16-06-2025.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, coins = 0;
        cin >> n;
        char arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] == '*') {
                if (arr[i + 2] == '*') {
                    break;
                }
                if (arr[i + 2] == '@') {
                    coins += 1;
                }
                i++;
            }
            else {
                if (arr[i + 1] == '@') {
                    coins += 1;
                }
            }
        }
        cout << coins << endl;
    }
    return 0;
}