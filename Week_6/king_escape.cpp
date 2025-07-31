#include <iostream>
#include <queue>
using namespace std;

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n;
int ax, ay, bx, by, cx, cy;
bool visited[1005][1005];

bool isSafe(int x, int y) {
    if (x <= 0 || x > n || y <= 0 || y > n) return false;
    if (x == ax || y == ay || abs(x - ax) == abs(y - ay)) return false;
    return true;
}

bool bfs() {
    queue<pair<int, int>> q;
    q.push({bx, by});
    visited[bx][by] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x == cx && y == cy) return true;

        for (int i = 0; i < 8; ++i) {
            int nx = x + dx[i], ny = y + dy[i];
            if (isSafe(nx, ny) && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return false;
}

int main() {
    cin >> n;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    if (bfs()) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
