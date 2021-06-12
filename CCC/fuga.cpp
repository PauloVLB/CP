#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 1005
#define MAXX 1000005
#define eb emplace_back
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>

using namespace std;

int m, n, x;
vvii adj(MAXX);
int vis[MAX][MAX], a[MAX][MAX];

void dfs(int i, int j) {
    vis[i][j] = -1;

    for(auto [x, y] : adj[a[i][j]]) {
        if(vis[x][y] != -1) {
            dfs(x, y);
        }
    }
}

int main() {_ 
    cin >> m >> n;

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
            adj[i*j].eb(i, j);
        }
    }

    dfs(1, 1);
    
    cout << (vis[m][n] == -1 ? "yes" : "no") << endl;
}   