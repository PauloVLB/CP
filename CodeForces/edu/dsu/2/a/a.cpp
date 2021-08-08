#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n' 

using namespace std;
 
int n, m, x;
char op;
 
struct DSU {
    int* p;
    int* maior;
 
    DSU(int n) {
        p = new int[n];
        maior = new int[n];
        for(int i = 0; i <= n; i++) {
            maior[i] = i;
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
 
        if(a == b) return;
 
        p[a] = b;
        maior[b] = max(maior[b], maior[a]);
    }
};
 
int main() {_ 
    cin >> n >> m;
 
    DSU dsu(n+1);
 
    while(m--) {
        cin >> op >> x;
        if(op == '-') {
            dsu.join(x, x+1);
        } else {
            int ans = dsu.maior[dsu.get(x)];
            cout << (ans == n+1 ? -1 : ans) << endl;
        }
    }
}
