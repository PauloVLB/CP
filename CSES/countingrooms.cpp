#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 1005
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int n, m, u, v, s, ans, d[] = {-1, 0, 1, 0};
char a[MAX][MAX];

int bfs(int i, int j) {
    queue<ii> q;

    q.push({i, j});
    a[i][j] = '#';

    while(!q.empty()) {
        ii x = q.front(); q.pop();
        
        for(int k = 0; k < 4; k++) {
            int b = x.fs - d[k];
            int c = x.sc - d[3-k];

            if(a[b][c] == '.') {
                a[b][c] = '#';
                q.push({b, c});
            }
        }
    }

    return 1;
}

int main() {_
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(a[i][j] == '.') {
                ans += bfs(i, j);
            }
        }
    }

    cout << ans << endl;
}