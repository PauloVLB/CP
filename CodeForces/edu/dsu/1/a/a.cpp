#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 100005

using namespace std;

int n, m; 
int p[MAX], t[MAX];
string op;
int a, b;

int get(int a) {
    if(a != p[a]) {
        p[a] = get(p[a]);
    }
    return p[a];
}

void join(int a, int b) {
    a = get(a);
    b = get(b);

    if(t[a] > t[b]) swap(a, b);

    p[a] = b;
    t[b] += t[a];
}
int main() {_ 
    cin >> n >> m;

    for(int i = 0; i <= n; i++) {
        p[i] = i;   
        t[i] = 1;     
    }

    while(m--) {
        cin >> op >> a >> b;
        if(op == "union") {
            join(a, b);
        } else {
            cout << (get(a) == get(b) ? "YES" : "NO") << endl;
        }
    }
}