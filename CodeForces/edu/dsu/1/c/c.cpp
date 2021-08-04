#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define int long long

using namespace std;

int n, m, x, v;
string opt;

struct DSU {
    int* p;
    int* exp;
    int* t;
    int* tira;

    DSU(int n) {
        p = new int[n];
        exp = new int[n];
        tira = new int[n];
        t = new int[n];

        for(int i = 0; i <= n; i++) {
            p[i] = i;
            t[i] = 1;
            exp[i] = 0;
            tira[i] = 0;
        }
    }

    int get(int a) {
        return (a == p[a] ? a : get(p[a]));
    }

    int getxp(int a) {
        return (a == p[a] ? exp[a] : (exp[a]-tira[a]+getxp(p[a])));
    }

    void join(int a, int b) {
        a = get(a);
        b = get(b);

        if(a == b) return;

        if(t[a] < t[b]) swap(a, b);

        p[b] = a;
        tira[b] = exp[a];
        t[a] += t[b];
        //exp[b] = exp[a];
    }

    void add(int a, int v) {
        a = get(a);
        exp[a] += v;
    }
};

int32_t main() {_ 
    cin >> n >> m;

    DSU dsu(n+1);

    for(int i = 0; i < m; i++) {
        cin >> opt;

        if(opt == "add") {
            cin >> x >> v;
            dsu.add(x, v);
        } else if(opt == "join") {
            cin >> x >> v;
            dsu.join(x, v);
        } else {
            cin >> x;
            cout << dsu.getxp(x) << endl;
        }
    }
}