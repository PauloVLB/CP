#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

int n, m;
int u, v, ans; 
vvi adj;
vi vis;

void dfs(int s) {
    vis[s] = 1;

    for(int v : adj[s]) {
        if(!vis[v]) {
            dfs(v);
        }
    }    
}

int main() {_
    cin >> n >> m;
    adj = vvi(n+1);
    vis = vi(n+1, 0);
    
    for(int i = 1; i <= m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            dfs(i);
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
