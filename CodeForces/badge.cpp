#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int n, p;
vvi adj;
vi vis;

int dfs(int u) {
    vis[u] = 1;

    int ans = 0;
    for(int v : adj[u]) {
        if(vis[v]) {
            ans = v;
            break;
        } 

        ans = dfs(v);
    }

    return ans;
}
int main() {_
    cin >> n;
    adj = vvi(n+1);
    
    for(int i = 1; i <= n; i++) {
        cin >> p;
        adj[i].eb(p);
    }

    for(int i = 1; i <= n; i++) {
        vis = vi(n+1, 0);
        cout << dfs(i) << " ";
    }
    cout << endl;
}
