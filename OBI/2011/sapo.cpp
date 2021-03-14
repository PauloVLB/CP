#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;

int n, m, p, d, ans[105];

int main() {_ 
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        cin >> p >> d;

        ans[p] = 1;

        for(int j = p; j <= n; j += d) ans[j] = 1;
        for(int j = p; j >= 1; j -= d) ans[j] = 1;
    }

    for(int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }
}