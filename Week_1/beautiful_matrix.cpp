#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int value = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                value = abs(i - 2) + abs(j - 2);
            }
        }
    }

    cout << value;
}
