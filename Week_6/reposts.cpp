#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

string to_lowercase(const string &s) {
    string res = s;
    for (char &c : res) {
        c = tolower(c);
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> depth;
    depth["polycarp"] = 1;

    for (int i = 0; i < n; ++i) {
        string name1, temp, name2;
        cin >> name1 >> temp >> name2;

        string lower1 = to_lowercase(name1);
        string lower2 = to_lowercase(name2);

        depth[lower1] = depth[lower2] + 1;
    }

    int max_chain = 0;
    for (auto &entry : depth) {
        max_chain = max(max_chain, entry.second);
    }

    cout << max_chain << endl;
    return 0;
}
