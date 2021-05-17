#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define i64 long long int
#define INF 1e9+5
using namespace std;

int n, m, u, v, p, s, lag, liso = INF;
vector<pair<int, int>> g[1005];
vector<int> ping;
queue<int> q;
    
void bfs(int s) {
    q.push(s);
    ping[s] = 0;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        
        for(auto [v, p] : g[u]) {
            if(ping[u] + p < ping[v]) {
                ping[v] = ping[u] + p; 
                q.push(v);
            }
        }
    }
}

int main() {_ 
    cin >> n >> m;

    ping = vector<int>(n+1, INF);

    for(int i = 0; i < m; i++) {
        cin >> u >> v >> p;
        g[u].push_back({v, p});
        g[v].push_back({u, p});
    }

    cin >> s;

    bfs(s);

    for(int i = 1; i <= n; i++) {
        if(s != i) {
            lag = max(lag, ping[i]);
            liso = min(liso, ping[i]);
        }
    }   

    cout << lag - liso << endl;
}