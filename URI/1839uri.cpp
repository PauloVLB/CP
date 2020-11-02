#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long
#define MAX 55
#define MAXFAT 2505
#define MOD (int) (1e9 + 7)

using namespace std;

i64 psa[MAX][MAX], n, m, ia, ib, ja, jb, a, p, tot, ans;
i64 fat[MAXFAT], invfat[MAXFAT];
char c;

i64 inv_mod(i64 a, i64 b) {
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

int main() {_
    cin >> n >> m;

    fat[0] = 1;
    invfat[0] = 1;
    for(int i = 1; i < MAXFAT; i++) {
        fat[i] = (i * (fat[i-1]%MOD))%MOD;
        invfat[i] = inv_mod(fat[i], MOD);
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> c;
            a = c == '#';
            psa[i][j] = a + psa[i-1][j] + psa[i][j-1] - psa[i-1][j-1];
        }
    }

    while(cin >> ia >> ja >> ib >> jb) {
        tot = (ib - ia + 1) * (jb - ja + 1);
        p = psa[ib][jb] - psa[ia-1][jb] - psa[ib][ja-1] + psa[ia-1][ja-1];  
        ans = (fat[tot] * ((invfat[p] * invfat[tot-p])%MOD))%MOD - 1; 

        cout << ans << endl;
    }

    return 0;
}