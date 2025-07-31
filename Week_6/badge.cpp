#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
    }

    for (int a = 1; a <= n; ++a) {
        vector<bool> visited(n + 1, false);
        int current = a;

        while (!visited[current]) {
            visited[current] = true;
            current = p[current];
        }

        cout << current << " ";
    }

    cout << endl;
    return 0;
}
