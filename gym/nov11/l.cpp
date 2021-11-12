#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int h, l;
vvi m, vis;
int qnt;
vector<ii> dir = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

bool fora(int x, int y) {
    return x < 0 || y < 0 || y >= l || x >= h;
}

void dfs(int i, int j) {
    vis[i][j] = 1;
    
    qnt++;

    for(auto d : dir) {
        int ni = i + d.fs;
        int nj = j + d.sc;

        if(!fora(ni, nj) && !vis[ni][nj] && m[ni][nj] == m[i][j]) {
            dfs(ni, nj);
        }
    }
}

int main() {_ 
    cin >> h >> l;

    m = vvi(h, vi(l));
    vis = vvi(h, vi(l, 0));

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < l; j++) {
            cin >> m[i][j];
        }
    }
    
    int ans = h*l;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < l; j++) {
            if(!vis[i][j]) {
                qnt = 0;
                dfs(i, j);
                ans = min(ans, qnt);
            }
        }
    }

    cout << ans << endl;
}