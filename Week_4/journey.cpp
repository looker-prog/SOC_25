//
// Created by ANIL on 25-06-2025.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a ,b ,c;
        cin >> n >> a >> b >> c;

        const int step = n / (a + b + c);
        n -= step * (a + b + c);

        if (n == 0) {
            cout << step * 3 << endl;
        }
        else if (n <= a) {
            cout << step * 3 + 1 << endl;
        }
        else if (n <= a + b) {
            cout << step * 3 + 2 << endl;
        }
        else {
            cout << step * 3 + 3 << endl;
        }
    }
    return 0;
}