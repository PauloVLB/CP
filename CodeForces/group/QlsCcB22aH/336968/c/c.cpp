#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second
#define vii vector<ii>
#define vvii vector<vii>
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define INF (1ll << 60)
#define int long long

using namespace std;

int n, m, u, v, w;
vvii adj;
vi dist;
vi path;

void dj(int u) {
    priority_queue<ii, vii, greater<ii>> pq;

    pq.emplace(0, u);
    dist[u] = 0;

    while(!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();

        if(d > dist[u]) continue;

        for(auto [v, w] : adj[u]) {
            if(dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                path[v] = u;
                pq.emplace(dist[v], v);
            }
        }
    }
}

void rec(int u){
    if (u == 1){
        cout << u;
    }
    else {
        rec(path[u]);
        cout << " " << u;
    }
}

int32_t main() {_
    cin >> n >> m;
    adj = vvii(n+1);
    dist = vi(n+1, INF);
    path = vi(n+1);

    for(int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        adj[u].eb(v, w);
        adj[v].eb(u, w);
    }

    dj(1);

    if(dist[n] == INF) {
        cout << -1 << endl;
    } else {
        rec(n);
        cout << endl;
    }
    return 0;
}
