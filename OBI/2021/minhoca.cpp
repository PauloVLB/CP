#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int n;
vvi adj;
vi dist;
int mais_longe;

int bfs(int s) {
    queue<int> fila;

    fila.push(s);
    dist[s] = 1;
    int mais_longe = -1;
    int maior_dist = -1;

    while(!fila.empty()) {
        int u = fila.front(); fila.pop();

        if(dist[u] > maior_dist) {
            maior_dist = dist[u];
            mais_longe = u;
        }

        for(int v : adj[u]) {
            if(dist[v] == INF) {
                dist[v] = dist[u] + 1;
                fila.push(v);
            }
        }
    }

    return mais_longe;
}

int bfs_conta(int s, int d) {
    queue<int> fila;

    fila.push(s);
    dist[s] = 1;

    int ans = 0;

    while(!fila.empty()) {
        int u = fila.front(); fila.pop();
        if(dist[u] == d) {
            ans++;
        }
        for(int v : adj[u]) {
            if(dist[v] == INF) {
                dist[v] = dist[u] + 1;
                fila.push(v);
            }
        }
    }

    return ans;
}

int main() {_ 
    cin >> n;

    adj = vvi(n+1);
    dist = vi(n+1, INF);

    for(int i = 0; i < n-1; i++) {
        int u, v; cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    int longe = bfs(1);

    dist = vi(n+1, INF);

    int diametro = dist[bfs(longe)];

    int qnt = 0;
    for(int i = 1; i <= n; i++) {
        dist = vi(n+1, INF);
        qnt += bfs_conta(i, diametro);
    }

    cout << diametro << endl;
    cout << qnt/2 << endl;
}