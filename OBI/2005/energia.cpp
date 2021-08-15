#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define MAX 105

using namespace std;

int p[MAX], t[MAX], e, l, tt;

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
    a = get(a);
    b = get(b);

    if(a == b) return;

    if(t[a] > t[b]) swap(a, b);
    
    p[a] = b;
    t[b] += t[a];
}

int main() {_ 
    while((cin >> e >> l) && (e || l)) {
        cout << "Teste " << ++tt << endl;

        init(e);

        int q = e;
        for(int i = 0; i < l; i++) {
            int x, y; cin >> x >> y;

            q -= get(x) != get(y);
            join(x, y);
        }

        cout << (q == 1 ? "normal" : "falha") << endl << endl;
    }
}