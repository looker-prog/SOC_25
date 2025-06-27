//
// Created by ANIL on 19-06-2025.
//
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, count = 0;
        cin >> n >> x;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        v.push_back(x);
        sort(v.begin(), v.end());
        int index = -1;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == x) {
                index = i;
                break;
            }
        }

        if (index != v.size() - 1 && index != 0) {
            count = v.size() - index - 1;
        } else if (index == 0) {
            count = v.size() - 1;
        } else {
            count = 0;
        }

        if (index != 0) {
            for (int i = index - 1; i >= 0; i--) {
                int min_req = (x + v[i] - 1) / v[i];
                if (index - i == min_req) {
                    count++;
                    for (int j = i; j < index; j++) {
                        v.erase(v.begin() + j);
                    }
                    index -= min_req;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}

