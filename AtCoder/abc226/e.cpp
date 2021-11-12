#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 998244353
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int n, m;
vvi adj;
vi vis;
int vert, ar;

void dfs(int u) {
    vis[u] = 1;

    vert++;
    ar += (int) adj[u].size();

    for(int v : adj[u]) {
        if(!vis[v]) {
            dfs(v);
        }
    }
}

int main() {_ 
    cin >> n >> m;

    adj = vvi(n+1);
    vis = vi(n+1, 0);

    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    int ans = 1;

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            vert = 0;
            ar = 0;
            dfs(i);
            if(vert == ar/2) {
                ans = (ans*2)%MOD;
            } else {
                ans = 0;
            }
        }
    }

    cout << ans << endl;
}