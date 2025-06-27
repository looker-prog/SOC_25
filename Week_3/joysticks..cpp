//
// Created by ANIL on 20-06-2025.
//
#include <iostream>
using namespace std;

int main() {
    int a1, a2, time = 0;
    cin >> a1 >> a2;

    while (a1 > 0 && a2 > 0) {
        if (a1 >= a2) {
            a1 -= 2;
            a2 += 1;
        }
        else {
            a2 -= 2;
            a1 += 1;
        }
        if (a1 >= 0 && a2 >= 0) {
            time++;
        }
    }
    cout << time << endl;
}
