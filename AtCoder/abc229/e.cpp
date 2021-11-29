#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define ii pair<int, int>
#define fs first
#define sc second

using namespace std;

int n, m;
vvi adj;

vi t, p;

void init(int n) {
    t = vi(n+1);
    p = vi(n+1);
    for(int i = 0; i <= n; i++) {
        p[i] = i;
        t[i] = 1;
    }
}

int get(int a) {
    if(p[a] != a) {
        p[a] = get(p[a]);
    }

    return p[a];
}

void join(int a, int b) {
    a = get(a);
    b = get(b);

    if(t[a] > t[b]) {
        swap(a, b);
    }

    p[a] = b;
    t[b] += t[a];
}


int main() {
    cin >> n >> m;

    adj = vvi(n+1);
    init(n+1);

    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        if(u > v) swap(u, v);
        adj[u].pb(v);
    }

    int comp = 0;
    vector<int> ans;

    for(int u = n; u >= 1; u--) {
        ans.pb(comp);
        comp++;
        for(int v : adj[u]) {
            if(get(v) != get(u)) {
                join(u, v);
                comp--;
            }
        }
    }

    for(int i = n-1; i >= 0; i--) {
        cout << ans[i] << endl;
    }
}