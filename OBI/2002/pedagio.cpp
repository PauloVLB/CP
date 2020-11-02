#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vvi vector<vi>
#define INF 55

using namespace std;

int n, m;
int u, v, ini, t, q;
vvi adj;
vi dist, ans;

void bfs(int s) {
    queue<int> fila;
    fila.push(s); dist[s] = 0;

    while(!fila.empty()) {
        int u = fila.front(); fila.pop();

        if(dist[u] <= t && u != s) {
            ans.push_back(u);
        }

        for(int v : adj[u]) {
            if(dist[v] == INF) {
                dist[v] = dist[u] + 1;
                fila.push(v);
            }
        }
    }
}

int main() {_
    while((cin >> n >> m >> ini >> t) && (n || m || ini || t))  {
        cout << "Teste " << ++q << endl;
        adj = vvi(n+1);
        dist = vi(n+1, INF);
        for(int i = 0; i < m; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bfs(ini);

        sort(ans.begin(), ans.end());

        int fim = ans.size();
        for(int i = 0; i < fim; i++) {
            cout << ans[i] << (i == fim ? '\n' : ' ');
        }
        cout << "\n\n";
        ans.clear();
    }
    return 0;
}
