#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
#define MAX 100005
#define int long long

using namespace std;

int t, n;
int d[MAX], s, ans, s2;

int32_t main() {_
    cin >> t;

    while(t--) {
        cin >> n;
        s = 0; ans = 0; s2 = 0;
        for(int i = 0; i < n; i++) {
            cin >> d[i];
        }

        //sort(d, d+n);

        for(int i = 0; i < n; i++) {
            s2 += (i*d[i]) - s;
            s += d[i];
            ans = max(ans, d[i]);
        }
        
        cout << ans - s2 << endl;
    }
}