
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, rem_stones = 0;
    string order;
    cin >> n;
    cin >> order;

    for (int i = 1; i < n; i++) {
        if (order[i] == order[i - 1]) {
            rem_stones++;
        }
    }

    cout << rem_stones;
}
