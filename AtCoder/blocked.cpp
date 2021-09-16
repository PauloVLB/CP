#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 2005
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define fs first
#define sc second
#define INF 0x3f3f3f3f
 
using namespace std;
 
int n, m;
int u, v;
vvi adj;
vi dist;
set<pair<int, int>> used;
 
void bfs(int s, int up, int vp) {
    queue<int> q;
 
    q.push(s);
    dist[s] = 0;
 
    while(!q.empty()) {
        int u = q.front(); q.pop();
    
        for(int v : adj[u]) {
            if(u == up && v == vp) continue;
            if(dist[v] == INF) {
                used.insert({u, v});
                q.push(v);
                dist[v] = dist[u] + 1;
            }
        }
    }
}
 
int main() {_ 
    cin >> n >> m;
    adj = vvi(n+1);
    
    vector<pair<int, int>> edgs;
 
    for(int i = 0; i < m; i++) {
        cin >> u >> v;
        edgs.pb({u, v});
        adj[u].pb(v);
    }

    dist = vi(n+1, INF);
    bfs(1, -1, -1);
    int ansf = dist[n];
 
    for(auto [u, v] : edgs) {
        if(!used.count({u, v})) {
            cout << (ansf == INF ? -1 : ansf) << endl;
        } else {
            dist = vi(n+1, INF);       
            bfs(1, u, v);
            cout << (dist[n] == INF ? -1 : dist[n]) << endl;
        }
    }
}