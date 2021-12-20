#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

vvi t, a;
vi vis, v;
int qnt;

void dfs(int u) {
    vis[u] = 1;

    for(int vv : t[u]) {
        if(a[v[u]][v[vv]]) qnt++;
        if(!vis[vv]) dfs(vv);
    }
}

int main() {_ 
    int n, m;
    cin >> n >> m;

    t = vvi(n);
    v = vi(n);
    vis = vi(n, 0);
    a = vvi(n, vi(n, 0));

    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v; u--, v--;
        t[u].pb(v);
        t[v].pb(u);
    }

    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v; u--, v--;
        a[u][v] = 1;
        a[v][u] = 1;
    }


    for(int i = 0; i < n; i++) {
        v[i] = i;
    }

    int ok = 0;
    do {
        qnt = 0;
        vis = vi(n, 0);
        for(int i = 0; i < n; i++) {
            if(!vis[i]) dfs(i);
        }
        // cout << "perm: ";
        // for(int x : v) {
        //     cout << x << " ";
        // }
        // cout << endl;
        // cout << qnt << endl;
        if(qnt == m+m) ok = 1;
    } while(next_permutation(v.begin(), v.end()));
    
    cout << (ok ? "Yes" : "No") << endl;
}