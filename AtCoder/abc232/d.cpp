#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 1005
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int n, m, u, v, s, ans;
vector<pair<int, int>> d = {{0, 1}, {1, 0}};
char a[MAX][MAX];

int fora(int x, int y) {
    return (x <= 0 || y <= 0 || x > n || y > m);
}

void dfs(int i, int j) {
    a[i][j] = '#';
    int qnt = 0;
    for(auto [xx, yy] : d) {
        int ni = i + xx;
        int nj = j + yy;
        if(a[ni][nj] == '.') {
            qnt++;
            dfs(ni, nj);
        }
    }

    ans = max(ans, qnt);
}

int main() {_
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    dfs(1, 1);

    cout << ans << endl;
}