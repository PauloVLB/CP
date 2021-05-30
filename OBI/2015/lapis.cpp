#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 1005
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int n, d[] = {-1, 0, 1, 0}, ans[MAX][MAX];
char a[MAX][MAX];

void bfs(int i, int j) {
    queue<ii> q;
    q.push({i, j});

    while(!q.empty()) {
        ii x = q.front(); q.pop();

        for(int k = 0; k < 4; k++) {
            int b = x.fs + d[k];
            int c = x.sc + d[3-k];

            if(a[b][c] == '*') {
                //a[b][c] = '0';
                int u = ans[x.fs][x.sc];

                if(u+1 < ans[b][c]) { 
                    ans[b][c] = u+1;
                    q.push({b, c});
                }
            }
        }

    }
}

int main() {_
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if(a[i][j] == '*') ans[i][j] = 9;
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(a[i][j] == '0') {
                bfs(i, j);
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }
}