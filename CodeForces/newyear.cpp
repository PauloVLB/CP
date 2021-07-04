#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int n, t, c;
vvi adj;
string ans = "NO";

void dfs(int u) {
    if(u == t) ans = "YES";

    for(int v : adj[u]) dfs(v);
}

int main() {_ 
    cin >> n >> t;
    adj = vvi(n+1);

    for(int i = 1; i < n; i++) {
        cin >> c;
        adj[i].eb(c + i);
    }

    dfs(1);

    cout << ans << endl;
}