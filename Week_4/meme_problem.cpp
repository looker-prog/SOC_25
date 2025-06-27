//
// Created by ANIL on 26-06-2025.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int d;
        cin >> d;

        if (0 < d && d < 4) {
            cout << "N" << endl;
        }
        else {
            long double a, b;
            a = (long double)((d + (long double)(sqrt(pow(d, 2) - (4 * d)))) / 2);
            b = (long double)(d) - a;

            cout << "Y" << " ";
            cout << fixed << setprecision(9) << a << " " << b << endl;
        }
    }
}