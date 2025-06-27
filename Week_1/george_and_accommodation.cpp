
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,a,b,vacant = 0;
    cin >> n;

    vector<int> p(n);
    vector<int> q(n);

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        p[i] = a;
        q[i] = b;
    }

    for (int j = 0; j < n; j++) {
        if (q[j] - p[j] >= 2) {
            vacant++;
        }
    }

    cout << vacant;
}
