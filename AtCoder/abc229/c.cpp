#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define int long long

using namespace std;

int n, w;

int32_t main() {_ 
    cin >> n >> w;

    vector<pair<int, int>> g(n);
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        g[i].first = a;
        g[i].second = b;
    }

    sort(g.rbegin(), g.rend());

    int ans = 0;
    for(int i = 0; i < n && w > 0; i++) {
        int peguei = min(w, g[i].second);
        ans += g[i].first * peguei;
        w -= peguei;
    }

    cout << ans << endl;
}