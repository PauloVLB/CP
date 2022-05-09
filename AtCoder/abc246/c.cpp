#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define endl '\n'
#define int long long

using namespace std;

void print(vector<int> a) {
    cout << "[ ";

    for(int x : a) {
        cout << x << " ";
    }

    cout << "]\n";
}

int32_t main() {_ 
    int n, k, x; cin >> n >> k >> x;

    vi a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    for(int i = 0; i < n; i++) {
        if(a[i] >= x && k - (a[i]/x) >= 0) {
            k -= a[i]/x;
            a[i] %= x;
        }
    }

    sort(a.rbegin(), a.rend());

    for(int i = 0; i < n; i++) {
        if(k > 0) {
            a[i] = max(a[i] - x, 0LL);
            k--;
        } else {
            break;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += a[i];
    }
    cout << ans << endl;
}