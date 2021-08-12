#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl '\n'
#define ii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define MAX 200005

using namespace std;

int p[MAX], t[MAX];
int n, m, u, v, w, ans;
vector<pair<int, ii>> e;

void init(int n) {
    for(int i = 1; i <= n; i++) {
        p[i] = i;
        t[i] = 1;
    }
}

int get(int a) {
    if(a != p[a]) {
        p[a] = get(p[a]);
    }

    return p[a];
}

void join(int a, int b) {
    a = get(a);
    b = get(b);

    if(a == b) return;

    if(t[a] > t[b]) swap(a, b);

    p[a] = b;
    t[b] += t[a];
}



int32_t main() {_ 
    cin >> n >> m;

    init(n);

    for(int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        e.pb({w, {u, v}});
    }

    sort(e.begin(), e.end());

    for(auto [p, a] : e) {
        if(get(a.fs) != get(a.sc)) {
            ans += p;
            join(a.fs, a.sc);
        }
    }

    cout << ans << endl;
}