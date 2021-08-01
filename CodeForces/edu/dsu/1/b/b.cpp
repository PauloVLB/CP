#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

struct DSU {
    int* p;
    int* t;
    int* ma;
    int* mi;

    DSU(int n) {
        p = new int[n];
        t = new int[n];
        ma = new int[n];
        mi = new int[n];

        for(int i = 0; i <= n; i++) {
            p[i] = i;
            t[i] = 1;
            ma[i] = i;
            mi[i] = i; 
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
        ma[b] = max(ma[b], ma[a]);
        mi[b] = min(mi[b], mi[a]);
        t[b] += t[a];
    }
};

int n, m;
string opt;
int u, v;
int main() {_ 
    cin >> n >> m;

    DSU dsu(n+1);

    for(int i = 0; i < m; i++) {
        cin >> opt;

        if(opt == "union") {
            cin >> u >> v;
            dsu.join(u, v);
        } else {
            cin >> v;
            int s = dsu.get(v);
            cout << dsu.mi[s] << " " << dsu.ma[s] << " " << dsu.t[s] << endl;
        }
    }
}