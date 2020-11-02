#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, a[100005], x, m, pos;

int main() {_ 
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i-1];
    }

    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> x;
        pos = lower_bound(a, a+n, x) - a;
        cout << pos << endl;
    }
    return 0;
}