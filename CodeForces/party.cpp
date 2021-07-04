#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int n, p, ans;
vvi adj;
vi dist;

void dfs(int u) {
    // cout << u << endl;
    for(int v : adj[u]) {
        if(dist[v] == 0) {
            dist[v] = dist[u] + 1;
            dfs(v);
        }
    }
}

int main() {_
    cin >> n;
    adj = vvi(n+1);
    dist = vi(n+1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> p;
        if(p == -1) p = 0;
        adj[p].eb(i);
    }

    for(int v : adj[0]) {
        if(dist[v] == 0) dfs(v);
    }
    
    for(int i = 1; i <= n; i++) {
        // cout << i << ": " << dist[i] << endl;
        ans = max(ans, dist[i]);
    }
    cout << ans+1 << endl;
}
