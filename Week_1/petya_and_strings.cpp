
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    int result = 0;
    getline(cin, s1);
    getline(cin, s2);

    for (int i = 0; i < s1.length(); i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        if (c1 > c2) {
            result = 1;
            break;
        }
        else if (c1 < c2){
            result = -1;
            break;
        }
    }
    cout << result;
}
