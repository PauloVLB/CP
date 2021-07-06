#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define MAX 1005

using namespace std;

int n, ax, ay, bx, by, cx, cy;
int m[MAX][MAX];
int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};


bool saiu(int x, int y) {
    return (x <= 0 || x > n || y > n || y <= 0);
}
bool rainha(int x, int y) {
    return (x == ax || y == ay);
}
void dfs(int x, int y) {
    if(saiu(x, y) || rainha(x, y) || m[x][y]) return;

    m[x][y] = 1;

    for(int k = 0; k < 8; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];

        dfs(nx, ny);
    }
}

int main() {_
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;

    dfs(cx, cy);

    cout << (m[bx][by] ? "YES" : "NO") << endl;
}
