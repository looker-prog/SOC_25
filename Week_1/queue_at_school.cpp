
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string order;
    cin >> order;

    while (t > 0) {
        for (int i = 0; i < n - 1; i++) {
            if (order[i] == 'B' && order[i + 1] == 'G') {
                swap(order[i], order[i + 1]);
                i++;
            }
        }
        t = t - 1;
    }

    cout << order;
}
