#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAXN 100005
#define vi vector<int> 
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int u, v, n, m, ans;
int a[MAXN];
vi vis;
vvi adj;

void dfs(int u, int g, int t) {
    vis[u] = 1;

    if(!t) g = 0;
    if(adj[u].size() == 1 && u != 1) ans++;

    for(int v : adj[u]) {
        if(g + a[v] <= m && !vis[v]) {
            dfs(v, g+a[v], a[v]);
        }
    }
}

int main () {_ 
    cin >> n >> m;
    adj = vvi(n+1);
    vis = vi(n+1, 0);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i <= n-1; i++) {
        cin >> u >> v;
        adj[u].eb(v);       
        adj[v].eb(u);
    }

    dfs(1, a[1], a[1]);

    cout << ans << endl;
}