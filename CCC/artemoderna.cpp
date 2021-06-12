#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 5000005

using namespace std;

int n, m, k, x, ans;
char e;
int r[MAX], c[MAX];

int main() {_ 
    cin >> m >> n >> k;

    for(int i = 0; i < k; i++) {
        cin >> e >> x;
        if(e == 'R') {
            r[x]++;
        } else {
            c[x]++;
        }
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            ans += (r[i] + c[j])%2 == 1;
        }
    }

    cout << ans << endl;
}