#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 1000005
#define vi vector<int>
#define pb push_back

using namespace std;

int n, m;
int removed[MAX];
vi p, t;

void init(int n) {
    p = vi(n);
    t = vi(n);
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

    if(t[a] > t[b]) swap(a,b);

    p[a] = b;
    t[b] += t[a];
}

int main() {
    cin >> n >> m;

    init(n+1);

    for(int i = 0; i < m; i++) {
        int x; cin >> x;
        
        if(x > n) continue;

        for(int j = x; j <= n; j += x) {
            int prox = j+1;
            while(get(prox) == get(j) && prox < n) {
                prox++;
            }
            join(j, prox);
        }

        // for(int i = 1; i <= n; i++) {
        //     cout << get(i) << " ";
        // }
        // cout << endl;
        for(int j = 1; j <= n; j++) {
            if(get(j) == j) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

// FAST CIN TA DESATIVADO