#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define i64 long long
#define MAX 2053

using namespace std;

i64 psa[MAX][MAX], n, q, a, x, sub;

int main() {_

    cin >> n >> q;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <=n; j++) {
            cin >> a;
            psa[i][j] = a + psa[i-1][j] + psa[i][j-1] - psa[i-1][j-1];
        }
    }

    x = 1;
    for(int i = x; i <= n; i+=x) {
        for(int j = x; j <= n; j+=x) {
            sub = psa[i][j] - psa[i-x][j] - psa[i][j-x] + psa[i-x][j-x];
            if(sub < q) {
                x *= 2;
                i = x;
                break;
            }
        }       
    }

    cout << (n*n)/(x*x) << endl;

    return 0;
}