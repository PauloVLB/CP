#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX 105

using namespace std;

int psa[MAX][MAX], xi, xf, yi, yf, n, ans;

int main(){_
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> xi >> xf >> yi >> yf;
        for(int j = xi; j < xf; j++) {
            for(int k = yi; k < yf; k++) {
                psa[j][k]++;
            }
        }
    }

    for(int i = 1; i < MAX; i++) {
        for(int j = 1; j < MAX; j++) {
            if(psa[i][j]) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
