#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f
#define vi vector<int>

using namespace std;

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


int main() {_ 
    int n, m; cin >> n >> m;

    init(n+1);
    int comp = n;
    
    vector<pair<int, int>> edgs;

    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        edgs.push_back({u, v});
    }

    int q; cin >> q;
    vector<int> queries, ordem;

    for(int i = 0; i < q; i++) {
        int n; cin >> n; 
        queries.push_back(--n);
        ordem.push_back(n);
    }

    sort(queries.begin(), queries.end());
    int pq = 0;

    for(int i = 0; i < m; i++) {
        if(pq < q && queries[pq] == i) {
            pq++;
        } else {
            if(get(edgs[i].first) != get(edgs[i].second)) {
                join(edgs[i].first, edgs[i].second);
                comp--;
            }
        }
    }

    vector<int> ans;

    for(int i = q-1; i >= 0; i--) {
        ans.push_back(comp);

        int u = edgs[ordem[i]].first;
        int v = edgs[ordem[i]].second;
        
        if(get(u) != get(v)) {
            join(u, v);
            comp--;
        }
    }

    cout << ans[q-1];
    for(int i = q-2; i >= 0; i--) {
        cout << " " << ans[i];
    }
    cout << endl;
}