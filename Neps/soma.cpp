#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 1000005

using namespace std;

int n, s, v[MAX], ans, lo, md, hi;

int main() {_
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> s;
    for(int i = 0; i < n; i++) {
        lo = i+1; hi = n-1;
        while(lo < hi) {
            md = lo + (hi-lo)/2;
            if((s-v[i]) <= v[md]) hi = md;
            else lo = md + 1;
        }
        if(v[lo] == (s-v[i])) {
            cout << v[i] << ' ' << v[lo] << endl;
            break;
        } 
    }
    return 0;
}
