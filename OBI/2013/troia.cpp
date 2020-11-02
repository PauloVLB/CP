#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

int n, m;
int u, v, ans; 
vvi adj;
vi vis;

void bfs(int s){
    queue<int> fila;
    fila.push(s); vis[s] = 1;

    while(!fila.empty()) {
        int u = fila.front(); fila.pop();

        for(int v : adj[u]) {
            if(!vis[v]) {
                fila.push(v);
                vis[v] = 1;
            }
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
            bfs(i);
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
