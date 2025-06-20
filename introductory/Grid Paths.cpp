#include <bits/stdc++.h>
using namespace std;

const int N = 7, LEN = 48;
string path;
bool visited[N][N];
int dx[4] = {1, -1, 0, 0};  // D, U, L, R
int dy[4] = {0, 0, -1, 1};  // D, U, L, R
char moves[4] = {'D', 'U', 'L', 'R'};
int totalpaths = 0;

void solve(int x, int y, int step) {
    // Base Case: If we reach bottom-left corner at the right step
    if (x == N - 1 && y == 0) {
        if (step == LEN) totalpaths++;
        return;
    }

    // Pruning: If we reach step 48 before (N-1,0), return early
    if (step >= LEN) return;

    // Pruning: If surrounded in a dead-end, stop
    if ((x > 0 && x < N - 1 && !visited[x - 1][y] && !visited[x + 1][y]) &&
        (y > 0 && y < N - 1 && !visited[x][y - 1] && !visited[x][y + 1])) return;

    visited[x][y] = true;
    char c = path[step];

    for (int i = 0; i < 4; i++) {
        if (c != '?' && c != moves[i]) continue;  // Follow forced direction
        
        int nx = x + dx[i], ny = y + dy[i];

        if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) {
            solve(nx, ny, step + 1);
        }
    }

    visited[x][y] = false;  // Backtrack
}

int main() {
    cin >> path;
    memset(visited, false, sizeof(visited));  // Initialize visited grid
    solve(0, 0, 0);
    cout << totalpaths << endl;
}
