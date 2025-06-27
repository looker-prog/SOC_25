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
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> v_even, v_odd;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                v_even.push_back(a[i]);
            }
            else {
                v_odd.push_back(a[i]);
            }
        }

        long long int s1 = 0, s2 = 0, turns = n;

        sort(v_even.begin(), v_even.end());
        sort(v_odd.begin(), v_odd.end());

        while (!v_even.empty() && !v_odd.empty()) {
            if ((n - turns) % 2 == 0) {
                if (v_even[v_even.size() - 1] >= v_odd[v_odd.size() - 1]) {
                    s1 +=v_even[v_even.size() - 1];
                    v_even.pop_back();
                }
                else {
                    v_odd.pop_back();
                }
            }
            else {
                if (v_odd[v_odd.size() - 1] >= v_even[v_even.size() - 1]) {
                    s2 += v_odd[v_odd.size() - 1];
                    v_odd.pop_back();
                }
                else {
                    v_even.pop_back();
                }
            }
            turns--;
        }

        while (v_even.empty() && turns > 0) {
            if ((n - turns) % 2 == 0) {
                v_odd.pop_back();
            }
            else {
                s2 += v_odd[v_odd.size() - 1];
                v_odd.pop_back();
            }
            turns--;
        }

        while (v_odd.empty() && turns > 0) {
            if ((n - turns) % 2 == 0) {
                s1 += v_even[v_even.size() - 1];
                v_even.pop_back();
            }
            else {
                v_even.pop_back();
            }
            turns--;
        }

        if (s1 > s2) {
            cout <<"Alice" << endl;
        }
        else if (s2 > s1) {
            cout <<"Bob" << endl;
        }
        else {
            cout <<"Tie" << endl;
        }
    }
}