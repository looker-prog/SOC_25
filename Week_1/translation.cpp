
#include <iostream>
#include <string>
using namespace std;

int main() {
    int num = 0;
    string s, t;
    cin >> s;
    cin >> t;

    if (s.length() == t.length()) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == t[t.length() - i - 1]) {
                num++;
            }
        }
    }

    if (num == s.length()) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
