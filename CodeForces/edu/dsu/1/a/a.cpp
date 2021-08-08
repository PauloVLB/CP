#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 100005

using namespace std;

int n, m; 
string op;
int a, b;

struct DSU {
    int* p;
    int* t;

    void init(int n) {
        p = new int[n];
        t = new int[n];
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

        if(t[a] > t[b]) {
            swap(a, b);
        }
        p[a] = b;
        t[b] += t[a];
    }
} d;

int main() {_ 
    cin >> n >> m;

    d.init(n+1);

    while(m--) {
        cin >> op >> a >> b;
        if(op == "union") {
            d.join(a, b);
        } else {
            cout << (d.get(a) == d.get(b) ? "YES" : "NO") << endl;
        }
    }
}