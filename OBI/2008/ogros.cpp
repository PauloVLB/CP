#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 1000005

using namespace std;

int n, m, o, idx, val;
int f[MAX], p[MAX];

int main() {_
    cin >> n >> m;
    for(int i = 1; i < n; i++) cin >> f[i];
    for(int i = 0; i < n; i++) cin >> p[i];

    for(int i = 0; i < m; i++) {
        cin >> o;
        idx = upper_bound(f, f+n, o) - f - 1;
        cout << p[idx] << ' ';
    }
    cout << endl;
    return 0;
}