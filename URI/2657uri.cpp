#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define vi vector<int>

using namespace std;

int n, m, q, lvl;
map<string, int> mp;
string nome, u, v;
vi robado, olvl;

struct DSU {
    int* p;
    int* maior;
    int* t;

    DSU(int n){
        p = new int[n];
        maior = new int[n];
        t = new int[n];
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
        maior[b] = max(maior[b], maior[a]);
    }
};

int main() {_ 
    cin >> n >> m >> q;

    robado = vi(n+1, 0);
    olvl = vi(n+1);

    DSU dsu(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> nome >> lvl;
        mp[nome] = i;
        dsu.maior[i] = olvl[i] = lvl;
        dsu.p[i] = i;
        dsu.t[i] = 1;
    }

    for(int i = 1; i <= m; i++) {
        cin >> u >> v;
        dsu.join(mp[u], mp[v]);
        robado[mp[u]] = robado[mp[v]] = 1;
    }

    for(int i = 1; i <= q; i++) {
        cin >> nome;

        string ans = "N";
        int id = mp[nome];
        
        if(!robado[id]) {
            ans = "S";
        } else if(olvl[id] >= 5 || (dsu.maior[dsu.get(id)] <= 5)) {
            ans = "S";
        }

        cout << ans << endl;
    }
}