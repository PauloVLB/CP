#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 100005
#define int long long
#define ii pair<int, int>
#define eb emplace_back
#define fs first
#define sc second

using namespace std;

int tt, n, m, q;
vector<int> p, t;

void init(int n) {
    p = vector<int>(n+1);
    t = vector<int>(n+1);
    for(int i = 0; i <= n; i++) {
        t[i] = 1;
        p[i] = i;
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

    if(t[a] > t[b]) {
        swap(a, b);
    }

    p[a] = b;
    t[b] += t[a];
}

int32_t main() {_ 
    cin >> tt;
    while(tt--) {
        cin >> n >> m >> q;

        init(n);

        vector<pair<int, ii>> e;
        for(int i = 1; i <= m; i++) {
            int x, y, k;
            cin >> x >> y >> k;

            e.push_back({k, {x, y}});
        }

        vector<ii> qs(q);

        for(int i = 0; i < q; i++) {
            cin >> qs[i].fs; qs[i].sc = i;
        }

        sort(e.rbegin(), e.rend());
        sort(qs.rbegin(), qs.rend());

        vector<int> ans(q);

        int nxte = 0;
        int qnt = 0;
        for(auto [f, id] : qs) {
            while(nxte < m && e[nxte].fs >= f) {
                int u = e[nxte].sc.fs;
                int v = e[nxte].sc.sc;

                nxte++;
                if(get(u) == get(v)) continue;

                int esq = t[get(u)];
                int dir = t[get(v)];
                join(u, v);

                qnt += esq*dir;    
            }
            ans[id] = qnt;
        }

        for(int aa : ans) {
            cout << aa << endl;
        }
    }
}