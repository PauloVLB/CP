#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int n, m;
vvi adj;
vi deg;

int main() {_ 
    cin >> n >> m;

    adj = vvi(n+1);
    deg = vi(n+1, 0);

    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].pb(v);
        deg[v]++;
    } 

    priority_queue<int, vi, greater<int>> pq;

    for(int i = 1; i <= n; i++) {
        if(deg[i] == 0) {
            pq.push(i);
        }
    }

    vi ans;

    while(!pq.empty()) {
        int curr = pq.top(); pq.pop();

        ans.pb(curr);

        for(int to : adj[curr]) {
            deg[to]--;
            if(deg[to] == 0) {
                pq.push(to);
            }
        }
    }

    if((int) ans.size() != n) {
        cout << -1 << endl;
    } else {
        for(int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
}
