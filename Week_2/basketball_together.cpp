
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    sort(P.begin(), P.end(), greater<int>());

    int left = 0, right = N - 1;
    int wins = 0;

    while (left <= right) {
        int power = P[left];
        int min_size = D / power + 1;

        if (right - left + 1 >= min_size) {
            wins++;
            left++;
            right -= min_size - 1;
        }
        else {
            break;
        }
    }

    cout << wins;
}