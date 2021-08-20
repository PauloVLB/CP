#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 100005
#define ii pair<int, int>
#define fs first
#define sc second
#define vii vector<ii>

using namespace std;

int n, m, u, v, q;
vii edgs;
int p[MAX], t[MAX];

void init(int n) {
    for(int i = 0; i <= n; i++) {
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
    a = get(a); b = get(b);

    if(a == b) return;

    if(t[a] > t[b]) swap(a, b);

    p[a] = b;
    t[b] += t[a];
}

int32_t main() {_ 
    cin >> n >> m;

    init(n+1);

    for(int i = 0; i < m; i++) {
        cin >> u >> v;

        if(get(u) == get(v)) {
            q++;
            edgs.push_back({u, v});
        }
        join(u, v);
    }

    cout << q << endl;

    for(ii ed : edgs) {
        cout << ed.fs << " " << ed.sc << endl;
    }
}