#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, v[3], ans;

int main() {_
    cin >> n;

    for(int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    sort(v, v+3);

    for(int i = 0; i < 3; i++) {
        ans += (n - v[i]) >= 0;
        n -= v[i];
    }

    cout << ans << endl;
    return 0;
}