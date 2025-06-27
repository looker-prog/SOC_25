//
// Created by ANIL on 20-06-2025.
//
#include <iostream>
#include <string>
using namespace std;
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 1; i < n; i++) {
            if (s[i] == '?' && s[i - 1] != '?') {
                s[i] = (s[i - 1] == 'B') ? 'R' : 'B';
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            if (s[i] == '?' && s[i + 1] != '?') {
                s[i] = (s[i + 1] == 'B') ? 'R' : 'B';
            }
        }

        if (s[0] == '?') {
            for (int i = 0; i < n; i++) {
                s[i] = (i % 2 == 0) ? 'B' : 'R';
            }
        }

        cout << s << endl;
    }
    return 0;
}
