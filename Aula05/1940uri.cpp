#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int j, r, v[502], m = INT_MIN, x, ans;

int main() {_
    cin >> j >> r;

    for(int i = 0; i < j*r; i++) {
        cin >> x;
        v[i%j] += x;
        if(v[i%j] >= m) {
            m = v[i%j];
            ans = i%j;
        }
    }

    cout << ans + 1 << endl;

    return 0;
}