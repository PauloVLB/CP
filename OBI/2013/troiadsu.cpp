#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

struct DSU {
    int* p;
    int* t;

    DSU(int n) {
        p = new int[n];
        t = new int[n];

        for(int i = 0; i <= n; i++) {
            p[i] = i;
            t[i] = 1;
        }
    }

    int get(int a) {
        return (p[a] != a ? p[a] = get(p[a]) : p[a]);
    }

    void join(int a, int b) {
        a = get(a);
        b = get(b);

        if(a == b) return;

        if(t[a] > t[b]) swap(a, b);

        p[a] = b;
        t[b] += t[a];
    }
};

int n, m, ans, u, v;

int main() {_
    cin >> n >> m;
    ans = n;

    DSU dsu(n);

    for(int i = 0; i < m; i++) {
        cin >> u >> v;
        ans -= (dsu.get(u) != dsu.get(v));
        dsu.join(u, v);
    }

    cout << ans << endl;
}
