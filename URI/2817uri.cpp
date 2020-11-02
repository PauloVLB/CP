#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 1005

using namespace std;

int a, psa[MAX][MAX], n, m, l, sub, ans, allM, allC;
char c;
int main() {_
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> c;
            a = c == 'C' ? 25 : 12;
            psa[i][j] = a + psa[i-1][j] + psa[i][j-1] - psa[i-1][j-1];
        }
    }

    cin >> l;
    allM = l*l*12;
    allC = l*l*25;

    for(int i = l; i <= n; i++) {
        for(int j = l; j <= m; j++) {
            sub = psa[i][j] - psa[i-l][j] - psa[i][j-l] + psa[i-l][j-l];
            if(sub^0 && sub^allM && sub^allC) {
                ans = max(ans, sub);
            }
        }
    }

    cout << (ans ? ans : -1) << endl;

    return 0;
}
