#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int n, u, v, r;
vvi adj;
vi cor;

void dfs(int u, int c) {
    cor[u] = c;

    for(int v : adj[u]) {
        if(cor[v] == -1) {
            dfs(v, c^1);
        }
    }
}

int main() {_ 
    cin >> n;

    adj = vvi(n+1);
    cor = vi(n+1, -1);

    for(int i = 1; i < n; i++) {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    dfs(1, 1);

    for(int i = 1; i <= n; i++) {
        r += cor[i];
    }

    cout << (r == n/2 ? 'Y' : 'N') << endl;
}