#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define INF 1e9+7
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define pb push_back
#define MAX 205

using namespace std;

int n, m, k, x, y, a, b, ans;
int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, 1, 1, 1, 0, -1, -1 , -1};
vvi t(MAX, vi(MAX, -1));

void dfs(int i, int j) {
    t[i][j] = 1;

    ans++;

    for(int k = 0; k < 8; k++) {
        int ii = i + dx[k];
        int jj = j + dy[k];

        if(t[ii][jj] == 0) {
            dfs(ii, jj);
        }
    }
}

int main() {_ 
    cin >> n >> m >> x >> y >> k;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            t[i][j] = 0;
        }
    }

    for(int i = 0; i < k; i++) {
        cin >> a >> b;
        t[a][b] = 1;
    }

    dfs(x, y);

    cout << ans << endl;
}