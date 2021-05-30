#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

using namespace std;

ll n, k;
ll a, b, ans;

map<ll, ll> m;

int main() {_
   cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        m[a] += b;
    }

    for(auto [a, b] : m) {
        if(a - ans <= k) {
            k -= a-ans;
            ans = a;
            k += b;
        }
    }    
    ans += k < 0 ? 0 : k;

    cout << ans << endl;
}
