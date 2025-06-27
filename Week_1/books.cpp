
#include <iostream>
using namespace std;

int main() {
    int n, maxi = 0, sum = 0, start = 0;
    long long t;
    cin >> n >> t;
    int k = n - 1;
    int time[n];

    for (int i = 0; i < n; i++) {
        cin >> time[i];
    }

    for (int j = 0; j < n; j++) {
        sum += time[j];

        while (sum > t) {
            sum -= time[start];
            start++;
        }

        int current = j - start + 1;

        if (current > maxi) {
            maxi = current;
        }
    }

    cout << maxi;
}
