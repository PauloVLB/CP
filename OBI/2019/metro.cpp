#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int n, m;
vvi adjc, adjq;
vi distc, distq;
vi p;

ii bfs(int s, vvi &adj, vi &dist) {
    queue<int> fila;

    fila.push(s);
    dist[s] = 1;
    int maior_dist = -1;
    int mais_longe = -1;

    while(!fila.empty()) {
        int u = fila.front(); fila.pop();

        if(dist[u] > maior_dist) {
            maior_dist = dist[u];
            mais_longe = u;
        }

        for(int v : adj[u]) {
            if(dist[v] == INF) {
                fila.push(v);
                dist[v] = dist[u] + 1;
                p[v] = u;
            }
        }
    }

    return {mais_longe, maior_dist};
}

int main() {_ 
    cin >> n >> m;

    adjc = vvi(n+1);
    adjq = vvi(m+1);
    distc = vi(n+1, INF);
    distq = vi(m+1, INF);
    
    for(int i = 0; i < n-1; i++) {
        int u, v; cin >> u >> v;    
        adjc[u].pb(v);
        adjc[v].pb(u);
    }

    p = vi(n+1, -1);
    ii diametro = bfs(1, adjc, distc);
    
    p = vi(n+1, -1);
    distc = vi(n+1, INF);
    diametro = bfs(diametro.fs, adjc, distc);

    int centroq = -1;
    int qntv = 0;
    int dist_centro = (diametro.sc/2) + 1;
    
    while(diametro.fs != -1 && qntv < dist_centro) {
        qntv++;
        centroq = diametro.fs;
        diametro.fs = p[diametro.fs];
    }

    cout << centroq << " ";

    for(int i = 0; i < m-1; i++) {
        int u, v; cin >> u >> v;    
        adjq[u].pb(v);
        adjq[v].pb(u);
    }

    p = vi(m+1, -1);
    diametro = bfs(1, adjq, distq);
    
    p = vi(m+1, -1);
    distq = vi(m+1, INF);
    diametro = bfs(diametro.fs, adjq, distq);

    centroq = -1;
    qntv = 0;
    dist_centro = (diametro.sc/2) + 1;
    
    while(diametro.fs != -1 && qntv < dist_centro) {
        qntv++;
        centroq = diametro.fs;
        diametro.fs = p[diametro.fs];
    }

    cout << centroq << endl;
}