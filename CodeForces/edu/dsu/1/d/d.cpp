#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);
#define ii pair<int, int>
#define fs first
#define sc second

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
};

int n, m, k, u, v;
string op;

int main() {_ 
    cin >> n >> m >> k;

    for(int i = 1; i <= m; i++) {
        cin >> u >> v;
    }

    DSU dsu(n+1);

    vector<pair<string, ii>> qs(k);

    for(int i = 0; i < k; i++) {
        cin >> qs[i].fs >> qs[i].sc.fs >> qs[i].sc.sc; 
    }

    vector<string> ans;
    int idx = 0;
    for(int i = k-1; i >= 0; i--) {
        // cout << qs[i].fs << " " << qs[i].sc.fs << " " << qs[i].sc.sc << endl;
        if(qs[i].fs == "ask") {
            ans.push_back(dsu.get(qs[i].sc.fs) == dsu.get(qs[i].sc.sc) ? "YES" : "NO");
        } else {
            dsu.join(qs[i].sc.fs, qs[i].sc.sc);
        }
    }

    for(int i = ans.size()-1; i >= 0; i--) {
        cout << ans[i] << endl;
    }
}