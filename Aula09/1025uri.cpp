#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, q, T, x, lo, md, hi, v[100005];

int main() {_
    while(cin >> n >> q && (n || q)) {
        cout << "CASE# " << ++T << ":\n"; 

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v, v+n);

        for(int i = 0; i < q; i++) {
            cin >> x;
            
            lo = 0; hi = n-1;
            while(lo < hi) {
                md = lo + (hi-lo)/2;
                if(x <= v[md]) hi = md;
                else lo = md + 1;
            }
            if(v[lo] == x) cout << x << " found at " << lo+1 << endl;
            else cout << x << " not found\n";
        }
    }

    return 0;
}