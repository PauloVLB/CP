#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

vvi adj;
vi vis, tempo;
int ans;

void dfs(int u) {
    vis[u] = 1;
    ans += tempo[u];

    for(int v : adj[u]) {
        if(!vis[v]) dfs(v);
    }
}

int32_t main() {_ 
    int n; cin >> n;

    adj = vvi(n+1);
    tempo = vi(n+1);
    vis = vi(n+1, 0);

    for(int i = 1; i <= n; i++) {
        int t, k; cin >> t >> k;
        tempo[i] = t;
        while(k--) {
            int a; cin >> a;
            adj[i].pb(a);
        }
    }

    dfs(n);

    cout << ans << endl;
}