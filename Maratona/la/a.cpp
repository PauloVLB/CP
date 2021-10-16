#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); 
#define endl '\n'
#define INF 0x3f3f3f3f
#define vi vector<int>
#define int long long

using namespace std;

int n, k, e;

int32_t main() {_ 
    cin >> n >> k >> e;

    vector<int> c(n);

    int tot = 0;

    for(int i = 0; i < n; i++) {
        cin >> c[i];
        tot += c[i];
    }

    // k + ans*e = tot

    int cara = max(tot - k, 0LL);

    int ans = cara/e + (cara%e != 0);

    cout << max(ans, n) << endl;
}