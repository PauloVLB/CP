#include<bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define lsb(x) ((x) & (-x))
#define MAX 100005

using namespace std;

int n, q;
int a[MAX], ft[MAX];

void update(int idx, int val){
    while (idx <= n){
        ft[idx] += val;
        idx += lsb(idx);
    }
}

int query(int idx){
    int ans = 0;
    while (idx > 0){
        ans += ft[idx];
        idx -= lsb(idx);
    }
    return ans;
}

int main(){_
    cin >> n >> q;

    for(int i = 0; i <= n; i++) {
        ft[i] = 0;
    }

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        update(i, a[i]);
    }

    while(q--) {
        int op; cin >> op;
        if(op) {
            int k; cin >> k;
            cout << query(k) << endl;
        } else {
            int k, p; cin >> k >> p;
            int ant = query(k) - query(k-1);
            update(k, -ant + p);
        }
    }
}