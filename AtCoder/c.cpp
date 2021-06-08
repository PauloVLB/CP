#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int n, m, u, v, ans;
vvi adj;
vi vis;

int dfs(int u) {
    vis[u] = 1;

    int a = 1;

    for(int v : adj[u]) {
        if(vis[v] == -1) {
            a += dfs(v);
        }
    }

    return a;
}

int main() {_
    cin >> n >> m;
    
    adj = vvi(n+1);
    vis = vi(n+1, -1);   

    for(int i = 0; i < m; i++) {
        cin >> u >> v;
        adj[u].eb(v);
    }

    for(int i = 1; i <= n; i++) {
        ans += dfs(i);
        vis = vi(n+1, -1);       
    }

    cout << ans << endl;
}