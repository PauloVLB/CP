#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define INF 1e9+7

using namespace std;

int n, m, u, v, c, e, r;
vvi adj;
vi dist;

void bfs(int s) {
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while(!q.empty()) {
        int u = q.front(); q.pop();

        for(int v : adj[u]) {
            if(dist[v] == INF && v != e) {
                q.push(v);
                dist[v] = dist[u] + 1;
            }
        }
    }
}   

int main() {_ 
    while(cin >> n >> m) {
        adj = vvi(n+1);
        dist = vi(n+1, INF);

        for(int i = 0; i < m; i++) {
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        cin >> c >> r >> e;

        bfs(c);

        cout << dist[r] << endl;
    }
}