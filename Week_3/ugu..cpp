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

        int op = 0;
        bool flipped = false;

        for (int i = 0; i < n - 1; i++) {
            char curr, next;

            if (!flipped) {
                curr = s[i];
                next = s[i + 1];
            } else {
                if (s[i] == '1') curr = '0';
                else curr = '1';

                if (s[i + 1] == '1') next = '0';
                else next = '1';
            }

            if (curr == '1' && next == '0') {
                op++;
                flipped = !flipped;
            }
        }

        cout << op << endl;
    }

    return 0;
}
