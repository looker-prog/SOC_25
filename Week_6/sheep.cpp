#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    vector<string> grid(R);
    for (int i = 0; i < R; i++) {
        cin >> grid[i];
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] == 'S') {
                for (int dir = 0; dir < 4; dir++) {
                    int ni = i + dx[dir];
                    int nj = j + dy[dir];

                    if (ni >= 0 && ni < R && nj >= 0 && nj < C) {
                        if (grid[ni][nj] == 'W') {
                            cout << "No" << endl;
                            return 0;
                        }
                        if (grid[ni][nj] == '.') {
                            grid[ni][nj] = 'D';
                        }
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;
    for (int i = 0; i < R; i++) {
        cout << grid[i] << endl;
    }

    return 0;
}
