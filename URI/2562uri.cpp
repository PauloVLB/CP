#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int n, m, u, v, s;
vvi adj;
vi vis;

int bfs(int s) {
    queue<int> q;

    q.push(s);
    vis[s] = 1;

    int ans = 1;

    while(!q.empty()) {
        int u = q.front(); q.pop();

        for(int v : adj[u]) {
            if(!vis[v]) {
                vis[v] = 1;
                ans++;
                q.push(v);
            }
        }
    }

    return ans;
}

int main() {_
    while(cin >> n >> m) {
        adj = vvi(n+1);
        vis = vi(n+1, 0);
        for(int i = 0; i < m; i++) {
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        cin >> s;

        cout << bfs(s) << endl;
    }
}