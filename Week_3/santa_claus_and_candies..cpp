//
// Created by ANIL on 16-06-2025.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, max = 0, sum = 0, i = 1;
    vector<int> v;
    cin >> n;

    while (sum + i <= n) {
        v.push_back(i);
        sum += i;
        i++;
        max++;
    }

    if (sum < n) {
        v[v.size() - 1] += n - sum;
    }

    cout << max << endl;
    for (const int j : v) {
        cout << j << endl;
    }
}
