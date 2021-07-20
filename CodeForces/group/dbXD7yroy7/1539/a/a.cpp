#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

using namespace std;

int k;
int32_t main() {_
    cin >> k;

    while(k--) {
        int n, x, t;
        cin >> n >> x >> t;

        cout << max(0LL,n-t/x)*(t/x)+min(n-1,(t/x-1))*min(n,t/x)/2 << endl;
    }

    return 0;
}
