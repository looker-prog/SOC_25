#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string enemy, gregor;
        cin >> enemy >> gregor;

        int count = 0;
        for (int i = 0; i < n; ++i) {
            if (gregor[i] == '1') {
                if (enemy[i] == '0') {
                    count++;
                    enemy[i] = 'X';
                }
                else if (i > 0 && enemy[i - 1] == '1') {
                    count++;
                    enemy[i - 1] = 'X';
                }
                else if (i < n - 1 && enemy[i + 1] == '1') {
                    count++;
                    enemy[i + 1] = 'X';
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
