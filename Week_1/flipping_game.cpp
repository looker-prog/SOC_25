
#include <iostream>
using namespace std;

int main() {
    int n, original1 = 0;
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++) {
        cin >> num[i];
        if (num[i] == 1) {
            original1++;
        }
    }

    int max1 = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp[n];

            for (int k = 0; k < n; k++) {
                temp[k] = num[k];
            }

            for (int m = i; m <= j; m++) {
                temp[m] = 1 - temp[m];
            }

            int count1 = 0;

            for (int l = 0; l < n; l++ ) {
                if (temp[l] == 1) {
                    count1++;
                }
            }

            if (count1 > max1) {
                max1 = count1;
            }
        }
    }

    if (original1 == n && max1 == n) {
        cout << n - 1;
    } else {
        cout << max1;
    }
}
