#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define MAX 10005
#define INF 1e9+7

using namespace std;

int n, m, p, d, x;
vvi adj;
vi dist, a, c;

void bfs(int s) {
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while(!q.empty()) {
        int u = q.front(); q.pop();

        for(int v : adj[u]) {
            if(dist[v] == INF) {
                dist[v] = dist[u] + 1;
                a[dist[v]]++;
                d = max(d, dist[v]);
                q.push(v);
            }
        }
    }
}

int main() {_ 
    cin >> n >> m;

    adj = vvi(n+1);
    dist = vi(n+1, INF);
    a = vi(n+1);
    c = vi(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> p;
        adj[p].eb(i); 
    }

    bfs(0);

    for(int i = 1; i <= m; i++) {
        cin >> x;
        c[dist[x]]++;
    }

    for(int i = 1; i <= d; i++) {
        cout << fixed << setprecision(2) << (c[i] * 100.0)/a[i] << " ";
    }
    cout << endl;
    
}