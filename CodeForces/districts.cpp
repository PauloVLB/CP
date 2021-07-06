#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAXN 5005
#define vi vector<int> 
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int t, n, alc;
int a[MAXN];
vi vis;
vvi adj;

void dfs(int u) {
    vis[u] = 1;
    alc++;

    for(int i = 1; i <= n; i++) {
        if(!vis[i] && a[u] != a[i]) {
            adj[u].eb(i);
            dfs(i);
        }
    }
}

int main () {_ 
    cin >> t;

    while(t--) {
        cin >> n;
        adj = vvi(n+1);
        vis = vi(n+1, 0);
        alc = 0;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        dfs(1);

        cout << (alc == n ? "YES" : "NO") << endl;
        for(int i = 1; i <= n; i++) {
            for(int v : adj[i]) {
                cout << i << " " << v << endl;
            }
        }
    }
}