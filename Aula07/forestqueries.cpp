#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAXN 1003

using namespace std;

int n, q, a[MAXN][MAXN], psa[MAXN][MAXN], ia, ja, ib, jb, ans;
string l;

int main() {_
    cin >> n >> q;

    for(int i = 1; i <= n; i++) {
        cin >> l;
        for(int j = 1; j <= n; j++) {
            a[i][j] += l[j-1] == '*';
            psa[i][j] = a[i][j] + psa[i-1][j] + psa[i][j-1] - psa[i-1][j-1];
        }
    }

    for(int i = 0; i < q; i++) {
        cin >> ia >> ja >> ib >> jb;
        ans = psa[ib][jb] - psa[ia-1][jb] - psa[ib][ja-1] + psa[ia-1][ja-1];
        cout << ans << endl;
    }

    return 0;
}