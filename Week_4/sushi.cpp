//
// Created by ANIL on 27-06-2025.
//
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> lengths;
    int count = 1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] == a[i]) {
            count++;
        }
        else {
            lengths.push_back(count);
            count = 1;
        }
    }

    lengths.push_back(count);

    int result = 0;

    for (int i = 0; i < lengths.size() - 1; i++) {
        result = max(result, 2 * min(lengths[i], lengths[i + 1]));
    }

    cout << result << endl;
    return 0;
}
