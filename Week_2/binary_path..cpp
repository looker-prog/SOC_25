#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string row1, row2;
        cin >> row1 >> row2;

        int j = 0;
        for (int i = 1; i < n; i++) {
            if (row1[i] <= row2[i - 1]) {
                j = i;
            } else {
                break;
            }
        }

        string path = row1.substr(0, j + 1) + row2.substr(j);
        long long ways = 1;

        for (int k = j; k > 0; --k) {
            if (row1[k] == row2[k - 1]) {
                ways++;
            } else {
                break;
            }
        }

        cout << path << endl << ways << endl;
    }
}
