#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 1005

using namespace std;

int a[MAX][MAX], psa[MAX][MAX], l, c, n, m, ans, sub;

int main(){_
    cin >> l >> c >> m >> n;
    for (int i = 1; i <= l; i++){
        for (int j = 1; j <= c; j++){
            cin >> a[i][j];
            psa[i][j] = a[i][j] + psa[i-1][j] + psa[i][j-1] - psa[i-1][j-1];
        }
    }

    for (int i = m; i <= l; i++){
        for (int j = n; j <= c; j++){
            sub = psa[i][j] - psa[i-m][j] - psa[i][j-n] + psa[i-m][j-n];
            ans = max(ans, sub);
        }
    }
    cout << ans << endl;
    return 0;        
}