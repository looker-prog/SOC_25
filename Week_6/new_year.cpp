#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
    }

    int position = 1;
    while (position < t) {
        position += a[position];
    }

    if (position == t) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
