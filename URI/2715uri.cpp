#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define int long long

using namespace std;

int n;

int32_t main(){_ 

    while(cin >> n) {
        vector<int> v(n);
        int tot = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            tot += v[i];
        }

        int atual = 0;
        int ans = INF;
        for(int i = 0; i < n; i++) {
            ans = min(ans, abs((tot-atual) - atual));
            atual += v[i];
        }

        cout << ans << endl;
    }
}