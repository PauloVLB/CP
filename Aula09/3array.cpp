#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long

using namespace std;

i64 n, a[1000005], sum, lo, md, hi;

int main() {_
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i-1];
    }

    for(int i = 1; i <= n; i++) {
        sum = a[n] - a[i];
        lo = 0; hi = i;
        while(lo < hi) {
            md = lo + (hi-lo)/2;
            if(sum <= a[md]) hi = md;
            else lo = md + 1;
        }
        if(a[lo] == sum) {
            cout << a[lo] << endl;
            break;
        }
    }
    return 0;
}