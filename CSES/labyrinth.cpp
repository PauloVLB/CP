#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 1005
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int n, m, d[] = {-1, 0, 1, 0};
ii s, e;
char a[MAX][MAX], o[] = {'U', 'R', 'D', 'L'};
int p[MAX][MAX];
queue<ii> q;

bool bfs(int i, int j) {
    queue<ii> q;

    q.push({i, j});

    while(!q.empty()) {
        ii u = q.front(); q.pop();

        if(a[u.fs][u.sc] == 'B') return 1;

        for(int k = 0; k < 4; k++) {
            int b = u.fs + d[k];
            int c = u.sc + d[3-k];

            if((a[b][c] == '.' || a[b][c] == 'B')) {
                if(a[b][c] != 'B') a[b][c] = '#';
                p[b][c] = k;
                q.push({b, c});
            }
        }
    }

    return 0;
}

int main() {_ 
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if(a[i][j] == 'A') s = {i, j};
            if(a[i][j] == 'B') e = {i, j};
        }
    }

    if(bfs(s.fs, s.sc)) {
        cout << "YES" << endl;
        string ans = "";
        while(e != s) {
            int x = p[e.fs][e.sc];
            ans += o[x];
            e = {e.fs - d[x], e.sc - d[3-x]};
        }
        cout << ans.size() << endl;
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    } else {
        cout << "NO" << endl;
    }
    
}
